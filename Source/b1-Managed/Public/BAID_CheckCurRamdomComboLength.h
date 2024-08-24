#pragma once
#include "CoreMinimal.h"
#include "BAID_Base.h"
#include "BAID_CheckCurRamdomComboLength.generated.h"

UCLASS(Blueprintable)
class UBAID_CheckCurRamdomComboLength : public UBAID_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ComboLengthYouWant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 PreferCloser: 1;
    
    UBAID_CheckCurRamdomComboLength();

};

