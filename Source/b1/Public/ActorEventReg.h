#pragma once
#include "CoreMinimal.h"
#include "ActorEventReg.generated.h"

class UBaseActorComp;

USTRUCT(BlueprintType)
struct FActorEventReg {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EventID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBaseActorComp* Comp;
    
    B1_API FActorEventReg();
};

