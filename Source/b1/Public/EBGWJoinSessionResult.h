#pragma once
#include "CoreMinimal.h"
#include "EBGWJoinSessionResult.generated.h"

UENUM(BlueprintType)
enum EBGWJoinSessionResult {
    Success,
    SessionIsFull,
    SessionDoesNotExist,
    CouldNotRetrieveAddress,
    AlreadyInSession,
    UnknownError,
};

