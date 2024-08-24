#pragma once
#include "CoreMinimal.h"
#include "EGsSpawnerState.h"
#include "GsManagedSceneObjBase.h"
#include "GsManagedSpawner.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct CALLIOPE_API FGsManagedSpawner : public FGsManagedSceneObjBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGsSpawnerState State;
    
    FGsManagedSpawner();
};

