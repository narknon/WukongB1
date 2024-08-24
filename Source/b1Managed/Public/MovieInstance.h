#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MovieInstance.generated.h"

UCLASS(Blueprintable)
class UMovieInstance : public UObject {
    GENERATED_BODY()
public:
    UMovieInstance();

private:
    UFUNCTION(BlueprintCallable)
    void OnSequencePlayStopped();
    
    UFUNCTION(BlueprintCallable)
    void OnSequencePlayFinished();
    
    UFUNCTION(BlueprintCallable)
    void OnLoadLevelStreamingFinish(int32 ActionID, int32 Linkage);
    
};

