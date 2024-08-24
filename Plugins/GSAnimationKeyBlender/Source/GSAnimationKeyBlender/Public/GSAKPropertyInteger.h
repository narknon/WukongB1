#pragma once
#include "CoreMinimal.h"
#include "EntitySystem/MovieScenePropertyBinding.h"
#include "GSAKPropertyInteger.generated.h"

USTRUCT(BlueprintType)
struct FGSAKPropertyInteger {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieScenePropertyBinding PropertyBinding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PropertyValue;
    
    GSANIMATIONKEYBLENDER_API FGSAKPropertyInteger();
};

