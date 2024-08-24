#pragma once
#include "CoreMinimal.h"
#include "ActorPartition/PartitionActor.h"
#include "GSNavigationChunkContainerActor.generated.h"

UCLASS(Blueprintable, NotPlaceable)
class UNREALEXTENT_API AGSNavigationChunkContainerActor : public APartitionActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 ChunkActorGridSize;
    
public:
    AGSNavigationChunkContainerActor(const FObjectInitializer& ObjectInitializer);

};

