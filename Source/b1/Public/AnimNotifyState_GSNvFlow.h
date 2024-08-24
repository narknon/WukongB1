#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyState_GSBase.h"
#include "AnimNotifyState_GSNvFlow.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UAnimNotifyState_GSNvFlow : public UAnimNotifyState_GSBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFlowEmit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFlowCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CollisionIndex;
    
    UAnimNotifyState_GSNvFlow();

};

