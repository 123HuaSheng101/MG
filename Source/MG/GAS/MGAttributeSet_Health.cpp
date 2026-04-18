// Fill out your copyright notice in the Description page of Project Settings.


#include "MGAttributeSet_Health.h"
#include "Net/UnrealNetwork.h"


UMGAttributeSet_Health::UMGAttributeSet_Health()
{
	MaxHealth = 100.0f;
	Health = MaxHealth;
}

void UMGAttributeSet_Health::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME_CONDITION_NOTIFY(UMGAttributeSet_Health, Health, COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UMGAttributeSet_Health, MaxHealth, COND_None, REPNOTIFY_Always);
}

void UMGAttributeSet_Health::OnRep_Health(const FGameplayAttributeData& OldHealth)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UMGAttributeSet_Health, Health, OldHealth);
}

void UMGAttributeSet_Health::OnRep_MaxHealth(const FGameplayAttributeData& OldMaxHealth)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UMGAttributeSet_Health, MaxHealth, OldMaxHealth);
}
