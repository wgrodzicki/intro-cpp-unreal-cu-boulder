// Fill out your copyright notice in the Description page of Project Settings.


#include "SizeChanger.h"

/**
 * Sets default values
*/
ASizeChanger::ASizeChanger()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

/**
 * Called when the game starts or when spawned
*/
void ASizeChanger::BeginPlay()
{
	Super::BeginPlay();

    FVector ActorSize = GetActorScale3D();

    // Change size
    SetActorScale3D(ActorSize * 3);

    // Change height
    //SetActorScale3D(FVector(ActorSize.X, ActorSize.Y, ActorSize.Z * 3));

    // Change width
    //SetActorScale3D(FVector(ActorSize.X, ActorSize.Y * 3, ActorSize.Z));
}

/**
 * Called every frame
 * @param DeltaTime Game time elapsed during last frame modified by the time dilation
*/
void ASizeChanger::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

