// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MGCharacterBase.generated.h"

UCLASS()
class MG_API AMGCharacterBase : public ACharacter
{
	GENERATED_BODY()

public:
	AMGCharacterBase();

protected:
	virtual void BeginPlay() override;

	
	
};
