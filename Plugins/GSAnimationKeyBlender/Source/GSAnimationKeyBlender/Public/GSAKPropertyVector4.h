#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EntitySystem/MovieScenePropertyBinding.h"
#include "GSAKPropertyVector4.generated.h"

USTRUCT(BlueprintType)
struct FGSAKPropertyVector4 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieScenePropertyBinding PropertyBinding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VectorDimension;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector4 PropertyFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector4 PropertyValue;
    
    GSANIMATIONKEYBLENDER_API FGSAKPropertyVector4();
};

