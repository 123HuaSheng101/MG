// Fill out your copyright notice in the Description page of Project Settings.


#include "MGCharacterBase.h"
#include "MG/Core/Base/MGPlayerStateBase.h"



AMGCharacterBase::AMGCharacterBase()
{
 	PrimaryActorTick.bCanEverTick = true;

}

void AMGCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}

void AMGCharacterBase::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);

	InitializeAbilityActorInfo();
}

void AMGCharacterBase::OnRep_PlayerState()
{
	Super::OnRep_PlayerState();

	InitializeAbilityActorInfo();
}

void AMGCharacterBase::InitializeAbilityActorInfo()
{
	if (auto* MGPlayerState = GetPlayerState<AMGPlayerStateBase>())
	{
		MGPlayerState->InitializeAbilityActorInfo();
	}
}

