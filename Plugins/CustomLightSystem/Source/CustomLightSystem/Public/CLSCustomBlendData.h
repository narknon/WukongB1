#pragma once
#include "CoreMinimal.h"
#include "CLSBlendDataBase.h"
#include "CLSCustomVariableData.h"
#include "CLSCustomBlendData.generated.h"

USTRUCT(BlueprintType)
struct FCLSCustomBlendData : public FCLSBlendDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCLSCustomVariableData OriginData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCLSCustomVariableData TargetData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCLSCustomVariableData CurrentData;
    
    CUSTOMLIGHTSYSTEM_API FCLSCustomBlendData();
};

