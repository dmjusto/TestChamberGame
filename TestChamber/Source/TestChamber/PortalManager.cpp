// Fill out your copyright notice in the Description page of Project Settings.


#include "PortalManager.h"
#include "Animation/AnimInstance.h"
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

	// ...
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

// void ATestChamberCharacter::UpdatePortalCams()
// {
// 	if(BluePTL && YellowPTL)
// 	{
// 		//get the vector pointing from the blue portal to the player
// 		FVector BluePortalPos = BluePTL->GetActorLocation();
// 		FVector PlayerPos = GetOwner()->GetActorLocation();
// 		FVector BlueToPlayerVec = BluePortalPos - PlayerPos;

// 		FRotator NewYellowCamRot = BlueToPlayerVec.Rotation();

// 		//get the camera on the yellow portal
// 		class USceneCaptureComponent2D* YellowCam = YellowPTL->GetOwner()->FindComponentByClass<USceneCaptureComponent2D>();

// 		//Update Yellow camera rotation
// 		FHitResult HitResult;
// 		YellowCam->K2_SetRelativeRotation(NewYellowCamRot,true,HitResult,true);
// 	}
// }
