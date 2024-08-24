#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GSE_SceneComponentFuncLib.generated.h"

class USceneComponent;

UCLASS(Blueprintable)
class UNREALEXTENT_API UGSE_SceneComponentFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGSE_SceneComponentFuncLib();

    UFUNCTION(BlueprintCallable)
    static void SetWorldLocationAndRotationSimple(USceneComponent* InSceneComponent, FVector Pos, FRotator Rot);
    
};

