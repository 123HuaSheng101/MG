// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MGUserWidgetBase.generated.h"

class UMGAttributeSetBase;
/**
 * 
 */
UCLASS(Abstract)
class MG_API UMGUserWidgetBase : public UUserWidget
{
	GENERATED_BODY()
public:
	void SetAttributeSet(UMGAttributeSetBase* InAttributeSet);
protected:
	UFUNCTION(BlueprintImplementableEvent,Category = "AttributeSet")
	void OnAttributeSetEvent(UMGAttributeSetBase* InAttributeSet);
	UPROPERTY(BlueprintReadOnly,Category="AttributeSet")
	TWeakObjectPtr<UMGAttributeSetBase> AttributeSet;
};
