// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "MGPlayerControllerBase.generated.h"

class UMGUserWidgetBase;

UCLASS()
class MG_API AMGPlayerControllerBase : public APlayerController
{
	GENERATED_BODY()
public:
	virtual void OnRep_PlayerState() override;
protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly, Category = "UserInterface", meta = (DisplayName = "Overlay"))
	TSubclassOf<UMGUserWidgetBase> OverLayerClass;

	
private:
	void InitializeOverLayer();

	UPROPERTY()
	TObjectPtr<UMGUserWidgetBase> OverLayer;
};
