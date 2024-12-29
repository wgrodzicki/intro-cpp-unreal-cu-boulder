// Fill out your copyright notice in the Description page of Project Settings.


#include "Trigonometry.h"
#include <Kismet/KismetMathLibrary.h>

/**
 * Sets default values
*/
ATrigonometry::ATrigonometry()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

#pragma optimize("", off)

/**
 * Called when the game starts or when spawned
*/
void ATrigonometry::BeginPlay()
{
	Super::BeginPlay();
	
    float Angle = 45.0f;
    Angle *= UKismetMathLibrary::GetPI() / 180.0f;
    UE_LOG(LogTemp, Warning, TEXT("Sin(%f) = %f"), Angle, UKismetMathLibrary::Sin(Angle));
    UE_LOG(LogTemp, Warning, TEXT("Cos(%f) = %f"), Angle, UKismetMathLibrary::Cos(Angle));
}

/**
 * Called every frame
 * @param DeltaTime Game time elapsed during last frame modified by the time dilation
*/
void ATrigonometry::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

