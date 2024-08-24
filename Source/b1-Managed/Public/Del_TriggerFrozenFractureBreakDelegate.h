#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Animation/PoseSnapshot.h"
#include "Del_TriggerFrozenFractureBreakDelegate.generated.h"

class AActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FDel_TriggerFrozenFractureBreak, AActor*, FractureActor, FPoseSnapshot, Snapshot, FVector, HitDir);

