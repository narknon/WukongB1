#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CLSFunctionLibrary.generated.h"

class AActor;
class ACLSManager;

UCLASS(Blueprintable)
class CUSTOMLIGHTSYSTEM_API UCLSFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UCLSFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void UnregisterNeedPointLightControlActor(const FName& InTag);
    
    UFUNCTION(BlueprintCallable)
    static void RegisterNeedPointLightControlActor(const FName& InTag, AActor* InActor);
    
    UFUNCTION(BlueprintCallable)
    static void OverrideEnvLightBlendInSpeed(bool bOverride, float InBlendInSpeed);
    
    UFUNCTION(BlueprintCallable)
    static ACLSManager* GetCurrentCLSManager();
    
};

