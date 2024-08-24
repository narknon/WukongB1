#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GSE_FoliageFuncLib.generated.h"

class AInstancedFoliageActor;

UCLASS(Blueprintable)
class UNREALEXTENT_API UGSE_FoliageFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGSE_FoliageFuncLib();

    UFUNCTION(BlueprintCallable)
    static void InstancedFoliageActorSetCullDistance(AInstancedFoliageActor* FoliageActor, int32 MinLodDist, int32 MaxLodDist);
    
    UFUNCTION(BlueprintCallable)
    static FString IFA_GetSelectedInstanceName(AInstancedFoliageActor* FoliageActor);
    
};

