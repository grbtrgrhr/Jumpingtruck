// Copyright 2018 (C)

#include "Badguy.h"


// Sets default values
ABadguy::ABadguy()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABadguy::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABadguy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABadguy::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

