#pragma once
#include "CoreMinimal.h"
#include "InstancedStruct.h"
#include "PCGData.h"
#include "PCGUserParametersData.generated.h"

class UPCGGraphInterface;

UCLASS(Blueprintable, HideDropdown)
class UPCGUserParametersData : public UPCGData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPCGGraphInterface* OriginalGraph;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInstancedStruct UserParameters;
    
    UPCGUserParametersData();

};

