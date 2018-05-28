// Copyright 2018 (C)

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Badguy.generated.h"

UCLASS()
class JUMPINGTRUCK_API ABadguy : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABadguy();
	UPROPERTY(EditAnywhere, Category = Behavior)
	class UbehaviorTree *BotBehavior;

	//Called when the game starts or when spaned
	virtual void BeginPlay() override;

	//Called every frame
	virtual void Tick(float DeltaSeconds) override;

	//Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* InputCompont)

}