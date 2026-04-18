// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemInterface.h"
#include "GameFramework/PlayerState.h"
#include "MGPlayerStateBase.generated.h"

class UGMGASComponentBase;
struct FGameplayTag;
/**
 * 
 */
UCLASS(Abstract)
class MG_API AMGPlayerStateBase : public APlayerState, public IAbilitySystemInterface
{
	GENERATED_BODY()
public:
	AMGPlayerStateBase();
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;
	void InitializeAbilityActorInfo();

protected:
	UPROPERTY()
	TObjectPtr<UGMGASComponentBase> ASC;
private:
	
	
};
