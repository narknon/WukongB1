#pragma once
#include "CoreMinimal.h"
#include "EntitySystem/MovieScenePropertyBinding.h"
#include "GSAKPropertyByte.generated.h"

USTRUCT(BlueprintType)
struct FGSAKPropertyByte {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieScenePropertyBinding PropertyBinding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 PropertyValue;
    
    GSANIMATIONKEYBLENDER_API FGSAKPropertyByte();
};

