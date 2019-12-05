// Fill out your copyright notice in the Description page of Project Settings.


#include "Portal.h"
#include "UObject/UObjectGlobals.h"

// Sets default values
APortal::APortal()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
    
    //Setup portalcam
   PortalCam = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("PortalCameraComponent"));

}

// Called when the game starts or when spawned
void APortal::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APortal::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

