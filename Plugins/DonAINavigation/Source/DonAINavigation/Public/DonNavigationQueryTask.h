#pragma once
#include "CoreMinimal.h"
#include "DoNNavigationResultHandlerDelegate.h"
#include "DonNavigationDynamicCollisionDelegateDelegate.h"
#include "DonNavigationTask.h"
#include "DonNavigationQueryTask.generated.h"

USTRUCT(BlueprintType)
struct FDonNavigationQueryTask : public FDonNavigationTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDoNNavigationResultHandler ResultHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDonNavigationDynamicCollisionDelegate DynamicCollisionListener;
    
    DONAINAVIGATION_API FDonNavigationQueryTask();
};

