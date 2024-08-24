#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BGUSplineTeleportActor.generated.h"

UCLASS(Blueprintable)
class ABGUSplineTeleportActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* SplineActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CircleIndex;
    
    ABGUSplineTeleportActor(const FObjectInitializer& ObjectInitializer);

};

