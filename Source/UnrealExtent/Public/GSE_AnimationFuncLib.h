#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MovieSceneObjectBindingID.h"
#include "SequenceBindingIDInCS.h"
#include "GSE_AnimationFuncLib.generated.h"

class UObject;
class UUserWidget;
class UWidgetAnimation;

UCLASS(Blueprintable)
class UNREALEXTENT_API UGSE_AnimationFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGSE_AnimationFuncLib();

    UFUNCTION(BlueprintCallable)
    static bool SaveAsset(UWidgetAnimation* InAnimation, const FString& Path, const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    static FSequenceBindingIDInCS GetAnimationBindingIDByNameCS(UWidgetAnimation* Animation, const FName& TargetName);
    
    UFUNCTION(BlueprintCallable)
    static FMovieSceneObjectBindingID GetAnimationBindingIDByName(UWidgetAnimation* Animation, const FName& TargetName);
    
    UFUNCTION(BlueprintCallable)
    static FMovieSceneObjectBindingID GetAnimationBindingIDByDisplayName(UWidgetAnimation* Animation, const FName& TargetName);
    
    UFUNCTION(BlueprintCallable)
    static UWidgetAnimation* DuplicateAnimation(UWidgetAnimation* InAnimation, UObject* Outer, FName Name);
    
    UFUNCTION(BlueprintCallable)
    static void AnimationBindPossessableObjectCS(UWidgetAnimation* Animation, const FSequenceBindingIDInCS& BindingID, UObject* BindObj, UObject* Ctx);
    
    UFUNCTION(BlueprintCallable)
    static void AnimationBindAllPossessableObject(UUserWidget* RootWidget, UWidgetAnimation* Animation, bool UseDisplayName);
    
};

