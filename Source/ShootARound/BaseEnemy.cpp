// Fill out your copyright notice in the Description page of Project Settings.

#include "BaseEnemy.h"
#include <ShootARound/ShootARoundCharacter.h>
#include <Runtime/Engine/Classes/Kismet/GameplayStatics.h>

// Sets default values
ABaseEnemy::ABaseEnemy()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Set the values of varibles
	health = 1.0f;

}

// Called when the game starts or when spawned
void ABaseEnemy::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ABaseEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	ACharacter* myCharacter = UGameplayStatics::GetPlayerCharacter(GetWorld(), 0);

	FVector EnemyLocation = this->GetActorLocation();

	FVector PlayerLocation = myCharacter->GetActorLocation();

	FVector MovementVector = PlayerLocation - EnemyLocation;

	//FVector Vel = (MovementVector.Normalize() * 0.1f * DeltaTime);
	FRotator NewRotation = myCharacter->GetActorRotation();
	ETeleportType Teleport = ETeleportType::TeleportPhysics;
	SetActorLocation(EnemyLocation + (MovementVector * 0.25f * DeltaTime));
	SetActorRotation(NewRotation, Teleport);

}


// Called every frame
void ABaseEnemy::TakeDamage(float _damage)
{
	health -= _damage;
	if (health<=0)
	{
		ABaseEnemy::Destroy();
	}
}
