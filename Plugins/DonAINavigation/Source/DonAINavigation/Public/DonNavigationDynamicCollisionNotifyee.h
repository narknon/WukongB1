#pragma once
#include "CoreMinimal.h"
#include "DonNavigationDynamicCollisionDelegateDelegate.h"
#include "DonNavigationDynamicCollisionNotifyee.generated.h"

USTRUCT(BlueprintType)
struct FDonNavigationDynamicCollisionNotifyee {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDonNavigationDynamicCollisionDelegate Listener;
    
    DONAINAVIGATION_API FDonNavigationDynamicCollisionNotifyee();
};

