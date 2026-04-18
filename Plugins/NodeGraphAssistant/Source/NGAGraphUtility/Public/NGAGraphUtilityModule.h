#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleInterface.h"
#include "NGAGraphPinConnectionFactory.h"

class FNGAGraphUtilityModule : public IModuleInterface
{
public:
	TSharedPtr<FNGAGraphPinConnectionFactory> MyPinFactory;
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};