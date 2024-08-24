#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneParameterTemplate.h"
#include "BGUColorParameterInfoAndCurves.h"
#include "BGUScalarParameterInfoAndCurve.h"
#include "BGUVectorParameterInfoAndCurves.h"
#include "BGUMovieSceneComponentMaterialSectionTemplate.generated.h"

USTRUCT(BlueprintType)
struct FBGUMovieSceneComponentMaterialSectionTemplate : public FMovieSceneParameterSectionTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBGUScalarParameterInfoAndCurve> ScalarParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBGUVectorParameterInfoAndCurves> VectorParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBGUColorParameterInfoAndCurves> ColorParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaterialIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAffectClothMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAffectAllMaterial;
    
public:
    UNREALEXTENT_API FBGUMovieSceneComponentMaterialSectionTemplate();
};

