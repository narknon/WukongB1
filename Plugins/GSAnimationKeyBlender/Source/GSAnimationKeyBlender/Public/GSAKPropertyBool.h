#pragma once
#include "CoreMinimal.h"
#include "EntitySystem/MovieScenePropertyBinding.h"
#include "GSAKPropertyBool.generated.h"

USTRUCT(BlueprintType)
struct FGSAKPropertyBool {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieScenePropertyBinding PropertyBinding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PropertyValue;
    
    GSANIMATIONKEYBLENDER_API FGSAKPropertyBool();
};

