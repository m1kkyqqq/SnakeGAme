// Fill out your copyright notice in the Description page of Project Settings.


#include "blocksnakeee.h"

// Sets default values
Ablocksnakeee::Ablocksnakeee()
{
	Collider1 = CreateDefaultSubobject<USphereComponent>(TEXT("Collider1"));
	Collider1->SetupAttachment(RootComponent);

	Collider2 = CreateDefaultSubobject<USphereComponent>(TEXT("Collider2"));
	Collider2->SetupAttachment(RootComponent)
}

// Called when the game starts or when spawned
void Ablocksnakeee::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void Ablocksnakeee::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

FVector Ablocksnakeee::RespawnFood()
{
	float MinX = FMath::Min(Collider1->GetComponentLocation().X, Collider2->GetComponentLocation().X);
	float MaxX = FMath::Max(Collider1->GetComponentLocation().X, Collider2->GetComponentLocation().X);

	float MinY = FMath::Min(Collider1->GetComponentLocation().Y, Collider2->GetComponentLocation().Y);
	float MaxY = FMath::Max(Collider1->GetComponentLocation().Y, Collider2->GetComponentLocation().Y);

	float RandomX = FMath::FRandRange(MinX, MaxX);
	float RandomY = FMath::FRandRange(MinY, MaxY);

	return FVector(RandomX, RandomY, 0.0f);
}
