#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GSE_WorldFuncLib.generated.h"

class AWorldSettings;
class ULevel;
class UWorld;

UCLASS(Blueprintable)
class UNREALEXTENT_API UGSE_WorldFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGSE_WorldFuncLib();

    UFUNCTION(BlueprintCallable)
    static bool WorldViewportForeground(UWorld* World);
    
    UFUNCTION(BlueprintCallable)
    static bool WorldViewportCursorVisible(UWorld* World);
    
    UFUNCTION(BlueprintCallable)
    static ULevel* WorldGetPersistentLevel(UWorld* World);
    
    UFUNCTION(BlueprintCallable)
    static ULevel* WorldGetCurrentLevel(UWorld* World);
    
    UFUNCTION(BlueprintCallable)
    static void NotifyWorldSettingsMatchStart(UWorld* World);
    
    UFUNCTION(BlueprintCallable)
    static void NotifyWorldSettingsBeginPlay(UWorld* World);
    
    UFUNCTION(BlueprintCallable)
    static AWorldSettings* GetWorldSettings(ULevel* Level, bool bChecked);
    
};

