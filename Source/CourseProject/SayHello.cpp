// Fill out your copyright notice in the Description page of Project Settings.


#include "SayHello.h"

/**
 * Sets default values
*/
ASayHello::ASayHello()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

/**
 * Called when the game starts or when spawned
*/
void ASayHello::BeginPlay()
{
	Super::BeginPlay();
	
    UE_LOG(LogTemp, Warning, TEXT("Hello, Unreal! Nice to see you!"));
}

/**
 * Called every frame
 * @param DeltaTime Game time elapsed during last frame modified by the time dilation
*/
void ASayHello::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

