// Fill out your copyright notice in the Description page of Project Settings.


#include "MGPlayerControllerBase.h"
#include "../../UI/MGUserWidgetBase.h"
#include "MG/Core/MGPlayerState_TPS.h"
#include  "../../GAS/MGAttributeSet_Health.h"
void AMGPlayerControllerBase::BeginPlay()
{
	Super::BeginPlay();
}

void AMGPlayerControllerBase::OnRep_PlayerState()
{
	Super::OnRep_PlayerState();
	InitializeOverLayer();
}

void AMGPlayerControllerBase::InitializeOverLayer()
{
	if (IsValid(OverLayerClass))
	{
		UE_LOG(LogTemp,Warning,TEXT("AMGPlayerControllerBase::InitializeOverLayer()::OverLayerClass is none"));
	}
	OverLayer = CreateWidget<UMGUserWidgetBase>(this, OverLayerClass);
	if (IsValid(OverLayer.Get()))
	{
		OverLayer->AddToViewport();
		
		TWeakObjectPtr<AMGPlayerState_TPS> PlayerState_TPS = Cast<AMGPlayerState_TPS>(PlayerState);
		if (PlayerState_TPS.IsValid())
		{
			OverLayer->SetAttributeSet(PlayerState_TPS->GetHealthAttributeSet());
		}
	}
	
	
}
