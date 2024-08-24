#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BED_LevelConfUtil.generated.h"

class ULevelStreaming;

UCLASS(Blueprintable)
class UBED_LevelConfUtil : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBED_LevelConfUtil();

    UFUNCTION(BlueprintCallable)
    static void GetLevelStreamingBoundingBox(ULevelStreaming* LevelStreaming, FVector& Center, FVector& BoxExtent);
    
};

