// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EcoVille/EcoVilleGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEcoVilleGameMode() {}
// Cross Module References
	ECOVILLE_API UClass* Z_Construct_UClass_AEcoVilleGameMode();
	ECOVILLE_API UClass* Z_Construct_UClass_AEcoVilleGameMode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_EcoVille();
// End Cross Module References
	void AEcoVilleGameMode::StaticRegisterNativesAEcoVilleGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEcoVilleGameMode);
	UClass* Z_Construct_UClass_AEcoVilleGameMode_NoRegister()
	{
		return AEcoVilleGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AEcoVilleGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEcoVilleGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_EcoVille,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEcoVilleGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "EcoVilleGameMode.h" },
		{ "ModuleRelativePath", "EcoVilleGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEcoVilleGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEcoVilleGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEcoVilleGameMode_Statics::ClassParams = {
		&AEcoVilleGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEcoVilleGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEcoVilleGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEcoVilleGameMode()
	{
		if (!Z_Registration_Info_UClass_AEcoVilleGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEcoVilleGameMode.OuterSingleton, Z_Construct_UClass_AEcoVilleGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEcoVilleGameMode.OuterSingleton;
	}
	template<> ECOVILLE_API UClass* StaticClass<AEcoVilleGameMode>()
	{
		return AEcoVilleGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEcoVilleGameMode);
	AEcoVilleGameMode::~AEcoVilleGameMode() {}
	struct Z_CompiledInDeferFile_FID_EcoVille_Source_EcoVille_EcoVilleGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EcoVille_Source_EcoVille_EcoVilleGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEcoVilleGameMode, AEcoVilleGameMode::StaticClass, TEXT("AEcoVilleGameMode"), &Z_Registration_Info_UClass_AEcoVilleGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEcoVilleGameMode), 742542014U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EcoVille_Source_EcoVille_EcoVilleGameMode_h_885760190(TEXT("/Script/EcoVille"),
		Z_CompiledInDeferFile_FID_EcoVille_Source_EcoVille_EcoVilleGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EcoVille_Source_EcoVille_EcoVilleGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
