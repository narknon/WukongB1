#pragma once
#include "CoreMinimal.h"
#include "EGsDynamicObstacleState.h"
#include "GsManagedSceneObjBase.h"
#include "GsManagedDynamicObstacle.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct CALLIOPE_API FGsManagedDynamicObstacle : public FGsManagedSceneObjBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGsDynamicObstacleState State;
    
    FGsManagedDynamicObstacle();
};

