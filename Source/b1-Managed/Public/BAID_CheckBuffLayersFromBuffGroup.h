#pragma once
#include "CoreMinimal.h"
#include "BAID_Base.h"
#include "BAID_CheckBuffLayersFromBuffGroup.generated.h"

UCLASS(Blueprintable)
class UBAID_CheckBuffLayersFromBuffGroup : public UBAID_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BuffGroupID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalLayerCount;
    
    UBAID_CheckBuffLayersFromBuffGroup();

};

