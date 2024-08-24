#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PrefabDebugActor.generated.h"

UCLASS(Blueprintable)
class PREFABRICATORRUNTIME_API APrefabDebugActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> ActorData;
    
    APrefabDebugActor(const FObjectInitializer& ObjectInitializer);

};

