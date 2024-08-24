#pragma once
#include "CoreMinimal.h"
#include "Materials/MaterialLayersFunctions.h"
#include "Channels/MovieSceneFloatChannel.h"
#include "BGUMaterialParameterInfo.h"
#include "BGUVectorParameterInfoAndCurves.generated.h"

USTRUCT(BlueprintType)
struct UNREALEXTENT_API FBGUVectorParameterInfoAndCurves {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMaterialParameterInfo ParameterInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBGUMaterialParameterInfo BGUParameterInfo;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneFloatChannel XCurve;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneFloatChannel YCurve;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneFloatChannel ZCurve;
    
    FBGUVectorParameterInfoAndCurves();
};

