// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Palworld_UITest/Palworld_UITestGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePalworld_UITestGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
PALWORLD_UITEST_API UClass* Z_Construct_UClass_APalworld_UITestGameMode();
PALWORLD_UITEST_API UClass* Z_Construct_UClass_APalworld_UITestGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_Palworld_UITest();
// End Cross Module References

// Begin Class APalworld_UITestGameMode
void APalworld_UITestGameMode::StaticRegisterNativesAPalworld_UITestGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APalworld_UITestGameMode);
UClass* Z_Construct_UClass_APalworld_UITestGameMode_NoRegister()
{
	return APalworld_UITestGameMode::StaticClass();
}
struct Z_Construct_UClass_APalworld_UITestGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Palworld_UITestGameMode.h" },
		{ "ModuleRelativePath", "Palworld_UITestGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APalworld_UITestGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APalworld_UITestGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Palworld_UITest,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APalworld_UITestGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APalworld_UITestGameMode_Statics::ClassParams = {
	&APalworld_UITestGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APalworld_UITestGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_APalworld_UITestGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APalworld_UITestGameMode()
{
	if (!Z_Registration_Info_UClass_APalworld_UITestGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APalworld_UITestGameMode.OuterSingleton, Z_Construct_UClass_APalworld_UITestGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APalworld_UITestGameMode.OuterSingleton;
}
template<> PALWORLD_UITEST_API UClass* StaticClass<APalworld_UITestGameMode>()
{
	return APalworld_UITestGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APalworld_UITestGameMode);
APalworld_UITestGameMode::~APalworld_UITestGameMode() {}
// End Class APalworld_UITestGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_user_Desktop_PalWorld_UITest_Palworld_UITest_Source_Palworld_UITest_Palworld_UITestGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APalworld_UITestGameMode, APalworld_UITestGameMode::StaticClass, TEXT("APalworld_UITestGameMode"), &Z_Registration_Info_UClass_APalworld_UITestGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APalworld_UITestGameMode), 2361573109U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_user_Desktop_PalWorld_UITest_Palworld_UITest_Source_Palworld_UITest_Palworld_UITestGameMode_h_2389376832(TEXT("/Script/Palworld_UITest"),
	Z_CompiledInDeferFile_FID_Users_user_Desktop_PalWorld_UITest_Palworld_UITest_Source_Palworld_UITest_Palworld_UITestGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_user_Desktop_PalWorld_UITest_Palworld_UITest_Source_Palworld_UITest_Palworld_UITestGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
