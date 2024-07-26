// Fill out your copyright notice in the Description page of Project Settings.


#include "foodspeed.h"


// Sets default values
Afoodspeed::Afoodspeed()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void Afoodspeed::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void Afoodspeed::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void Afoodspeed::Interact(AActor* Interactor, bool bIsHead, float SpeedCoeff)
{
	Super::Interact(Interactor, bIsHead, SpeedC);
}