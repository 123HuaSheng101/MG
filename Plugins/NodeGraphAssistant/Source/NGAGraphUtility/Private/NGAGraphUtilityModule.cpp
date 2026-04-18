#include "NGAGraphUtilityModule.h"
#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

IMPLEMENT_MODULE(FNGAGraphUtilityModule, NGAGraphUtility)

void FNGAGraphUtilityModule::StartupModule()
{
	MyPinFactory = MakeShareable(new FNGAGraphPinConnectionFactory());
	FEdGraphUtilities::RegisterVisualPinConnectionFactory(MyPinFactory);
}

void FNGAGraphUtilityModule::ShutdownModule()
{
	FEdGraphUtilities::UnregisterVisualPinConnectionFactory(MyPinFactory);
}