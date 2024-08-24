#pragma once
#include "CoreMinimal.h"
#include "UILRuntimeDelegateWrapperBase.h"
#include "FOnMovieSceneSequencePlayerEventWrapper.generated.h"

UCLASS(Blueprintable)
class UFOnMovieSceneSequencePlayerEventWrapper : public UUILRuntimeDelegateWrapperBase {
    GENERATED_BODY()
public:
    UFOnMovieSceneSequencePlayerEventWrapper();

private:
    UFUNCTION(BlueprintCallable)
    void Callback();
    
};

