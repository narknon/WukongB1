#pragma once
#include "CoreMinimal.h"
#include "UStGSOverlapResult.generated.h"

class AActor;
class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct B1_API FUStGSOverlapResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> Actor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UPrimitiveComponent> Component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bBlockingHit: 1;
    
    FUStGSOverlapResult();
};

