// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "NodeGraphAssistantConfig.h"

#ifdef NGAGRAPHUTILITY_NodeGraphAssistantConfig_generated_h
#error "NodeGraphAssistantConfig.generated.h already included, missing '#pragma once' in NodeGraphAssistantConfig.h"
#endif
#define NGAGRAPHUTILITY_NodeGraphAssistantConfig_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UNodeGraphAssistantConfig ************************************************
NGAGRAPHUTILITY_API UClass* Z_Construct_UClass_UNodeGraphAssistantConfig_NoRegister();

#define FID_MG_Plugins_NodeGraphAssistant_Source_NGAGraphUtility_Public_NodeGraphAssistantConfig_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNodeGraphAssistantConfig(); \
	friend struct Z_Construct_UClass_UNodeGraphAssistantConfig_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend NGAGRAPHUTILITY_API UClass* Z_Construct_UClass_UNodeGraphAssistantConfig_NoRegister(); \
public: \
	DECLARE_CLASS2(UNodeGraphAssistantConfig, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NGAGraphUtility"), Z_Construct_UClass_UNodeGraphAssistantConfig_NoRegister) \
	DECLARE_SERIALIZER(UNodeGraphAssistantConfig) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorSettings");} \



#define FID_MG_Plugins_NodeGraphAssistant_Source_NGAGraphUtility_Public_NodeGraphAssistantConfig_h_28_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UNodeGraphAssistantConfig(UNodeGraphAssistantConfig&&) = delete; \
	UNodeGraphAssistantConfig(const UNodeGraphAssistantConfig&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNodeGraphAssistantConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNodeGraphAssistantConfig); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNodeGraphAssistantConfig) \
	NO_API virtual ~UNodeGraphAssistantConfig();


#define FID_MG_Plugins_NodeGraphAssistant_Source_NGAGraphUtility_Public_NodeGraphAssistantConfig_h_25_PROLOG
#define FID_MG_Plugins_NodeGraphAssistant_Source_NGAGraphUtility_Public_NodeGraphAssistantConfig_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MG_Plugins_NodeGraphAssistant_Source_NGAGraphUtility_Public_NodeGraphAssistantConfig_h_28_INCLASS_NO_PURE_DECLS \
	FID_MG_Plugins_NodeGraphAssistant_Source_NGAGraphUtility_Public_NodeGraphAssistantConfig_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UNodeGraphAssistantConfig;

// ********** End Class UNodeGraphAssistantConfig **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MG_Plugins_NodeGraphAssistant_Source_NGAGraphUtility_Public_NodeGraphAssistantConfig_h

// ********** Begin Enum ECutOffMouseButton ********************************************************
#define FOREACH_ENUM_ECUTOFFMOUSEBUTTON(op) \
	op(ECutOffMouseButton::Middle) \
	op(ECutOffMouseButton::Left) \
	op(ECutOffMouseButton::None) 

enum class ECutOffMouseButton : uint8;
template<> struct TIsUEnumClass<ECutOffMouseButton> { enum { Value = true }; };
template<> NGAGRAPHUTILITY_API UEnum* StaticEnum<ECutOffMouseButton>();
// ********** End Enum ECutOffMouseButton **********************************************************

// ********** Begin Enum EAutoConnectModifier ******************************************************
#define FOREACH_ENUM_EAUTOCONNECTMODIFIER(op) \
	op(EAutoConnectModifier::Alt) \
	op(EAutoConnectModifier::None) 

enum class EAutoConnectModifier : uint8;
template<> struct TIsUEnumClass<EAutoConnectModifier> { enum { Value = true }; };
template<> NGAGRAPHUTILITY_API UEnum* StaticEnum<EAutoConnectModifier>();
// ********** End Enum EAutoConnectModifier ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
