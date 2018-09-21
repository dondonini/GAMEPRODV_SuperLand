// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class GAMEPRODV_SuperLandTarget : TargetRules
{
	public GAMEPRODV_SuperLandTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;

		ExtraModuleNames.AddRange( new string[] { "GAMEPRODV_SuperLand" } );
	}
}
