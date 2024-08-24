#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "InputPlayerDirectionData.h"
#include "FilmstormFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class MM_API UFilmstormFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFilmstormFunctionLibrary();

private:
    UFUNCTION(BlueprintCallable)
    static void CreatePlayerInputDirection(FInputPlayerDirectionData& OutConstructTargetDirection, const FTransform& DesiredTransform, const FTransform& RootWorldTransform, const float TargetDirectionInputStrength);
    
};

