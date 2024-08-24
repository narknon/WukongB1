#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "PCGDeterminismSettings.generated.h"

class UPCGDeterminismTestBlueprintBase;

USTRUCT(BlueprintType)
struct FPCGDeterminismSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNativeTests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseBlueprintDeterminismTest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPCGDeterminismTestBlueprintBase> DeterminismTestBlueprint;
    
    PCG_API FPCGDeterminismSettings();
};

