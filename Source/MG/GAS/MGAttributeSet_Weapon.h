// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Base/MGAttributeSetBase.h"
#include "MGAttributeSet_Weapon.generated.h"

/**
 * 
 */
UCLASS()
class MG_API UMGAttributeSet_Weapon : public UMGAttributeSetBase
{
	GENERATED_BODY()
public:
	UMGAttributeSet_Weapon();
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty> &OutLifetimeProps) const override;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, ReplicatedUsing = OnRep_AmmoCount)
	FGameplayAttributeData AmmoCount;//武器当前弹药数量
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, ReplicatedUsing = OnRep_MaxAmmoCount)
	FGameplayAttributeData MaxAmmoCount;//武器最大弹药数量，用于换弹计算弹药数量
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, ReplicatedUsing = OnRep_AmmunitionQuantity)
	FGameplayAttributeData AmmunitionQuantity;//后备的弹药数量
	
	UFUNCTION()
	void OnRep_AmmoCount(const FGameplayAttributeData &OldAmmoCount);
	UFUNCTION()
	void OnRep_MaxAmmoCount(const FGameplayAttributeData &OldMaxAmmoCount);
	UFUNCTION()
	void OnRep_AmmunitionQuantity(const FGameplayAttributeData &OldAmmunitionQuantity);
	UPROPERTY(BlueprintAssignable)
	FAttributeChangedEvent OnAmmoCountChanged;
	UPROPERTY(BlueprintAssignable)
	FAttributeChangedEvent OnMaxAmmoCountChanged;
	UPROPERTY(BlueprintAssignable)
	FAttributeChangedEvent OnAmmunitionQuantityChanged;
};
