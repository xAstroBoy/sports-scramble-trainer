﻿/**
 * Name: SportsScramble
 * Version: 1
 */

#include "../pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x01090920
	 * 		Name   -> Function MRMesh.MeshReconstructorBase.StopReconstruction
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UMeshReconstructorBase::StopReconstruction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MRMesh.MeshReconstructorBase.StopReconstruction");
		
		UMeshReconstructorBase_StopReconstruction_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01090940
	 * 		Name   -> Function MRMesh.MeshReconstructorBase.StartReconstruction
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UMeshReconstructorBase::StartReconstruction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MRMesh.MeshReconstructorBase.StartReconstruction");
		
		UMeshReconstructorBase_StartReconstruction_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x010E0C60
	 * 		Name   -> Function MRMesh.MeshReconstructorBase.PauseReconstruction
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 */
	void UMeshReconstructorBase::PauseReconstruction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MRMesh.MeshReconstructorBase.PauseReconstruction");
		
		UMeshReconstructorBase_PauseReconstruction_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0100B600
	 * 		Name   -> Function MRMesh.MeshReconstructorBase.IsReconstructionStarted
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UMeshReconstructorBase::IsReconstructionStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MRMesh.MeshReconstructorBase.IsReconstructionStarted");
		
		UMeshReconstructorBase_IsReconstructionStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x010E0C30
	 * 		Name   -> Function MRMesh.MeshReconstructorBase.IsReconstructionPaused
	 * 		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UMeshReconstructorBase::IsReconstructionPaused()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MRMesh.MeshReconstructorBase.IsReconstructionPaused");
		
		UMeshReconstructorBase_IsReconstructionPaused_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x010E0BB0
	 * 		Name   -> Function MRMesh.MeshReconstructorBase.DisconnectMRMesh
	 * 		Flags  -> (Native, Public)
	 */
	void UMeshReconstructorBase::DisconnectMRMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MRMesh.MeshReconstructorBase.DisconnectMRMesh");
		
		UMeshReconstructorBase_DisconnectMRMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x010E0B20
	 * 		Name   -> Function MRMesh.MeshReconstructorBase.ConnectMRMesh
	 * 		Flags  -> (Native, Public)
	 * Parameters:
	 * 		class UMRMeshComponent*                            Mesh                                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMeshReconstructorBase::ConnectMRMesh(class UMRMeshComponent* Mesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MRMesh.MeshReconstructorBase.ConnectMRMesh");
		
		UMeshReconstructorBase_ConnectMRMesh_Params params {};
		params.Mesh = Mesh;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMeshReconstructorBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMeshReconstructorBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MRMesh.MeshReconstructorBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x010E0BF0
	 * 		Name   -> Function MRMesh.MRMeshComponent.IsConnected
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool UMRMeshComponent::IsConnected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MRMesh.MRMeshComponent.IsConnected");
		
		UMRMeshComponent_IsConnected_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x010E0BD0
	 * 		Name   -> Function MRMesh.MRMeshComponent.ForceNavMeshUpdate
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UMRMeshComponent::ForceNavMeshUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MRMesh.MRMeshComponent.ForceNavMeshUpdate");
		
		UMRMeshComponent_ForceNavMeshUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x010E0AF0
	 * 		Name   -> Function MRMesh.MRMeshComponent.Clear
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UMRMeshComponent::Clear()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MRMesh.MRMeshComponent.Clear");
		
		UMRMeshComponent_Clear_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMRMeshComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMRMeshComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MRMesh.MRMeshComponent");
		return ptr;
	}

}


