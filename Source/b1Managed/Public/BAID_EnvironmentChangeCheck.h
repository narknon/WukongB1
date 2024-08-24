#pragma once
#include "CoreMinimal.h"
#include "BAID_Base.h"
#include "BAID_EnvironmentChangeCheck.generated.h"

UCLASS(Blueprintable)
class UBAID_EnvironmentChangeCheck : public UBAID_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SwitchSchedule;
    
    UBAID_EnvironmentChangeCheck();

};

