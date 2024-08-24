#pragma once
#include "CoreMinimal.h"
#include "BAID_Base.h"
#include "BAID_CheckMasterEquipMagic.generated.h"

UCLASS(Blueprintable)
class UBAID_CheckMasterEquipMagic : public UBAID_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ItemId;
    
    UBAID_CheckMasterEquipMagic();

};

