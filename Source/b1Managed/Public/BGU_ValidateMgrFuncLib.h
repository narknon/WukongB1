#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BGU_ValidateMgrFuncLib.generated.h"

class AActor;

UCLASS(Blueprintable)
class UBGU_ValidateMgrFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBGU_ValidateMgrFuncLib();

    UFUNCTION(BlueprintCallable)
    static void ImArtDev(AActor* Actor);
    
};

