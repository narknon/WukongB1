#pragma once
#include "CoreMinimal.h"
#include "Materials/MaterialLayersFunctions.h"
#include "Channels/MovieSceneFloatChannel.h"
#include "BGUMaterialParameterInfo.h"
#include "BGUColorParameterInfoAndCurves.generated.h"

USTRUCT(BlueprintType)
struct UNREALEXTENT_API FBGUColorParameterInfoAndCurves {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMaterialParameterInfo ParameterInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBGUMaterialParameterInfo BGUParameterInfo;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneFloatChannel RedCurve;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneFloatChannel GreenCurve;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneFloatChannel BlueCurve;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneFloatChannel AlphaCurve;
    
    FBGUColorParameterInfoAndCurves();
};

