// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Components/SceneCaptureComponent2D.h"
#include "PortalManager.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TESTCHAMBER_API UPortalManager : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UPortalManager();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Portal)
	TSubclassOf<AActor> BluePortal_BP;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Portal)
	TSubclassOf<AActor> YellowPortal_BP;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable, Category = Portals)
	virtual void TestMessage();

	UFUNCTION(BlueprintCallable, Category = Portals)
	void OpenBluePortal();

	UFUNCTION(BlueprintCallable, Category = Portals)
	void OpenYellowPortal();

private:
	void SpawnBluePortal(FVector position, FVector hitNormal);
	void SpawnYellowPortal(FVector position, FVector hitNormal);

	

	void UpdatePortalCams();
	FVector GetNewCamPos(AActor* Portal, USceneCaptureComponent2D* PortalCam, AActor* OtherPortal);
	FQuat GetNewCamRot(AActor* Portal, AActor* OtherPortal);

	//references to the spawned portals
	AActor* BluePTL;
	AActor* YellowPTL;

	//references to the portal cameras
	USceneCaptureComponent2D* YellowCam = nullptr;
	USceneCaptureComponent2D* BlueCam = nullptr;
		
};
