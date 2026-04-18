// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "Base/MGAttributeSetBase.h"
#include "MGAttributeSet_Health.generated.h"

/**
 * 
 */
UCLASS()
class MG_API UMGAttributeSet_Health : public UMGAttributeSetBase
{
	GENERATED_BODY()
public:
	UMGAttributeSet_Health();
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, ReplicatedUsing = OnRep_Health)
	FGameplayAttributeData Health;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, ReplicatedUsing = OnRep_MaxHealth)
	FGameplayAttributeData MaxHealth;

	UFUNCTION()
	virtual void OnRep_Health(const FGameplayAttributeData& OldHealth);

	UFUNCTION()
	virtual void OnRep_MaxHealth(const FGameplayAttributeData& OldMaxHealth);
	
	ATTRIBUTE_ACCESSORS_BASIC(UMGAttributeSet_Health, Health);
	ATTRIBUTE_ACCESSORS_BASIC(UMGAttributeSet_Health, MaxHealth);
};
