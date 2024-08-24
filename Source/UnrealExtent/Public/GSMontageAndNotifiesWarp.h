#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimTypes.h"
#include "GSMontageAndNotifiesWarp.generated.h"

class UAnimMontage;

USTRUCT(BlueprintType)
struct FGSMontageAndNotifiesWarp {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* AM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAnimNotifyEvent> ANEArr;
    
    UNREALEXTENT_API FGSMontageAndNotifiesWarp();
};

