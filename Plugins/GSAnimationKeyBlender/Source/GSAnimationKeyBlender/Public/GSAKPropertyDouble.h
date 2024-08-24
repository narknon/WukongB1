#pragma once
#include "CoreMinimal.h"
#include "EntitySystem/MovieScenePropertyBinding.h"
#include "GSAKPropertyDouble.generated.h"

USTRUCT(BlueprintType)
struct FGSAKPropertyDouble {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieScenePropertyBinding PropertyBinding;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double PropertyValue;
    
    GSANIMATIONKEYBLENDER_API FGSAKPropertyDouble();
};

