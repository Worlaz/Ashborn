// Fill out your copyright notice in the Description page of Project Settings.


#include "TestPawn2.h"

// Sets default values
ATestPawn2::ATestPawn2()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATestPawn2::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATestPawn2::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ATestPawn2::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

