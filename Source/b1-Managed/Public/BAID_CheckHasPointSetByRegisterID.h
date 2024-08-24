#pragma once
#include "CoreMinimal.h"
#include "BAID_Base.h"
#include "BAID_CheckHasPointSetByRegisterID.generated.h"

UCLASS(Blueprintable)
class UBAID_CheckHasPointSetByRegisterID : public UBAID_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RegisterID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PointMinNum;
    
    UBAID_CheckHasPointSetByRegisterID();

};

