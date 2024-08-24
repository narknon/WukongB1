#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "BAID_Base.h"
#include "BAID_CheckFSMStateActive_Custom.generated.h"

UCLASS(Blueprintable)
class UBAID_CheckFSMStateActive_Custom : public UBAID_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag FSMStateTag;
    
    UBAID_CheckFSMStateActive_Custom();

};

