// Fill out your copyright notice in the Description page of Project Settings.


#include "MGPlayerState_TPS.h"

#include "AbilitySystemComponent.h"
#include "MG/GAS/GMGASComponent_TPS.h"
#include "MG/GAS/MGAttributeSet_Health.h"


AMGPlayerState_TPS::AMGPlayerState_TPS()
{
	//技能组件
	ASC = CreateDefaultSubobject<UGMGASComponent_TPS>("GAC");
	ASC->SetIsReplicated(true);
	ASC->SetReplicationMode(EGameplayEffectReplicationMode::Mixed);
	
	HealthAS = CreateDefaultSubobject<UMGAttributeSet_Health>("HealthAS");
}
