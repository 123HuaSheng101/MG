// Copyright 2019 yangxiangyun
// All Rights Reserved

#include "ConnectionDrawingPolicy/NGASoundCueConnectionDrawingPolicy.h"

#ifdef NGA_WITH_ENGINE_CPP
#include "SoundCueGraphConnectionDrawingPolicy.cpp"
#else
#include "../EngineCppFiles/SoundCueGraphConnectionDrawingPolicy.cpp"
#endif

#if ENGINE_MAJOR_VERSION == 5 && ENGINE_MINOR_VERSION >= 6
#define FVector2D FVector2f
#endif

void FNGASoundCueGraphConnectionDrawingPolicy::DrawPreviewConnector(const FGeometry& PinGeometry, const FVector2D& StartPoint, const FVector2D& EndPoint, UEdGraphPin* Pin)
{
	OverrideDrawPreviewConnector(PinGeometry, StartPoint, EndPoint, Pin);
}


void FNGASoundCueGraphConnectionDrawingPolicy::Draw(TMap<TSharedRef<SWidget>, FArrangedWidget>& InPinGeometries, FArrangedChildren& ArrangedNodes)
{
	ResetPayloadData();
	FSoundCueGraphConnectionDrawingPolicy::Draw(InPinGeometries, ArrangedNodes);
	OverrideDraw(InPinGeometries, ArrangedNodes);
}


void FNGASoundCueGraphConnectionDrawingPolicy::DrawConnection(int32 LayerId, const FVector2D& Start, const FVector2D& End, const FConnectionParams& Params)
{
	OverrideDrawConnection(LayerId, Start, End, Params);
}

#if ENGINE_MAJOR_VERSION == 5 && ENGINE_MINOR_VERSION >= 6
#undef FVector2D
#endif