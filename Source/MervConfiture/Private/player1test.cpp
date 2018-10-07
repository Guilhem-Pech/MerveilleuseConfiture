// Fill out your copyright notice in the Description page of Project Settings.

#include "player1test.h"


// Sets default values
Aplayer1test::Aplayer1test()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void Aplayer1test::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void Aplayer1test::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void Aplayer1test::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

