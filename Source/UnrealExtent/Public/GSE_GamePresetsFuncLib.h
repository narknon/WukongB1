#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GamePresets.h"
#include "GSE_GamePresetsFuncLib.generated.h"

UCLASS(Blueprintable)
class UNREALEXTENT_API UGSE_GamePresetsFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGSE_GamePresetsFuncLib();

    UFUNCTION(BlueprintCallable)
    static bool GetPlatformGamePresets(FGamePresets& GamePresets);
    
};

