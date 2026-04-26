// Fill out your copyright notice in the Description page of Project Settings.


#include "MGAttributeSet_Weapon.h"

#include "AbilitySystemComponent.h"
#include "Net/UnrealNetwork.h"


UMGAttributeSet_Weapon::UMGAttributeSet_Weapon()
{
}

void UMGAttributeSet_Weapon::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME_CONDITION_NOTIFY(UMGAttributeSet_Weapon,AmmoCount,COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UMGAttributeSet_Weapon,MaxAmmoCount,COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UMGAttributeSet_Weapon,AmmunitionQuantity,COND_None, REPNOTIFY_Always);
}

void UMGAttributeSet_Weapon::OnRep_AmmoCount(const FGameplayAttributeData& OldAmmoCount)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UMGAttributeSet_Weapon, AmmoCount, OldAmmoCount);
	const float NewValue = AmmoCount.GetCurrentValue();
	const float OldValue = OldAmmoCount.GetCurrentValue();
	OnAmmoCountChanged.Broadcast(this,OldValue,NewValue);
}

void UMGAttributeSet_Weapon::OnRep_MaxAmmoCount(const FGameplayAttributeData& OldMaxAmmoCount)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UMGAttributeSet_Weapon, MaxAmmoCount, OldMaxAmmoCount);
	const float NewValue = AmmoCount.GetCurrentValue();
	const float OldValue = OldMaxAmmoCount.GetCurrentValue();
	OnMaxAmmoCountChanged.Broadcast(this,OldValue,NewValue);
}

void UMGAttributeSet_Weapon::OnRep_AmmunitionQuantity(const FGameplayAttributeData& OldAmmunitionQuantity)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UMGAttributeSet_Weapon, AmmunitionQuantity, OldAmmunitionQuantity);
	const float NewValue = AmmoCount.GetCurrentValue();
	const float OldValue = OldAmmunitionQuantity.GetCurrentValue();
	OnAmmunitionQuantityChanged.Broadcast(this,OldValue,NewValue);
}
