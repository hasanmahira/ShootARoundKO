// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include <ShootARound/BaseWeapon.h>
#include "GameFramework/Actor.h"
#include "BaseAmmo.generated.h"


UCLASS()
class SHOOTAROUND_API ABaseAmmo : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ABaseAmmo();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//The total amount of ammo in this pickup
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
		int ammoAmount;

	//The type of ammo in this pickup
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
		EWeaponType ammoType;


};
