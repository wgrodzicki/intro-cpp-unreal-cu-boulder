// Fill out your copyright notice in the Description page of Project Settings.


#include "ActorMoverReverse.h"

/**
 * Sets default values
*/
AActorMoverReverse::AActorMoverReverse()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

/**
 * Called when the game starts or when spawned
*/
void AActorMoverReverse::BeginPlay()
{
	Super::BeginPlay();
	
    TArray<UStaticMeshComponent*> StaticMeshComponents;
    GetComponents(StaticMeshComponents);

    if (StaticMeshComponents.Num() != 0)
    {
        UStaticMeshComponent* StaticMesh = StaticMeshComponents[0];
        StaticMesh->AddImpulse(FVector(0.0f, -500.0f, 0.0f));
    }
}

/**
 * Called every frame
 * @param DeltaTime Game time elapsed during last frame modified by the time dilation
*/
void AActorMoverReverse::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

