#pragma once
#include "CoreMinimal.h"
#include "SubstanceConnection.generated.h"

USTRUCT(BlueprintType)
struct FSubstanceConnection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OutputIdentifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString InputImageIdentifier;
    
    SUBSTANCECORE_API FSubstanceConnection();
};

