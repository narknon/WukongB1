#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PCGGraphInterface.generated.h"

class UPCGGraph;

UCLASS(Abstract, Blueprintable)
class PCG_API UPCGGraphInterface : public UObject {
    GENERATED_BODY()
public:
    UPCGGraphInterface();

    UFUNCTION(BlueprintCallable)
    UPCGGraph* GetMutablePCGGraph();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPCGGraph* GetConstPCGGraph() const;
    
};

