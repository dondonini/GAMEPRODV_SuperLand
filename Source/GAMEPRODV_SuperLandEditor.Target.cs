// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class GAMEPRODV_SuperLandEditorTarget : TargetRules
{
	public GAMEPRODV_SuperLandEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;

		ExtraModuleNames.AddRange( new string[] { "GAMEPRODV_SuperLand" } );
	}
}
