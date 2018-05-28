// Copyright 2018 (C)

using UnrealBuildTool;
using System.Collections.Generic;

public class JumpingtruckEditorTarget : TargetRules
{
	public JumpingtruckEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;

		ExtraModuleNames.AddRange( new string[] { "Jumpingtruck" } );
	}
}
