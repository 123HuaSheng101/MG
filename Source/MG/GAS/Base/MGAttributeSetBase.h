// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "MGAttributeSetBase.generated.h"
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FAttributeChangedEvent, UAttributeSet*, AttributeSet, float, OldValue, float, NewValue);

/**
 * 
 */
UCLASS(Abstract)
class MG_API UMGAttributeSetBase : public UAttributeSet
{
	GENERATED_BODY()
	
	
	
	
};
