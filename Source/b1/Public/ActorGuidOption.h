#pragma once
#include "CoreMinimal.h"
#include "ActorGuidOption.generated.h"

USTRUCT(BlueprintType)
struct FActorGuidOption {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ActorGuid;
    
    B1_API FActorGuidOption();
};

