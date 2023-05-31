// Fill out your copyright notice in the Description page of Project Settings.


#include "Shibata.h"
#include "Kismet/KismetSystemLibrary.h"

// Sets default values
AShibata::AShibata()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AShibata::BeginPlay()
{
	Super::BeginPlay();
	UKismetSystemLibrary::PrintString(this, "Hello Shibata Desu", true, true, FColor::Cyan, 2.f, TEXT("None"));
}

// Called every frame
void AShibata::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

