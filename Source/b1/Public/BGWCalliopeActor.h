#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BGWCalliopeActor.generated.h"

class UCalliopeAsset;
class UObject;

UCLASS(Blueprintable)
class B1_API ABGWCalliopeActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UCalliopeAsset> Asset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UObject*> PreloadedAssets;
    
    ABGWCalliopeActor(const FObjectInitializer& ObjectInitializer);

};

