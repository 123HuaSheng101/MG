// Copyright 2019 yangxiangyun
// All Rights Reserved

#include "ConnectionDrawingPolicy/NGAAnimGraphConnectionDrawingPolicy.h"

#ifdef NGA_WITH_ENGINE_CPP
	#if ENGINE_MAJOR_VERSION == 5
		#include "AnimationPins/SGraphPinPose.cpp"
	#endif
#include "AnimGraphConnectionDrawingPolicy.cpp"
#else
#include "../EngineCppFiles/AnimGraphConnectionDrawingPolicy.cpp"
#endif

#if ENGINE_MAJOR_VERSION == 5 && ENGINE_MINOR_VERSION >= 6
#define FVector2D FVector2f
#endif


void FNGAAnimGraphConnectionDrawingPolicy::DrawPreviewConnector(const FGeometry& PinGeometry, const FVector2D& StartPoint, const FVector2D& EndPoint, UEdGraphPin* Pin)
{
	OverrideDrawPreviewConnector(PinGeometry, StartPoint, EndPoint, Pin);
}


void FNGAAnimGraphConnectionDrawingPolicy::Draw(TMap<TSharedRef<SWidget>, FArrangedWidget>& InPinGeometries, FArrangedChildren& ArrangedNodes)
{
	ResetPayloadData();
	FAnimGraphConnectionDrawingPolicy::Draw(InPinGeometries, ArrangedNodes);
	OverrideDraw(InPinGeometries, ArrangedNodes);
}


void FNGAAnimGraphConnectionDrawingPolicy::DrawConnection(int32 LayerId, const FVector2D& Start, const FVector2D& End, const FConnectionParams& Params)
{
	OverrideDrawConnection(LayerId, Start, End, Params);
}

#if ENGINE_MAJOR_VERSION == 5 && ENGINE_MINOR_VERSION >= 6
#undef FVector2D
#endif