#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BGUTeleportPoint.generated.h"

UCLASS(Blueprintable)
class B1_API ABGUTeleportPoint : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GSActorLabel;
    
public:
    ABGUTeleportPoint(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    FString GetGSActorLablel();
    
};

