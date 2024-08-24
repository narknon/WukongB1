#pragma once
#include "CoreMinimal.h"
#include "BAID_Base.h"
#include "BAID_CheckBuffLayer.generated.h"

UCLASS(Blueprintable)
class UBAID_CheckBuffLayer : public UBAID_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 isUpper: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BuffID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BuffLayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CheckTargetType;
    
    UBAID_CheckBuffLayer();

};

