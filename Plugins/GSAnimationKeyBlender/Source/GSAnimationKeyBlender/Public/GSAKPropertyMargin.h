#pragma once
#include "CoreMinimal.h"
#include "EntitySystem/MovieScenePropertyBinding.h"
#include "Layout/Margin.h"
#include "GSAKPropertyMargin.generated.h"

USTRUCT(BlueprintType)
struct FGSAKPropertyMargin {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieScenePropertyBinding PropertyBinding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin PropertyFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin PropertyValue;
    
    GSANIMATIONKEYBLENDER_API FGSAKPropertyMargin();
};

