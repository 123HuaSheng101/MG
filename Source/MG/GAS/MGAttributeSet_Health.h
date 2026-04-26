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
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty> &OutLifetimeProps) const override;
	// 该函数在每个Gameplay效果应用后都会被调用
	virtual void PostGameplayEffectExecute(const struct FGameplayEffectModCallbackData& Data) override;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, ReplicatedUsing = OnRep_Health,meta = (HideFromModifiers))
	FGameplayAttributeData Health;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, ReplicatedUsing = OnRep_MaxHealth)
	FGameplayAttributeData MaxHealth;
	UPROPERTY(VisibleAnywhere)
	FGameplayAttributeData Damage;
	UFUNCTION()
	void OnRep_Health(const FGameplayAttributeData &OldHealth);
	UFUNCTION()
	void OnRep_MaxHealth(const FGameplayAttributeData &OldMaxHealth);
	virtual void PreAttributeChange(const FGameplayAttribute &Attribute, float &NewValue) override;
	UPROPERTY(BlueprintAssignable)
	FAttributeChangedEvent OnHealthChanged;
	ATTRIBUTE_ACCESSORS_BASIC(UMGAttributeSet_Health, Health);
	ATTRIBUTE_ACCESSORS_BASIC(UMGAttributeSet_Health, MaxHealth);
	ATTRIBUTE_ACCESSORS_BASIC(UMGAttributeSet_Health,Damage);
};
