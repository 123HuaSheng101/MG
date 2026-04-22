// Fill out your copyright notice in the Description page of Project Settings.


#include "MGAttributeSet_Health.h"
#include "Net/UnrealNetwork.h"
#include "GameplayEffectExtension.h"

UMGAttributeSet_Health::UMGAttributeSet_Health()
{
	InitMaxHealth(100.f);
	InitHealth(100.f);
}

void UMGAttributeSet_Health::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION_NOTIFY(UMGAttributeSet_Health, Health, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UMGAttributeSet_Health, MaxHealth, COND_None, REPNOTIFY_Always);
}

void UMGAttributeSet_Health::PostGameplayEffectExecute(const struct FGameplayEffectModCallbackData& Data)
{
	Super::PostGameplayEffectExecute(Data);
	if (Data.EvaluatedData.Attribute == GetDamageAttribute())
	{
		const float DamageValue = GetDamage();
		const float OldHealthValue = GetHealth();
		const float MaxHealthValue = GetMaxHealth();
		const float NewHealthValue = FMath::Clamp(OldHealthValue - DamageValue, 0.0f, MaxHealthValue);
 
		if (OldHealthValue != NewHealthValue)
		{
			SetHealth(NewHealthValue);
		}
		SetDamage(0.0f);
	}
}

void UMGAttributeSet_Health::OnRep_Health(const FGameplayAttributeData& OldHealth)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UMGAttributeSet_Health, Health, OldHealth);
	const float OldValue = OldHealth.GetCurrentValue();
	const float NewValue = GetHealth();
	OnHealthChanged.Broadcast(this,OldValue,NewValue);
}

void UMGAttributeSet_Health::OnRep_MaxHealth(const FGameplayAttributeData& OldMaxHealth)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UMGAttributeSet_Health, MaxHealth, OldMaxHealth);
	const float CurrentHealth = GetHealth();
	OnHealthChanged.Broadcast(this, CurrentHealth, CurrentHealth);
}

void UMGAttributeSet_Health::PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue)
{
	if (Attribute == GetHealthAttribute())
	{
		NewValue = FMath::Clamp(NewValue, 0.f, GetMaxHealth());
		OnHealthChanged.Broadcast(this,GetHealth(),NewValue);
	}
	else if (Attribute == GetMaxHealthAttribute())
	{
		const float CurrentHealth = GetHealth();
		OnHealthChanged.Broadcast(this,CurrentHealth,CurrentHealth);
	}
	Super::PreAttributeChange(Attribute, NewValue);
}
