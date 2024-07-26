// Fill out your copyright notice in the Description page of Project Settings.


#include "blocksnake.h"
#include "snakebase.h"

// Sets default values
Ablocksnake::Ablocksnake()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void Ablocksnake::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void Ablocksnake::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


void Ablocksnake::Interact(AActor* interactor, bool bIsHead, float SpeedCoeff)

{

    if (bIsHead)

    {

        auto Snake = Cast<Asnakebase>(interactor);

        if (IsValid(Snake))

        {

            Snake->Destroy();

             

        }

    }

}

