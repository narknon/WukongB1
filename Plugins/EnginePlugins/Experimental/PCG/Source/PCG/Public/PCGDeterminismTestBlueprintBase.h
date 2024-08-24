#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DeterminismTestResult.h"
#include "PCGDeterminismTestBlueprintBase.generated.h"

class UPCGNode;

UCLASS(Abstract, Blueprintable)
class PCG_API UPCGDeterminismTestBlueprintBase : public UObject {
    GENERATED_BODY()
public:
    UPCGDeterminismTestBlueprintBase();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    void ExecuteTest(UPARAM(Ref) FDeterminismTestResult& InOutTestResult, const UPCGNode* InPCGNode);
    
};

