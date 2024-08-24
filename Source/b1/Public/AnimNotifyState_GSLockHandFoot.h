#pragma once
#include "CoreMinimal.h"
#include "AnimNotifyState_GSBase.h"
#include "EBUHandFootType.h"
#include "AnimNotifyState_GSLockHandFoot.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class B1_API UAnimNotifyState_GSLockHandFoot : public UAnimNotifyState_GSBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBUHandFootType NeedLockType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BeginReduceScale;
    
    UAnimNotifyState_GSLockHandFoot();

};

