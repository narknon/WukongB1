#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GSWCStreamingSourceActor.generated.h"

class UGSWorldCompositionStreamingSourceComponent;

UCLASS(Blueprintable)
class UNREALEXTENT_API AGSWCStreamingSourceActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGSWorldCompositionStreamingSourceComponent* StreamingSorceComponent;
    
    AGSWCStreamingSourceActor(const FObjectInitializer& ObjectInitializer);

};

