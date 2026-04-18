using System.IO;
#if UE_5_0_OR_LATER
using EpicGames.Core;
#elif UE_4_17_OR_LATER
using Tools.DotNETCommon;
#endif

//nga need to override material graph connection policy to make a lot of features work by using NGAMaterialGraphConnectionDrawingPolicy 
//but ue5.6 added FMaterialEditorGraphPinConnectionFactory, which has higher priority than NGAMaterialGraphConnectionDrawingPolicy
//so move NGAMaterialGraphConnectionDrawingPolicy to another module and loads in early phase to take effect before FMaterialEditorGraphPinConnectionFactory was registered
namespace UnrealBuildTool.Rules
{
    public class NGAGraphUtility : ModuleRules
    {
        public NGAGraphUtility(ReadOnlyTargetRules Target) : base(Target)
        {
            string enginePath = Path.GetFullPath(Target.RelativeEnginePath);

            PublicIncludePaths.AddRange(
                new string[] {
					// ... add public include paths required here ...
				}
                );

            PrivateIncludePaths.AddRange(
                new string[] {
                    enginePath+"Source/Runtime/Core/Public",
                    enginePath+"Source/Runtime/Projects/Public",
                    enginePath+"Source/Runtime/Projects/Public/Interfaces",
                    enginePath+"Source/Runtime/Engine/Classes",
                    enginePath+"Source/Runtime/Engine/Public",
                    enginePath+"Source/Runtime/SlateCore/Public/Styling",
                    enginePath+"Source/Runtime/Slate/Public/Framework/Application",
                    enginePath+"Source/Runtime/Slate/Public/Framework",
                    enginePath+"Source/Runtime/SlateCore/Public",
                    enginePath+"Source/Editor/UnrealEd/Public",
                    enginePath+"Source/Editor/UnrealEd/Classes",
                    enginePath+"Source/Editor/GraphEditor/Public",
                    enginePath+"Source/Editor/EditorStyle/Public",
                    enginePath+"Source/Editor/MaterialEditor/Public",
                    enginePath+"Source/Editor/AnimationBlueprintEditor/Public",
                    enginePath+"Source/Editor/Kismet/Public",
                    enginePath+"Source/Editor/BlueprintGraph/Classes",
                    enginePath+"Source/Editor/KismetWidgets/Public",

                    //enginePath+"Source/Editor/PropertyEditor/Public",

                }
                );
            PrivateIncludePaths.Add(enginePath + "Source/Editor/GraphEditor/Private");
            PrivateIncludePaths.Add(enginePath + "Source/Runtime/Launch/Resources");
            PrivateIncludePaths.Add(enginePath + "Source/Runtime/Engine/Classes/EdGraph");
            PrivateIncludePaths.Add(enginePath + "Source/Editor/AnimationBlueprintEditor/Private");
            PrivateIncludePaths.Add(enginePath + "Source/Editor/AudioEditor/Private");
            PrivateIncludePaths.Add(enginePath + "Source/Editor/MaterialEditor/Private");
            PrivateIncludePaths.Add(enginePath + "Source/Editor/UnrealEd/Private");
            PrivateIncludePaths.Add(enginePath + "Source/Runtime/RenderCore/Public");

            //some classes is not exported from engine, so when build with release engine it can not find the implementation.
            if (File.Exists(enginePath + "Source/Editor/GraphEditor/Private/DragConnection.cpp"))
            {
#if UE_4_17_OR_LATER
                PublicDefinitions.Add("NGA_WITH_ENGINE_CPP");
#else
                Definitions.Add("NGA_WITH_ENGINE_CPP");
#endif
            }
            else
            {
                Log.TraceInformation("one or more engine cpp files not found.");
                Log.TraceInformation("will use pre-copied source files inside plugin source folder.");
                Log.TraceInformation("turn on \"download source code\" option when installing engine if problem occured.");
            }

            PublicDependencyModuleNames.AddRange(
                new string[]
                {
                    "Core","RenderCore", "CoreUObject","Slate","SlateCore","UnrealEd","Engine","GraphEditor","AnimGraph","MaterialEditor","BlueprintGraph","AnimationBlueprintEditor","AudioEditor","KismetWidgets"
                }
                );

            DynamicallyLoadedModuleNames.AddRange(
                new string[]
                {
					// ... add any modules that your module loads dynamically here ...
				}
                );
        }
    }
}
