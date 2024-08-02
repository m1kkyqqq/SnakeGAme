// Fill out your copyright notice in the Description page of Project Settings.


#include "food.h"
#include "snakebase.h"
#include "Kismet/KismetMathLibrary.h"

// Sets default values
Afood::Afood()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	FoodMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FoodMeshComponent"));
	SetRootComponent(FoodMeshComponent);

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
	float minX = -650.f;

	float maxX = 650.f;

	float minY = -750.f;

	float maxY = 750.f;

	float Z = 70.f;

	FVector NewLocation = FVector(UKismetMathLibrary::RandomFloatInRange(minX, maxX), UKismetMathLibrary::RandomFloatInRange(minY, maxY), Z);
	FRotator NewRotation = FRotator(0, 0, 0);


		SetActorLocation(NewLocation);
		SetActorRotation(NewRotation);
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

