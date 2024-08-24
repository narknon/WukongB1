#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SpiderNavPoint.generated.h"

class USphereComponent;

UCLASS(Blueprintable)
class ASpiderNavPoint : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* CollisionComp;
    
    ASpiderNavPoint(const FObjectInitializer& ObjectInitializer);

};

