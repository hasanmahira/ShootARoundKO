// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseWeapon.generated.h"

UENUM(BlueprintType)
enum class EWeaponType : uint8
{
	E_AssultRifle	UMETA(DisplayName = "ASSULT_RIFLE"),
	E_Pistol		UMETA(DisplayName = "PISTOL"),
	E_ShoutGun		UMETA(DisplayName = "SHOUTGUN")
};

UCLASS()
class SHOOTAROUND_API ABaseWeapon : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABaseWeapon();

	//The total amount of ammo that can be carried on weapon
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
		int maxTotalAmmo;

	//The total amount of ammo that can be in the weapon
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
		int maxClipAmmo;

	//The total amount of ammo being carried for the weapon
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
		int totalAmmo;

	//The amount of ammo in the weapon
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
		int clipAmmo;

	//The time it takes to reload the weapon
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
		float reloadTime;

	//The type of the weapon
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon")
		EWeaponType weaponType;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
