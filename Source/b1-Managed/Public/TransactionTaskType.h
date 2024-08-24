#pragma once
#include "CoreMinimal.h"
#include "TransactionTaskType.generated.h"

UENUM(BlueprintType)
enum class TransactionTaskType : uint8 {
    Interact_RequestInteractObjLock,
    Interact_TriggerPreInteract,
    Interact_Input,
    Interact_MatchPos,
    Interact_PlaySound,
    Interact_HandleInteractCamera,
    Interact_ProcessActionLock,
    Interact_DoInteractActionAndWait,
    Interact_TriggerBeInteract,
    Interact_ProcessActionUnLock,
    Interact_ResetCamera,
    Interact_RequestInteractObjUnLock,
};

