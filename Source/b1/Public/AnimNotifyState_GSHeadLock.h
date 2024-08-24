#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyState_GSBase.h"
#include "AnimNotifyState_GSHeadLock.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class B1_API UAnimNotifyState_GSHeadLock : public UAnimNotifyState_GSBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReduceHeadLockAlphaScale;
    
    UAnimNotifyState_GSHeadLock();

};

