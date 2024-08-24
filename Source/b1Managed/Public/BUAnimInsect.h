#pragma once
#include "CoreMinimal.h"
#include "BUAnimInstanceBase.h"
#include "EABPMoveMode.h"
#include "BUAnimInsect.generated.h"

UCLASS(Blueprintable, NonTransient)
class UBUAnimInsect : public UBUAnimInstanceBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EABPMoveMode FinalABPMoveMode;
    
    UBUAnimInsect();

};

