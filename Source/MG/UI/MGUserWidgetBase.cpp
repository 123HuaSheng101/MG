// Fill out your copyright notice in the Description page of Project Settings.


#include "MGUserWidgetBase.h"
#include "../GAS/Base/MGAttributeSetBase.h"

void UMGUserWidgetBase::SetAttributeSet(UMGAttributeSetBase* InAttributeSet)
{
	if (InAttributeSet == nullptr)
		return;
	AttributeSet = InAttributeSet;
	OnAttributeSetEvent(AttributeSet.Get());
}
