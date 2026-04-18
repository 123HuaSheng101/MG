// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NodeGraphAssistantConfig.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeNodeGraphAssistantConfig() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
NGAGRAPHUTILITY_API UClass* Z_Construct_UClass_UNodeGraphAssistantConfig();
NGAGRAPHUTILITY_API UClass* Z_Construct_UClass_UNodeGraphAssistantConfig_NoRegister();
NGAGRAPHUTILITY_API UEnum* Z_Construct_UEnum_NGAGraphUtility_EAutoConnectModifier();
NGAGRAPHUTILITY_API UEnum* Z_Construct_UEnum_NGAGraphUtility_ECutOffMouseButton();
UPackage* Z_Construct_UPackage__Script_NGAGraphUtility();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum ECutOffMouseButton ********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECutOffMouseButton;
static UEnum* ECutOffMouseButton_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECutOffMouseButton.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECutOffMouseButton.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NGAGraphUtility_ECutOffMouseButton, (UObject*)Z_Construct_UPackage__Script_NGAGraphUtility(), TEXT("ECutOffMouseButton"));
	}
	return Z_Registration_Info_UEnum_ECutOffMouseButton.OuterSingleton;
}
template<> NGAGRAPHUTILITY_API UEnum* StaticEnum<ECutOffMouseButton>()
{
	return ECutOffMouseButton_StaticEnum();
}
struct Z_Construct_UEnum_NGAGraphUtility_ECutOffMouseButton_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Left.DisplayName", "Left" },
		{ "Left.Name", "ECutOffMouseButton::Left" },
		{ "Middle.DisplayName", "Middle" },
		{ "Middle.Name", "ECutOffMouseButton::Middle" },
		{ "ModuleRelativePath", "Public/NodeGraphAssistantConfig.h" },
		{ "None.DisplayName", "Disabled" },
		{ "None.Name", "ECutOffMouseButton::None" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECutOffMouseButton::Middle", (int64)ECutOffMouseButton::Middle },
		{ "ECutOffMouseButton::Left", (int64)ECutOffMouseButton::Left },
		{ "ECutOffMouseButton::None", (int64)ECutOffMouseButton::None },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NGAGraphUtility_ECutOffMouseButton_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_NGAGraphUtility,
	nullptr,
	"ECutOffMouseButton",
	"ECutOffMouseButton",
	Z_Construct_UEnum_NGAGraphUtility_ECutOffMouseButton_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_NGAGraphUtility_ECutOffMouseButton_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_NGAGraphUtility_ECutOffMouseButton_Statics::Enum_MetaDataParams), Z_Construct_UEnum_NGAGraphUtility_ECutOffMouseButton_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_NGAGraphUtility_ECutOffMouseButton()
{
	if (!Z_Registration_Info_UEnum_ECutOffMouseButton.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECutOffMouseButton.InnerSingleton, Z_Construct_UEnum_NGAGraphUtility_ECutOffMouseButton_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECutOffMouseButton.InnerSingleton;
}
// ********** End Enum ECutOffMouseButton **********************************************************

// ********** Begin Enum EAutoConnectModifier ******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAutoConnectModifier;
static UEnum* EAutoConnectModifier_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAutoConnectModifier.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAutoConnectModifier.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NGAGraphUtility_EAutoConnectModifier, (UObject*)Z_Construct_UPackage__Script_NGAGraphUtility(), TEXT("EAutoConnectModifier"));
	}
	return Z_Registration_Info_UEnum_EAutoConnectModifier.OuterSingleton;
}
template<> NGAGRAPHUTILITY_API UEnum* StaticEnum<EAutoConnectModifier>()
{
	return EAutoConnectModifier_StaticEnum();
}
struct Z_Construct_UEnum_NGAGraphUtility_EAutoConnectModifier_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Alt.DisplayName", "Alt" },
		{ "Alt.Name", "EAutoConnectModifier::Alt" },
		{ "ModuleRelativePath", "Public/NodeGraphAssistantConfig.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EAutoConnectModifier::None" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAutoConnectModifier::Alt", (int64)EAutoConnectModifier::Alt },
		{ "EAutoConnectModifier::None", (int64)EAutoConnectModifier::None },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NGAGraphUtility_EAutoConnectModifier_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_NGAGraphUtility,
	nullptr,
	"EAutoConnectModifier",
	"EAutoConnectModifier",
	Z_Construct_UEnum_NGAGraphUtility_EAutoConnectModifier_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_NGAGraphUtility_EAutoConnectModifier_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_NGAGraphUtility_EAutoConnectModifier_Statics::Enum_MetaDataParams), Z_Construct_UEnum_NGAGraphUtility_EAutoConnectModifier_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_NGAGraphUtility_EAutoConnectModifier()
{
	if (!Z_Registration_Info_UEnum_EAutoConnectModifier.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAutoConnectModifier.InnerSingleton, Z_Construct_UEnum_NGAGraphUtility_EAutoConnectModifier_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAutoConnectModifier.InnerSingleton;
}
// ********** End Enum EAutoConnectModifier ********************************************************

// ********** Begin Class UNodeGraphAssistantConfig ************************************************
void UNodeGraphAssistantConfig::StaticRegisterNativesUNodeGraphAssistantConfig()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UNodeGraphAssistantConfig;
UClass* UNodeGraphAssistantConfig::GetPrivateStaticClass()
{
	using TClass = UNodeGraphAssistantConfig;
	if (!Z_Registration_Info_UClass_UNodeGraphAssistantConfig.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("NodeGraphAssistantConfig"),
			Z_Registration_Info_UClass_UNodeGraphAssistantConfig.InnerSingleton,
			StaticRegisterNativesUNodeGraphAssistantConfig,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UNodeGraphAssistantConfig.InnerSingleton;
}
UClass* Z_Construct_UClass_UNodeGraphAssistantConfig_NoRegister()
{
	return UNodeGraphAssistantConfig::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UNodeGraphAssistantConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "NodeGraphAssistantConfig.h" },
		{ "ModuleRelativePath", "Public/NodeGraphAssistantConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnableLeftClickMultiConnect_MetaData[] = {
		{ "Category", "Features" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Keep connection wire alive after making pin connection.*/" },
#endif
		{ "ModuleRelativePath", "Public/NodeGraphAssistantConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Keep connection wire alive after making pin connection." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnableLazyConnect_MetaData[] = {
		{ "Category", "Features" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** When dragging a wire over a node,wire automatically align to closest connectible pin*/" },
#endif
		{ "ModuleRelativePath", "Public/NodeGraphAssistantConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When dragging a wire over a node,wire automatically align to closest connectible pin" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnableCutoffWire_MetaData[] = {
		{ "Category", "Features" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Drag mouse to cut off wire along its way. */" },
#endif
		{ "ModuleRelativePath", "Public/NodeGraphAssistantConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Drag mouse to cut off wire along its way." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnableSelectStream_MetaData[] = {
		{ "Category", "Features" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Select nodes that are connected to middle mouse double clicked node.*/" },
#endif
		{ "ModuleRelativePath", "Public/NodeGraphAssistantConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Select nodes that are connected to middle mouse double clicked node." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnableCreateNodeOnWire_MetaData[] = {
		{ "Category", "Features" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Right click on wire to insert new node*/" },
#endif
		{ "ModuleRelativePath", "Public/NodeGraphAssistantConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Right click on wire to insert new node" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnableAutoConnect_MetaData[] = {
		{ "Category", "Features" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** When dragging a node, auto display surrounding connectible pin,release mouse to make connection*/" },
#endif
		{ "ModuleRelativePath", "Public/NodeGraphAssistantConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When dragging a node, auto display surrounding connectible pin,release mouse to make connection" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnableShakeNodeOffWire_MetaData[] = {
		{ "Category", "Features" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**  Quickly swing node 3 times to break node off wire.*/" },
#endif
		{ "ModuleRelativePath", "Public/NodeGraphAssistantConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Quickly swing node 3 times to break node off wire." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnableInsertNodeOnWire_MetaData[] = {
		{ "Category", "Features" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Drag and insert node on wire*/" },
#endif
		{ "ModuleRelativePath", "Public/NodeGraphAssistantConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Drag and insert node on wire" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DragCutOffWireMouseButton_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** When moving mouse with alt and this mouse button down will cut off wires under cursor, not affect alt+left click cut off wire feature. */" },
#endif
		{ "ModuleRelativePath", "Public/NodeGraphAssistantConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When moving mouse with alt and this mouse button down will cut off wires under cursor, not affect alt+left click cut off wire feature." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodesRearrangeSpacing_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** How much distance between two nodes next to each other after rearranging nodes. */" },
#endif
		{ "ModuleRelativePath", "Public/NodeGraphAssistantConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How much distance between two nodes next to each other after rearranging nodes." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodesRearrangeSpacingAIGraph_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** How much distance between two nodes next to each other after rearranging nodes,for behavior tree graph and EQS graph. */" },
#endif
		{ "ModuleRelativePath", "Public/NodeGraphAssistantConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How much distance between two nodes next to each other after rearranging nodes,for behavior tree graph and EQS graph." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodesRearrangeSpacingRelaxFactor_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Offset node a little if this node is connected to a lot wires so wires can be seen more clearly. */" },
#endif
		{ "ModuleRelativePath", "Public/NodeGraphAssistantConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Offset node a little if this node is connected to a lot wires so wires can be seen more clearly." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CreateNodeOnlyOnSelectedWire_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** if checked,when wire under mouse is not selected(just been clicked) when add new node, new node wont get inserted into wire. */" },
#endif
		{ "ModuleRelativePath", "Public/NodeGraphAssistantConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "if checked,when wire under mouse is not selected(just been clicked) when add new node, new node wont get inserted into wire." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BypassNodeAnyway_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** remove node even if can not fully bypass node's all pins. */" },
#endif
		{ "ModuleRelativePath", "Public/NodeGraphAssistantConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "remove node even if can not fully bypass node's all pins." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShakeNodeOffWireTimeWindow_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** if you swing a node 3 times in this time period,will break off this node from wire.*/" },
#endif
		{ "ModuleRelativePath", "Public/NodeGraphAssistantConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "if you swing a node 3 times in this time period,will break off this node from wire." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoConnectRadius_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** remove node even if can not fully bypass node's all pins. */" },
#endif
		{ "ModuleRelativePath", "Public/NodeGraphAssistantConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "remove node even if can not fully bypass node's all pins." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoConnectModifier_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** when dragging a node and this button down will enable auto connect */" },
#endif
		{ "ModuleRelativePath", "Public/NodeGraphAssistantConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "when dragging a node and this button down will enable auto connect" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BypassAndCopyNodes_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** copy nodes to clipboard after successful bypass. */" },
#endif
		{ "ModuleRelativePath", "Public/NodeGraphAssistantConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "copy nodes to clipboard after successful bypass." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToolBarButton_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** show button in toolbar,need to restart editor */" },
#endif
		{ "ModuleRelativePath", "Public/NodeGraphAssistantConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "show button in toolbar,need to restart editor" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverrideAutoConnectPreviewWireColor_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**should override auto connect preview wire color */" },
#endif
		{ "ModuleRelativePath", "Public/NodeGraphAssistantConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "should override auto connect preview wire color" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoConnectPreviewWireColor_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/NodeGraphAssistantConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InsertNodeShowDeletedWireAsRed_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** When dragging node can be inserted into hovered wire,mark hovered wire as red */" },
#endif
		{ "ModuleRelativePath", "Public/NodeGraphAssistantConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When dragging node can be inserted into hovered wire,mark hovered wire as red" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HideToolTipWhenDraggingNode_MetaData[] = {
		{ "Category", "Other" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** */" },
#endif
		{ "ModuleRelativePath", "Public/NodeGraphAssistantConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectDownStreamNodeForBothDirection_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/NodeGraphAssistantConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectStreamCutoffDistance_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/NodeGraphAssistantConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverrideMaterialGraphPinColor_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*, EditAnywhere, Category = WireStyle*/" },
#endif
		{ "ModuleRelativePath", "Public/NodeGraphAssistantConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", ", EditAnywhere, Category = WireStyle" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Float1PinWireColor_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*, EditAnywhere, Category = WireStyle*/" },
#endif
		{ "ModuleRelativePath", "Public/NodeGraphAssistantConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", ", EditAnywhere, Category = WireStyle" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Float2PinWireColor_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*, EditAnywhere, Category = WireStyle*/" },
#endif
		{ "ModuleRelativePath", "Public/NodeGraphAssistantConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", ", EditAnywhere, Category = WireStyle" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Float3PinWireColor_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*, EditAnywhere, Category = WireStyle*/" },
#endif
		{ "ModuleRelativePath", "Public/NodeGraphAssistantConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", ", EditAnywhere, Category = WireStyle" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Float4PinWireColor_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*, EditAnywhere, Category = WireStyle*/" },
#endif
		{ "ModuleRelativePath", "Public/NodeGraphAssistantConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", ", EditAnywhere, Category = WireStyle" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoolPinWireColor_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*, EditAnywhere, Category = WireStyle*/" },
#endif
		{ "ModuleRelativePath", "Public/NodeGraphAssistantConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", ", EditAnywhere, Category = WireStyle" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TexturePinWireColor_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*, EditAnywhere, Category = WireStyle*/" },
#endif
		{ "ModuleRelativePath", "Public/NodeGraphAssistantConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", ", EditAnywhere, Category = WireStyle" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialAttributesPinWireColor_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*, EditAnywhere, Category = WireStyle*/" },
#endif
		{ "ModuleRelativePath", "Public/NodeGraphAssistantConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", ", EditAnywhere, Category = WireStyle" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WireStyleStraight_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*, EditAnywhere, Category = WireStyle*/" },
#endif
		{ "ModuleRelativePath", "Public/NodeGraphAssistantConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", ", EditAnywhere, Category = WireStyle" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_EnableLeftClickMultiConnect_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableLeftClickMultiConnect;
	static void NewProp_EnableLazyConnect_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableLazyConnect;
	static void NewProp_EnableCutoffWire_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableCutoffWire;
	static void NewProp_EnableSelectStream_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableSelectStream;
	static void NewProp_EnableCreateNodeOnWire_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableCreateNodeOnWire;
	static void NewProp_EnableAutoConnect_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableAutoConnect;
	static void NewProp_EnableShakeNodeOffWire_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableShakeNodeOffWire;
	static void NewProp_EnableInsertNodeOnWire_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableInsertNodeOnWire;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DragCutOffWireMouseButton_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DragCutOffWireMouseButton;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NodesRearrangeSpacing;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NodesRearrangeSpacingAIGraph;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NodesRearrangeSpacingRelaxFactor;
	static void NewProp_CreateNodeOnlyOnSelectedWire_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CreateNodeOnlyOnSelectedWire;
	static void NewProp_BypassNodeAnyway_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_BypassNodeAnyway;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ShakeNodeOffWireTimeWindow;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AutoConnectRadius;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AutoConnectModifier_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AutoConnectModifier;
	static void NewProp_BypassAndCopyNodes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_BypassAndCopyNodes;
	static void NewProp_ToolBarButton_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ToolBarButton;
	static void NewProp_OverrideAutoConnectPreviewWireColor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_OverrideAutoConnectPreviewWireColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AutoConnectPreviewWireColor;
	static void NewProp_InsertNodeShowDeletedWireAsRed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InsertNodeShowDeletedWireAsRed;
	static void NewProp_HideToolTipWhenDraggingNode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_HideToolTipWhenDraggingNode;
	static void NewProp_SelectDownStreamNodeForBothDirection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SelectDownStreamNodeForBothDirection;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SelectStreamCutoffDistance;
	static void NewProp_OverrideMaterialGraphPinColor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_OverrideMaterialGraphPinColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Float1PinWireColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Float2PinWireColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Float3PinWireColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Float4PinWireColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoolPinWireColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TexturePinWireColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialAttributesPinWireColor;
	static void NewProp_WireStyleStraight_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_WireStyleStraight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNodeGraphAssistantConfig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_EnableLeftClickMultiConnect_SetBit(void* Obj)
{
	((UNodeGraphAssistantConfig*)Obj)->EnableLeftClickMultiConnect = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_EnableLeftClickMultiConnect = { "EnableLeftClickMultiConnect", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNodeGraphAssistantConfig), &Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_EnableLeftClickMultiConnect_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnableLeftClickMultiConnect_MetaData), NewProp_EnableLeftClickMultiConnect_MetaData) };
void Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_EnableLazyConnect_SetBit(void* Obj)
{
	((UNodeGraphAssistantConfig*)Obj)->EnableLazyConnect = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_EnableLazyConnect = { "EnableLazyConnect", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNodeGraphAssistantConfig), &Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_EnableLazyConnect_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnableLazyConnect_MetaData), NewProp_EnableLazyConnect_MetaData) };
void Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_EnableCutoffWire_SetBit(void* Obj)
{
	((UNodeGraphAssistantConfig*)Obj)->EnableCutoffWire = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_EnableCutoffWire = { "EnableCutoffWire", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNodeGraphAssistantConfig), &Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_EnableCutoffWire_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnableCutoffWire_MetaData), NewProp_EnableCutoffWire_MetaData) };
void Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_EnableSelectStream_SetBit(void* Obj)
{
	((UNodeGraphAssistantConfig*)Obj)->EnableSelectStream = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_EnableSelectStream = { "EnableSelectStream", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNodeGraphAssistantConfig), &Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_EnableSelectStream_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnableSelectStream_MetaData), NewProp_EnableSelectStream_MetaData) };
void Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_EnableCreateNodeOnWire_SetBit(void* Obj)
{
	((UNodeGraphAssistantConfig*)Obj)->EnableCreateNodeOnWire = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_EnableCreateNodeOnWire = { "EnableCreateNodeOnWire", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNodeGraphAssistantConfig), &Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_EnableCreateNodeOnWire_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnableCreateNodeOnWire_MetaData), NewProp_EnableCreateNodeOnWire_MetaData) };
void Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_EnableAutoConnect_SetBit(void* Obj)
{
	((UNodeGraphAssistantConfig*)Obj)->EnableAutoConnect = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_EnableAutoConnect = { "EnableAutoConnect", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNodeGraphAssistantConfig), &Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_EnableAutoConnect_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnableAutoConnect_MetaData), NewProp_EnableAutoConnect_MetaData) };
void Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_EnableShakeNodeOffWire_SetBit(void* Obj)
{
	((UNodeGraphAssistantConfig*)Obj)->EnableShakeNodeOffWire = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_EnableShakeNodeOffWire = { "EnableShakeNodeOffWire", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNodeGraphAssistantConfig), &Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_EnableShakeNodeOffWire_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnableShakeNodeOffWire_MetaData), NewProp_EnableShakeNodeOffWire_MetaData) };
void Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_EnableInsertNodeOnWire_SetBit(void* Obj)
{
	((UNodeGraphAssistantConfig*)Obj)->EnableInsertNodeOnWire = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_EnableInsertNodeOnWire = { "EnableInsertNodeOnWire", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNodeGraphAssistantConfig), &Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_EnableInsertNodeOnWire_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnableInsertNodeOnWire_MetaData), NewProp_EnableInsertNodeOnWire_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_DragCutOffWireMouseButton_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_DragCutOffWireMouseButton = { "DragCutOffWireMouseButton", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNodeGraphAssistantConfig, DragCutOffWireMouseButton), Z_Construct_UEnum_NGAGraphUtility_ECutOffMouseButton, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DragCutOffWireMouseButton_MetaData), NewProp_DragCutOffWireMouseButton_MetaData) }; // 3007997041
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_NodesRearrangeSpacing = { "NodesRearrangeSpacing", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNodeGraphAssistantConfig, NodesRearrangeSpacing), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodesRearrangeSpacing_MetaData), NewProp_NodesRearrangeSpacing_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_NodesRearrangeSpacingAIGraph = { "NodesRearrangeSpacingAIGraph", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNodeGraphAssistantConfig, NodesRearrangeSpacingAIGraph), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodesRearrangeSpacingAIGraph_MetaData), NewProp_NodesRearrangeSpacingAIGraph_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_NodesRearrangeSpacingRelaxFactor = { "NodesRearrangeSpacingRelaxFactor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNodeGraphAssistantConfig, NodesRearrangeSpacingRelaxFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodesRearrangeSpacingRelaxFactor_MetaData), NewProp_NodesRearrangeSpacingRelaxFactor_MetaData) };
void Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_CreateNodeOnlyOnSelectedWire_SetBit(void* Obj)
{
	((UNodeGraphAssistantConfig*)Obj)->CreateNodeOnlyOnSelectedWire = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_CreateNodeOnlyOnSelectedWire = { "CreateNodeOnlyOnSelectedWire", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNodeGraphAssistantConfig), &Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_CreateNodeOnlyOnSelectedWire_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CreateNodeOnlyOnSelectedWire_MetaData), NewProp_CreateNodeOnlyOnSelectedWire_MetaData) };
void Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_BypassNodeAnyway_SetBit(void* Obj)
{
	((UNodeGraphAssistantConfig*)Obj)->BypassNodeAnyway = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_BypassNodeAnyway = { "BypassNodeAnyway", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNodeGraphAssistantConfig), &Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_BypassNodeAnyway_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BypassNodeAnyway_MetaData), NewProp_BypassNodeAnyway_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_ShakeNodeOffWireTimeWindow = { "ShakeNodeOffWireTimeWindow", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNodeGraphAssistantConfig, ShakeNodeOffWireTimeWindow), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShakeNodeOffWireTimeWindow_MetaData), NewProp_ShakeNodeOffWireTimeWindow_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_AutoConnectRadius = { "AutoConnectRadius", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNodeGraphAssistantConfig, AutoConnectRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoConnectRadius_MetaData), NewProp_AutoConnectRadius_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_AutoConnectModifier_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_AutoConnectModifier = { "AutoConnectModifier", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNodeGraphAssistantConfig, AutoConnectModifier), Z_Construct_UEnum_NGAGraphUtility_EAutoConnectModifier, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoConnectModifier_MetaData), NewProp_AutoConnectModifier_MetaData) }; // 1926828429
void Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_BypassAndCopyNodes_SetBit(void* Obj)
{
	((UNodeGraphAssistantConfig*)Obj)->BypassAndCopyNodes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_BypassAndCopyNodes = { "BypassAndCopyNodes", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNodeGraphAssistantConfig), &Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_BypassAndCopyNodes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BypassAndCopyNodes_MetaData), NewProp_BypassAndCopyNodes_MetaData) };
void Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_ToolBarButton_SetBit(void* Obj)
{
	((UNodeGraphAssistantConfig*)Obj)->ToolBarButton = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_ToolBarButton = { "ToolBarButton", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNodeGraphAssistantConfig), &Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_ToolBarButton_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToolBarButton_MetaData), NewProp_ToolBarButton_MetaData) };
void Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_OverrideAutoConnectPreviewWireColor_SetBit(void* Obj)
{
	((UNodeGraphAssistantConfig*)Obj)->OverrideAutoConnectPreviewWireColor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_OverrideAutoConnectPreviewWireColor = { "OverrideAutoConnectPreviewWireColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNodeGraphAssistantConfig), &Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_OverrideAutoConnectPreviewWireColor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverrideAutoConnectPreviewWireColor_MetaData), NewProp_OverrideAutoConnectPreviewWireColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_AutoConnectPreviewWireColor = { "AutoConnectPreviewWireColor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNodeGraphAssistantConfig, AutoConnectPreviewWireColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoConnectPreviewWireColor_MetaData), NewProp_AutoConnectPreviewWireColor_MetaData) };
void Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_InsertNodeShowDeletedWireAsRed_SetBit(void* Obj)
{
	((UNodeGraphAssistantConfig*)Obj)->InsertNodeShowDeletedWireAsRed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_InsertNodeShowDeletedWireAsRed = { "InsertNodeShowDeletedWireAsRed", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNodeGraphAssistantConfig), &Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_InsertNodeShowDeletedWireAsRed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InsertNodeShowDeletedWireAsRed_MetaData), NewProp_InsertNodeShowDeletedWireAsRed_MetaData) };
void Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_HideToolTipWhenDraggingNode_SetBit(void* Obj)
{
	((UNodeGraphAssistantConfig*)Obj)->HideToolTipWhenDraggingNode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_HideToolTipWhenDraggingNode = { "HideToolTipWhenDraggingNode", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNodeGraphAssistantConfig), &Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_HideToolTipWhenDraggingNode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HideToolTipWhenDraggingNode_MetaData), NewProp_HideToolTipWhenDraggingNode_MetaData) };
void Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_SelectDownStreamNodeForBothDirection_SetBit(void* Obj)
{
	((UNodeGraphAssistantConfig*)Obj)->SelectDownStreamNodeForBothDirection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_SelectDownStreamNodeForBothDirection = { "SelectDownStreamNodeForBothDirection", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNodeGraphAssistantConfig), &Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_SelectDownStreamNodeForBothDirection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectDownStreamNodeForBothDirection_MetaData), NewProp_SelectDownStreamNodeForBothDirection_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_SelectStreamCutoffDistance = { "SelectStreamCutoffDistance", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNodeGraphAssistantConfig, SelectStreamCutoffDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectStreamCutoffDistance_MetaData), NewProp_SelectStreamCutoffDistance_MetaData) };
void Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_OverrideMaterialGraphPinColor_SetBit(void* Obj)
{
	((UNodeGraphAssistantConfig*)Obj)->OverrideMaterialGraphPinColor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_OverrideMaterialGraphPinColor = { "OverrideMaterialGraphPinColor", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNodeGraphAssistantConfig), &Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_OverrideMaterialGraphPinColor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverrideMaterialGraphPinColor_MetaData), NewProp_OverrideMaterialGraphPinColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_Float1PinWireColor = { "Float1PinWireColor", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNodeGraphAssistantConfig, Float1PinWireColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Float1PinWireColor_MetaData), NewProp_Float1PinWireColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_Float2PinWireColor = { "Float2PinWireColor", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNodeGraphAssistantConfig, Float2PinWireColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Float2PinWireColor_MetaData), NewProp_Float2PinWireColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_Float3PinWireColor = { "Float3PinWireColor", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNodeGraphAssistantConfig, Float3PinWireColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Float3PinWireColor_MetaData), NewProp_Float3PinWireColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_Float4PinWireColor = { "Float4PinWireColor", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNodeGraphAssistantConfig, Float4PinWireColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Float4PinWireColor_MetaData), NewProp_Float4PinWireColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_BoolPinWireColor = { "BoolPinWireColor", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNodeGraphAssistantConfig, BoolPinWireColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoolPinWireColor_MetaData), NewProp_BoolPinWireColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_TexturePinWireColor = { "TexturePinWireColor", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNodeGraphAssistantConfig, TexturePinWireColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TexturePinWireColor_MetaData), NewProp_TexturePinWireColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_MaterialAttributesPinWireColor = { "MaterialAttributesPinWireColor", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNodeGraphAssistantConfig, MaterialAttributesPinWireColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialAttributesPinWireColor_MetaData), NewProp_MaterialAttributesPinWireColor_MetaData) };
void Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_WireStyleStraight_SetBit(void* Obj)
{
	((UNodeGraphAssistantConfig*)Obj)->WireStyleStraight = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_WireStyleStraight = { "WireStyleStraight", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNodeGraphAssistantConfig), &Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_WireStyleStraight_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WireStyleStraight_MetaData), NewProp_WireStyleStraight_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_EnableLeftClickMultiConnect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_EnableLazyConnect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_EnableCutoffWire,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_EnableSelectStream,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_EnableCreateNodeOnWire,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_EnableAutoConnect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_EnableShakeNodeOffWire,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_EnableInsertNodeOnWire,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_DragCutOffWireMouseButton_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_DragCutOffWireMouseButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_NodesRearrangeSpacing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_NodesRearrangeSpacingAIGraph,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_NodesRearrangeSpacingRelaxFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_CreateNodeOnlyOnSelectedWire,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_BypassNodeAnyway,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_ShakeNodeOffWireTimeWindow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_AutoConnectRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_AutoConnectModifier_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_AutoConnectModifier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_BypassAndCopyNodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_ToolBarButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_OverrideAutoConnectPreviewWireColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_AutoConnectPreviewWireColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_InsertNodeShowDeletedWireAsRed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_HideToolTipWhenDraggingNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_SelectDownStreamNodeForBothDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_SelectStreamCutoffDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_OverrideMaterialGraphPinColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_Float1PinWireColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_Float2PinWireColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_Float3PinWireColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_Float4PinWireColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_BoolPinWireColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_TexturePinWireColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_MaterialAttributesPinWireColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::NewProp_WireStyleStraight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_NGAGraphUtility,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::ClassParams = {
	&UNodeGraphAssistantConfig::StaticClass,
	"EditorSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::PropPointers),
	0,
	0x000000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNodeGraphAssistantConfig()
{
	if (!Z_Registration_Info_UClass_UNodeGraphAssistantConfig.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNodeGraphAssistantConfig.OuterSingleton, Z_Construct_UClass_UNodeGraphAssistantConfig_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNodeGraphAssistantConfig.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNodeGraphAssistantConfig);
UNodeGraphAssistantConfig::~UNodeGraphAssistantConfig() {}
// ********** End Class UNodeGraphAssistantConfig **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MG_Plugins_NodeGraphAssistant_Source_NGAGraphUtility_Public_NodeGraphAssistantConfig_h__Script_NGAGraphUtility_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECutOffMouseButton_StaticEnum, TEXT("ECutOffMouseButton"), &Z_Registration_Info_UEnum_ECutOffMouseButton, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3007997041U) },
		{ EAutoConnectModifier_StaticEnum, TEXT("EAutoConnectModifier"), &Z_Registration_Info_UEnum_EAutoConnectModifier, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1926828429U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNodeGraphAssistantConfig, UNodeGraphAssistantConfig::StaticClass, TEXT("UNodeGraphAssistantConfig"), &Z_Registration_Info_UClass_UNodeGraphAssistantConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNodeGraphAssistantConfig), 393891682U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MG_Plugins_NodeGraphAssistant_Source_NGAGraphUtility_Public_NodeGraphAssistantConfig_h__Script_NGAGraphUtility_3697298131(TEXT("/Script/NGAGraphUtility"),
	Z_CompiledInDeferFile_FID_MG_Plugins_NodeGraphAssistant_Source_NGAGraphUtility_Public_NodeGraphAssistantConfig_h__Script_NGAGraphUtility_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MG_Plugins_NodeGraphAssistant_Source_NGAGraphUtility_Public_NodeGraphAssistantConfig_h__Script_NGAGraphUtility_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_MG_Plugins_NodeGraphAssistant_Source_NGAGraphUtility_Public_NodeGraphAssistantConfig_h__Script_NGAGraphUtility_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MG_Plugins_NodeGraphAssistant_Source_NGAGraphUtility_Public_NodeGraphAssistantConfig_h__Script_NGAGraphUtility_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
