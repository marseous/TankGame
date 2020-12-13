// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TankGame.h"
#include "Tank.h"
#include "GameFramework/PlayerController.h"
#include "TankPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class TANKGAME_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	ATank* GetControlledTank() const;

	void BeginPlay() override;
	void Tick(float DeltaTime) override;

	void AimTowardsCrosshair();
	bool GetSightRayHitLocation(FVector &HitLocation);
	bool GetLookDirection(FVector2D ScreenLocation, FVector& LookDirection);

	UPROPERTY(EditAnywhere)		float CrosshairXLocation = 0.5f;
	UPROPERTY(EditAnywhere)		float CrosshairYLocation = 0.3333f;

};
