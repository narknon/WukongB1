#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "MovieSceneSection.h"
#include "BGUColorParameterInfoAndCurves.h"
#include "BGUMaterialParameterInfo.h"
#include "BGUScalarParameterInfoAndCurve.h"
#include "BGUVectorParameterInfoAndCurves.h"
#include "BGUMovieSceneParameterSection.generated.h"

UCLASS(Blueprintable)
class UNREALEXTENT_API UBGUMovieSceneParameterSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAffectClothMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAffectAllMaterial;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBGUScalarParameterInfoAndCurve> ScalarParameterInfosAndCurves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBGUVectorParameterInfoAndCurves> VectorParameterInfosAndCurves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBGUColorParameterInfoAndCurves> ColorParameterInfosAndCurves;
    
public:
    UBGUMovieSceneParameterSection();

    UFUNCTION(BlueprintCallable)
    bool RemoveVectorParameterByName(const FName& InParameterInfoName);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveVectorParameter(const FBGUMaterialParameterInfo& InParameterInfo);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveScalarParameterByName(const FName& InParameterInfoName);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveScalarParameter(const FBGUMaterialParameterInfo& InParameterInfo);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveColorParameterByName(const FName& InParameterInfoName);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveColorParameter(const FBGUMaterialParameterInfo& InParameterInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetParameterInfos(TSet<FBGUMaterialParameterInfo>& ParameterInfos) const;
    
    UFUNCTION(BlueprintCallable)
    void AddVectorParameterKey(const FBGUMaterialParameterInfo& InParameterInfo, FFrameNumber InTime, FVector InValue);
    
    UFUNCTION(BlueprintCallable)
    void AddScalarParameterKey(const FBGUMaterialParameterInfo& InParameterInfo, FFrameNumber InTime, float InValue);
    
    UFUNCTION(BlueprintCallable)
    void AddColorParameterKey(const FBGUMaterialParameterInfo& InParameterInfo, FFrameNumber InTime, FLinearColor InValue);
    
};

