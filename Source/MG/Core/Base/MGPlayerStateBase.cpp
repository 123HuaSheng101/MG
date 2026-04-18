// Fill out your copyright notice in the Description page of Project Settings.


#include "MGPlayerStateBase.h"
#include "MG/GAS/GMGASComponent_TPS.h"

AMGPlayerStateBase::AMGPlayerStateBase()
{
	
}

UAbilitySystemComponent* AMGPlayerStateBase::GetAbilitySystemComponent() const
{
	return  ASC.Get();
}

void AMGPlayerStateBase::InitializeAbilityActorInfo()
{
	if (!ASC.Get())
	{
		return;
	}

	ASC->InitAbilityActorInfo(this, GetPawn());
}
