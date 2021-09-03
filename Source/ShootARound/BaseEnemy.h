// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseEnemy.generated.h"

UCLASS()
class SHOOTAROUND_API ABaseEnemy : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABaseEnemy();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


	UFUNCTION(BlueprintCallable)
		void TakeDamage(float _damage);

	//The current health of enemy
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemy")
		float health;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
