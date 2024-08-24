#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BGUFuncLibAI.generated.h"

class AActor;

UCLASS(Blueprintable)
class B1_API UBGUFuncLibAI : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBGUFuncLibAI();

    UFUNCTION(BlueprintCallable)
    static int32 BGURequestAITurnTo(AActor* Unit, FVector position);
    
    UFUNCTION(BlueprintCallable)
    static bool BGUIsAIRequestActive(AActor* Unit, int32 RequestID);
    
    UFUNCTION(BlueprintCallable)
    static float BGUAICaculateTargetAngle(AActor* Target, AActor* MySelf);
    
};

