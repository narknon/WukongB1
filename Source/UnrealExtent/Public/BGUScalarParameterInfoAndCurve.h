#pragma once
#include "CoreMinimal.h"
#include "Materials/MaterialLayersFunctions.h"
#include "Channels/MovieSceneFloatChannel.h"
#include "BGUMaterialParameterInfo.h"
#include "BGUScalarParameterInfoAndCurve.generated.h"

USTRUCT(BlueprintType)
struct UNREALEXTENT_API FBGUScalarParameterInfoAndCurve {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMaterialParameterInfo ParameterInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBGUMaterialParameterInfo BGUParameterInfo;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneFloatChannel ParameterCurve;
    
    FBGUScalarParameterInfoAndCurve();
};

