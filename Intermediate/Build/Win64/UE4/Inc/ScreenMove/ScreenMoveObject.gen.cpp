// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ScreenMove/Public/ScreenMoveObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScreenMoveObject() {}
// Cross Module References
	SCREENMOVE_API UClass* Z_Construct_UClass_UScreenMoveObject_NoRegister();
	SCREENMOVE_API UClass* Z_Construct_UClass_UScreenMoveObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ScreenMove();
// End Cross Module References
	void UScreenMoveObject::StaticRegisterNativesUScreenMoveObject()
	{
	}
	UClass* Z_Construct_UClass_UScreenMoveObject_NoRegister()
	{
		return UScreenMoveObject::StaticClass();
	}
	struct Z_Construct_UClass_UScreenMoveObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UScreenMoveObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ScreenMove,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScreenMoveObject_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ScreenMoveObject.h" },
		{ "ModuleRelativePath", "Public/ScreenMoveObject.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UScreenMoveObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScreenMoveObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UScreenMoveObject_Statics::ClassParams = {
		&UScreenMoveObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UScreenMoveObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UScreenMoveObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UScreenMoveObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UScreenMoveObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UScreenMoveObject, 4091169730);
	template<> SCREENMOVE_API UClass* StaticClass<UScreenMoveObject>()
	{
		return UScreenMoveObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UScreenMoveObject(Z_Construct_UClass_UScreenMoveObject, &UScreenMoveObject::StaticClass, TEXT("/Script/ScreenMove"), TEXT("UScreenMoveObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UScreenMoveObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
