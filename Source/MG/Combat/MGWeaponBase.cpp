// Fill out your copyright notice in the Description page of Project Settings.


#include "MGWeaponBase.h"

AMGWeaponBase::AMGWeaponBase()
{
	PrimaryActorTick.bCanEverTick = false;
	bReplicates = true;
	WeaponSKMesh = CreateDefaultSubobject<USkeletalMeshComponent>("WeaponSKMesh");
}

void AMGWeaponBase::BeginPlay()
{
	Super::BeginPlay();
}


