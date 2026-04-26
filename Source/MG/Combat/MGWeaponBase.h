// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MGWeaponBase.generated.h"

UCLASS()
class MG_API AMGWeaponBase : public AActor
{
	GENERATED_BODY()
	
public:	
	AMGWeaponBase();
protected:
	virtual void BeginPlay() override;
	UPROPERTY(BlueprintReadOnly,EditDefaultsOnly)
	TObjectPtr<USkeletalMeshComponent> WeaponSKMesh;
private:
	

	
	
};
