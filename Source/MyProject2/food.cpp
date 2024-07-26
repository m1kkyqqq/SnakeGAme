// Fill out your copyright notice in the Description page of Project Settings.


#include "food.h"
#include "snakebase.h"

// Sets default values
Afood::Afood()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void Afood::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void Afood::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void Afood::RespawnFood()
{
	FVector NewLocation = FVector(/* Новые координаты X, Y, Z */);
	FRotator NewRotation = FRotator(/* Новые углы поворота */);

	Afood* NewFood = GetWorld()->SpawnActor<Afood>(/* Параметры конструктора */);
	if (NewFood)
	{
		NewFood->SetActorLocation(NewLocation);
		NewFood->SetActorRotation(NewRotation);
	}
}


void Afood::Interact(AActor* interactor, bool bIsHead, float SpeedCoeff)
{
	if (bIsHead)
	{
		auto Snake = Cast<Asnakebase>(interactor);
		if (IsValid(Snake))
		{
			Snake->AddSnakeElement();
			Snake->SetActorTickInterval(Snake->GetActorTickInterval()* SpeedCoeff);
			RespawnFood();
		}
	}
}

