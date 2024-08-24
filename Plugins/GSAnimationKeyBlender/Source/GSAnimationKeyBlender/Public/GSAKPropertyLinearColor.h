#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EntitySystem/MovieScenePropertyBinding.h"
#include "GSAKPropertyLinearColor.generated.h"

USTRUCT(BlueprintType)
struct FGSAKPropertyLinearColor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieScenePropertyBinding PropertyBinding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor PropertyFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor PropertyValue;
    
    GSANIMATIONKEYBLENDER_API FGSAKPropertyLinearColor();
};

