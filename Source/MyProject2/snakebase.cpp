// Fill out your copyright notice in the Description page of Project Settings.


#include "snakebase.h"
#include "SnakeElementBase.h"

// Sets default values
Asnakebase::Asnakebase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	ElementSize = 100.f;
	MovementSpeed = 10.f;
	LastMoveDirection = EMovementDirection::DOWN; 
}

// Called when the game starts or when spawned
void Asnakebase::BeginPlay()
{
	Super::BeginPlay();
	SetActorTickInterval(MovementSpeed);
	AddSnakeElement(5);
	
	
}

// Called every frame
void Asnakebase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Move();
}

void Asnakebase::AddSnakeElement(int ElementsNum)
{
	for (int i = 0; i < ElementsNum; i++)
	{
		FVector NewLocation( SnakeElements.Num() * ElementSize, 0, 0);
		if (SnakeElements.Num() > 1)
		{
			NewLocation = FVector(SnakeElements.Last()->GetActorLocation());
		}
		FTransform NewTransform(NewLocation);
		ASnakeElementBase * NewSnakeElem = GetWorld()->SpawnActor<ASnakeElementBase>(SnakeElementClass, NewTransform);
		NewSnakeElem->SnakeOwner = this;
		int32 ElemIndex = SnakeElements.Add(NewSnakeElem);
		if (ElemIndex == 0)
		{
			NewSnakeElem->SetFirstElementType();
		}
	}
}

void Asnakebase::Move()
{
	FVector MovementVector(FVector::ZeroVector);

	switch (LastMoveDirection)
	{
	case EMovementDirection::UP:
		MovementVector.X += ElementSize;
		break;
	case EMovementDirection::DOWN:
		MovementVector.X -= ElementSize;
		break;
	case EMovementDirection::LEFT:
		MovementVector.Y += ElementSize;
		break;
	case EMovementDirection::RIGHT:
		MovementVector.Y -= ElementSize;
		break;
	}

	//AddActorWorldOffset(MovementVector);
	SnakeElements[0]->ToggleCollision();

	for (int i = SnakeElements.Num() - 1; i > 0; i--)
	{
		auto CurrentElement = SnakeElements[i];
		auto PrevElement = SnakeElements[i - 1];
		FVector PrevLocation = PrevElement->GetActorLocation();
		CurrentElement->SetActorLocation(PrevLocation);
	}
	bCanTurn = true;
	SnakeElements[0]->AddActorWorldOffset(MovementVector); // SetActorLocation(GetActorLocation()+MovementVector)
	SnakeElements[0]->ToggleCollision();
}

void Asnakebase::SnakeElementOverlap(ASnakeElementBase* OverlappedElement, AActor* Other)
{
	if (IsValid(OverlappedElement))
	{
		int32 ElemIndex;
	    SnakeElements.Find(OverlappedElement, ElemIndex);
		bool bisFirst = ElemIndex == 0;
		IMyInterface* MyInterfaceInterface = Cast<IMyInterface>(Other);
		if (MyInterfaceInterface)
		{
			MyInterfaceInterface->Interact(this, bisFirst, 1.f);
		}
	}
}




