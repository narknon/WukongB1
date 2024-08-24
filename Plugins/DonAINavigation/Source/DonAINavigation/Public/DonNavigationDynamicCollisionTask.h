#pragma once
#include "CoreMinimal.h"
#include "DonNavigationTask.h"
#include "DonNavigationDynamicCollisionTask.generated.h"

USTRUCT(BlueprintType)
struct FDonNavigationDynamicCollisionTask : public FDonNavigationTask {
    GENERATED_BODY()
public:
    DONAINAVIGATION_API FDonNavigationDynamicCollisionTask();
};

