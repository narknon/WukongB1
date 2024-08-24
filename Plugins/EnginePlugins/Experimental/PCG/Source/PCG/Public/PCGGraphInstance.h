#pragma once
#include "CoreMinimal.h"
#include "PCGGraphInterface.h"
#include "PCGOverrideInstancedPropertyBag.h"
#include "PCGGraphInstance.generated.h"

UCLASS(Blueprintable)
class PCG_API UPCGGraphInstance : public UPCGGraphInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPCGGraphInterface* Graph;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGOverrideInstancedPropertyBag ParametersOverrides;
    
    UPCGGraphInstance();

};

