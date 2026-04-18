// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "MGPlayerControllerBase.generated.h"

class UMGUserWidgetBase;
/**
 * 
 */
UCLASS()
class MG_API AMGPlayerControllerBase : public APlayerController
{
	GENERATED_BODY()
	
	
	
private:
	//游戏主界面
	UPROPERTY()
	TObjectPtr<UMGUserWidgetBase> OverLayer;
};
