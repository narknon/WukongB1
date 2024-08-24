#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SpiderNavGridTracer.generated.h"

class USphereComponent;

UCLASS(Blueprintable)
class ASpiderNavGridTracer : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* CollisionComp;
    
    ASpiderNavGridTracer(const FObjectInitializer& ObjectInitializer);

};

