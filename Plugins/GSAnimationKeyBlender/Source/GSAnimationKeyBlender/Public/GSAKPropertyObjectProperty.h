#pragma once
#include "CoreMinimal.h"
#include "EntitySystem/MovieScenePropertyBinding.h"
#include "GSAKPropertyObjectProperty.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FGSAKPropertyObjectProperty {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieScenePropertyBinding PropertyBinding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* PropertyValue;
    
    GSANIMATIONKEYBLENDER_API FGSAKPropertyObjectProperty();
};

