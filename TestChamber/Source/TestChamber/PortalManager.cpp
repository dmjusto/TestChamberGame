// Fill out your copyright notice in the Description page of Project Settings.


#include "PortalManager.h"
#include "Animation/AnimInstance.h"
#include "GameFramework/Controller.h"
#include "DrawDebugHelpers.h"
#include <cmath>
#include "Math/Vector.h"
#include "Math/Quat.h"
#include "Engine/World.h"

// Sets default values for this component's properties
UPortalManager::UPortalManager()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UPortalManager::BeginPlay()
{
	Super::BeginPlay();	
	
}


// Called every frame
void UPortalManager::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	UpdatePortalCams();
}


void UPortalManager::TestMessage()
{
	UE_LOG(LogTemp, Warning, TEXT("You pulled the right trigger!!!"));
}

void UPortalManager::OpenBluePortal()
{

	//ray trace on fire
	FHitResult OutHit;
	FVector PlayerViewLocation;
	FRotator PlayerViewRotation;
	GetWorld()->GetFirstPlayerController()->GetPlayerViewPoint(OUT PlayerViewLocation,OUT PlayerViewRotation);
	FVector Start = PlayerViewLocation;
	FVector End = Start + PlayerViewRotation.Vector() * 10000.0f;
	FCollisionQueryParams CollisionParams;

	//when we hit something
	bool bHitSomething = GetWorld()->LineTraceSingleByChannel(OutHit, Start, End, ECC_Visibility, CollisionParams);

	if (bHitSomething)
	{
		SpawnBluePortal(OutHit.ImpactPoint + OutHit.ImpactNormal*0.01f, OutHit.ImpactNormal);
	}
}

void UPortalManager::OpenYellowPortal()
{

	//ray trace on fire
	FHitResult OutHit;
	FVector PlayerViewLocation;
	FRotator PlayerViewRotation;
	GetWorld()->GetFirstPlayerController()->GetPlayerViewPoint(OUT PlayerViewLocation,OUT PlayerViewRotation);
	FVector Start = PlayerViewLocation;
	FVector End = Start + PlayerViewRotation.Vector() * 10000.0f;
	FCollisionQueryParams CollisionParams;

	//when we hit something
	bool bHitSomething = GetWorld()->LineTraceSingleByChannel(OutHit, Start, End, ECC_Visibility, CollisionParams);

	if (bHitSomething)
	{
		SpawnYellowPortal(OutHit.ImpactPoint + OutHit.ImpactNormal*0.01f, OutHit.ImpactNormal);
	}
}

void UPortalManager::SpawnBluePortal(FVector position, FVector hitNormal)
{
	if (BluePortal_BP)
	{
		FActorSpawnParameters SpawnParams;
		FRotator Rotation = hitNormal.Rotation();

		if(BluePTL)
		{
			BluePTL->Destroy();
		}
		BluePTL = GetWorld()->SpawnActor<AActor>(BluePortal_BP, position, Rotation, SpawnParams);
	}
	
}



void UPortalManager::SpawnYellowPortal(FVector position, FVector hitNormal)
{
	if (YellowPortal_BP)
	{
		FActorSpawnParameters SpawnParams;
		FRotator Rotation = hitNormal.Rotation();

		if (YellowPTL)
		{
			YellowPTL->Destroy();
		}
		
		YellowPTL = GetWorld()->SpawnActor<AActor>(YellowPortal_BP, position, Rotation, SpawnParams);
	}
	
}

void UPortalManager::UpdatePortalCams()
{
	if(BluePTL && YellowPTL)
	{
		//Get Portal Cameras
		BlueCam = BluePTL->FindComponentByClass<USceneCaptureComponent2D>();
		YellowCam = YellowPTL->FindComponentByClass<USceneCaptureComponent2D>();

		FVector NewYellowPos = GetNewCamPos(BluePTL, YellowCam, YellowPTL);
		FVector NewBluePos = GetNewCamPos(YellowPTL, BlueCam, BluePTL);

		FHitResult* HitResult;

		//Update Portal camera positions
		BlueCam->SetWorldLocation(NewBluePos);
		BlueCam->SetWorldRotation(GetNewCamRot(BluePTL, YellowPTL));
		YellowCam->SetWorldLocation(NewYellowPos);

		YellowCam->SetWorldRotation(GetNewCamRot(YellowPTL, BluePTL));
	}
}

FVector UPortalManager::GetNewCamPos(AActor* Portal, USceneCaptureComponent2D* PortalCam, AActor* OtherPortal)
{
	//get player position this frame
	FVector PlayerViewLocation;
	FRotator PlayerViewRotation;
	GetWorld()->GetFirstPlayerController()->GetPlayerViewPoint(OUT PlayerViewLocation,OUT PlayerViewRotation);
	FVector PlayerPos = PlayerViewLocation;

	//get vector from portal to player
	FVector PlayerToPortal = PlayerPos - Portal->GetActorLocation();
	// FVector PlayerToPortal = Portal->GetActorLocation() - PlayerPos;

	//translate vector from world to local space
	FVector D_Product;
	D_Product.X = FVector::DotProduct(PlayerToPortal, Portal->GetActorForwardVector());
	D_Product.Y = FVector::DotProduct(PlayerToPortal, Portal->GetActorRightVector());
	D_Product.Z = FVector::DotProduct(PlayerToPortal, Portal->GetActorUpVector());

	// FVector NewDirection = D_Product.X * OtherPortal->GetActorForwardVector()
	// 					 + D_Product.Y * OtherPortal->GetActorRightVector()
	// 					 + D_Product.Z * OtherPortal->GetActorUpVector();

	FVector NewDirection = D_Product.Y * OtherPortal->GetActorRightVector()
						 + D_Product.Z * OtherPortal->GetActorUpVector();
						 

	return OtherPortal->GetActorLocation() + NewDirection;
	// return NewDirection;
}

FQuat UPortalManager::GetNewCamRot(AActor* Portal, AActor* OtherPortal)
{
	FTransform PortalTrans = Portal->GetActorTransform();
	FTransform OtherPortalTrans = OtherPortal->GetActorTransform();
	FTransform PlayerTrans = GetWorld()->GetFirstPlayerController()->GetPawn()->GetActorTransform();

	FQuat LocalQuat = PortalTrans.GetRotation().Inverse() * PlayerTrans.GetRotation();
	FQuat NewWorldQuat = OtherPortalTrans.GetRotation() * LocalQuat;

	return NewWorldQuat;
}
