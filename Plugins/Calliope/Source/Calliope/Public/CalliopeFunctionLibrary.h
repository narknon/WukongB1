#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CalliopeFunctionLibrary.generated.h"

class UMovieScene;

UCLASS(Blueprintable)
class CALLIOPE_API UCalliopeFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UCalliopeFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void MarkDirtyAllCalliopeTrack(UMovieScene* InSequence);
    
};

