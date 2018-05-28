// Copyright 2018 (C)

using UnrealBuildTool;
using System.Collections.Generic;

public class JumpingtruckTarget : TargetRules
{
	public JumpingtruckTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;

		ExtraModuleNames.AddRange( new string[] { "Jumpingtruck" } );
	}
}
