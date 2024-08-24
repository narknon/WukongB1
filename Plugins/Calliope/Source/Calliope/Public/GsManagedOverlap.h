#pragma once
#include "CoreMinimal.h"
#include "EGsOverlapState.h"
#include "GsManagedSceneObjBase.h"
#include "GsManagedOverlap.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct CALLIOPE_API FGsManagedOverlap : public FGsManagedSceneObjBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGsOverlapState State;
    
    FGsManagedOverlap();
};

