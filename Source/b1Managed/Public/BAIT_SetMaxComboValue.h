#pragma once
#include "CoreMinimal.h"
#include "BAIT_Base.h"
#include "BAIT_SetMaxComboValue.generated.h"

UCLASS(Blueprintable)
class UBAIT_SetMaxComboValue : public UBAIT_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ComboNumMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ComboNumMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnableDebugLog: 1;
    
    UBAIT_SetMaxComboValue();

};

