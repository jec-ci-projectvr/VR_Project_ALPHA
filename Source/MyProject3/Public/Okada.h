// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Okada.generated.h"

UCLASS()
class MYPROJECT3_API AOkada : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AOkada();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
