#include "GSE_AnimationFuncLib.h"

UGSE_AnimationFuncLib::UGSE_AnimationFuncLib() {
}

bool UGSE_AnimationFuncLib::SaveAsset(UWidgetAnimation* InAnimation, const FString& Path, const FString& Name) {
    return false;
}

FSequenceBindingIDInCS UGSE_AnimationFuncLib::GetAnimationBindingIDByNameCS(UWidgetAnimation* Animation, const FName& TargetName) {
    return FSequenceBindingIDInCS{};
}

FMovieSceneObjectBindingID UGSE_AnimationFuncLib::GetAnimationBindingIDByName(UWidgetAnimation* Animation, const FName& TargetName) {
    return FMovieSceneObjectBindingID{};
}

FMovieSceneObjectBindingID UGSE_AnimationFuncLib::GetAnimationBindingIDByDisplayName(UWidgetAnimation* Animation, const FName& TargetName) {
    return FMovieSceneObjectBindingID{};
}

UWidgetAnimation* UGSE_AnimationFuncLib::DuplicateAnimation(UWidgetAnimation* InAnimation, UObject* Outer, FName Name) {
    return NULL;
}

void UGSE_AnimationFuncLib::AnimationBindPossessableObjectCS(UWidgetAnimation* Animation, const FSequenceBindingIDInCS& BindingID, UObject* BindObj, UObject* Ctx) {
}

void UGSE_AnimationFuncLib::AnimationBindAllPossessableObject(UUserWidget* RootWidget, UWidgetAnimation* Animation, bool UseDisplayName) {
}


