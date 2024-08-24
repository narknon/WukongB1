#pragma once
#include "CoreMinimal.h"
#include "DonNavigationDynamicCollisionPayload.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FDonNavigationDynamicCollisionPayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> OwnerPayload;
    
    DONAINAVIGATION_API FDonNavigationDynamicCollisionPayload();
};

