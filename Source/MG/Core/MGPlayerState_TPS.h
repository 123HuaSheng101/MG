// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Base/MGPlayerStateBase.h"
#include "MGPlayerState_TPS.generated.h"

class UMGAttributeSet_Health;
/**
 * 
 */
UCLASS()
class MG_API AMGPlayerState_TPS : public AMGPlayerStateBase
{
	GENERATED_BODY()
public:
	AMGPlayerState_TPS();
	UMGAttributeSet_Health* GetHealthAttributeSet()const;
private:
	UPROPERTY()
	TObjectPtr<UMGAttributeSet_Health> HealthAS;
	
};
