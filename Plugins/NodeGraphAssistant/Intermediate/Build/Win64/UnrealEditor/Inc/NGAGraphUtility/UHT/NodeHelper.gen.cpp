// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NodeHelper.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeNodeHelper() {}

// ********** Begin Cross Module References ********************************************************
NGAGRAPHUTILITY_API UEnum* Z_Construct_UEnum_NGAGraphUtility_EAlignDirection();
UPackage* Z_Construct_UPackage__Script_NGAGraphUtility();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EAlignDirection ***********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAlignDirection;
static UEnum* EAlignDirection_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAlignDirection.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAlignDirection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NGAGraphUtility_EAlignDirection, (UObject*)Z_Construct_UPackage__Script_NGAGraphUtility(), TEXT("EAlignDirection"));
	}
	return Z_Registration_Info_UEnum_EAlignDirection.OuterSingleton;
}
template<> NGAGRAPHUTILITY_API UEnum* StaticEnum<EAlignDirection>()
{
	return EAlignDirection_StaticEnum();
}
struct Z_Construct_UEnum_NGAGraphUtility_EAlignDirection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AD_InputDirection.Name", "AD_InputDirection" },
		{ "AD_OutputDirection.Name", "AD_OutputDirection" },
		{ "ModuleRelativePath", "Public/NodeHelper.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "AD_InputDirection", (int64)AD_InputDirection },
		{ "AD_OutputDirection", (int64)AD_OutputDirection },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NGAGraphUtility_EAlignDirection_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_NGAGraphUtility,
	nullptr,
	"EAlignDirection",
	"EAlignDirection",
	Z_Construct_UEnum_NGAGraphUtility_EAlignDirection_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_NGAGraphUtility_EAlignDirection_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_NGAGraphUtility_EAlignDirection_Statics::Enum_MetaDataParams), Z_Construct_UEnum_NGAGraphUtility_EAlignDirection_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_NGAGraphUtility_EAlignDirection()
{
	if (!Z_Registration_Info_UEnum_EAlignDirection.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAlignDirection.InnerSingleton, Z_Construct_UEnum_NGAGraphUtility_EAlignDirection_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAlignDirection.InnerSingleton;
}
// ********** End Enum EAlignDirection *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MG_Plugins_NodeGraphAssistant_Source_NGAGraphUtility_Public_NodeHelper_h__Script_NGAGraphUtility_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAlignDirection_StaticEnum, TEXT("EAlignDirection"), &Z_Registration_Info_UEnum_EAlignDirection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2319398914U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MG_Plugins_NodeGraphAssistant_Source_NGAGraphUtility_Public_NodeHelper_h__Script_NGAGraphUtility_2252818985(TEXT("/Script/NGAGraphUtility"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_MG_Plugins_NodeGraphAssistant_Source_NGAGraphUtility_Public_NodeHelper_h__Script_NGAGraphUtility_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MG_Plugins_NodeGraphAssistant_Source_NGAGraphUtility_Public_NodeHelper_h__Script_NGAGraphUtility_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
