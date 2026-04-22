// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MGCharacterBase.generated.h"

class UGMGASComponentBase;
UCLASS(Abstract)
class MG_API AMGCharacterBase : public ACharacter
{
	GENERATED_BODY()

public:
	AMGCharacterBase();
	virtual void PossessedBy(AController* NewController) override;
	virtual void BeginPlay() override;
	virtual void OnRep_PlayerState() override;
protected:


private:
	void InitializeAbilityActorInfo();
};
