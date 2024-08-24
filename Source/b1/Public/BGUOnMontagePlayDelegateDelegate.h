#pragma once
#include "CoreMinimal.h"
#include "BGUOnMontagePlayDelegateDelegate.generated.h"

class UAnimInstance;
class UAnimMontage;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FBGUOnMontagePlayDelegate, int32, ReqIdx, UAnimInstance*, AnimInstance, UAnimMontage*, Montage);

