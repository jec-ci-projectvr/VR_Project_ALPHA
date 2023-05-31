// Fill out your copyright notice in the Description page of Project Settings.


#include "Arita.h"
#include "Kismet/KismetSystemLibrary.h"
// Sets default values
AArita::AArita()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AArita::BeginPlay()
{
	Super::BeginPlay();
	UKismetSystemLibrary::PrintString(this, "dosukoiArita");
}

// Called every frame
void AArita::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

