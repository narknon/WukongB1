#include "BGUMovieSceneParameterSection.h"

UBGUMovieSceneParameterSection::UBGUMovieSceneParameterSection() {
    this->bSupportsInfiniteRange = true;
    this->bAffectClothMaterial = false;
    this->bAffectAllMaterial = false;
}

bool UBGUMovieSceneParameterSection::RemoveVectorParameterByName(const FName& InParameterInfoName) {
    return false;
}

bool UBGUMovieSceneParameterSection::RemoveVectorParameter(const FBGUMaterialParameterInfo& InParameterInfo) {
    return false;
}

bool UBGUMovieSceneParameterSection::RemoveScalarParameterByName(const FName& InParameterInfoName) {
    return false;
}

bool UBGUMovieSceneParameterSection::RemoveScalarParameter(const FBGUMaterialParameterInfo& InParameterInfo) {
    return false;
}

bool UBGUMovieSceneParameterSection::RemoveColorParameterByName(const FName& InParameterInfoName) {
    return false;
}

bool UBGUMovieSceneParameterSection::RemoveColorParameter(const FBGUMaterialParameterInfo& InParameterInfo) {
    return false;
}

void UBGUMovieSceneParameterSection::GetParameterInfos(TSet<FBGUMaterialParameterInfo>& ParameterInfos) const {
}

void UBGUMovieSceneParameterSection::AddVectorParameterKey(const FBGUMaterialParameterInfo& InParameterInfo, FFrameNumber InTime, FVector InValue) {
}

void UBGUMovieSceneParameterSection::AddScalarParameterKey(const FBGUMaterialParameterInfo& InParameterInfo, FFrameNumber InTime, float InValue) {
}

void UBGUMovieSceneParameterSection::AddColorParameterKey(const FBGUMaterialParameterInfo& InParameterInfo, FFrameNumber InTime, FLinearColor InValue) {
}


