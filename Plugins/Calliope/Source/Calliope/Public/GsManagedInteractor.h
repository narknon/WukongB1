#pragma once
#include "CoreMinimal.h"
#include "EGsInteractorState.h"
#include "GsManagedSceneObjBase.h"
#include "GsSmartParam.h"
#include "GsManagedInteractor.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct CALLIOPE_API FGsManagedInteractor : public FGsManagedSceneObjBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGsInteractorState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGsSmartParam GroupId;
    
    FGsManagedInteractor();
};

