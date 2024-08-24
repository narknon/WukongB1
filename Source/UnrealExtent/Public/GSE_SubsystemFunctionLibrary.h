#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Templates/SubclassOf.h"
#include "GSE_SubsystemFunctionLibrary.generated.h"

class APlayerController;
class UEngineSubsystem;
class UGameInstanceSubsystem;
class ULocalPlayerSubsystem;
class UObject;
class UWorldSubsystem;

UCLASS(Blueprintable)
class UNREALEXTENT_API UGSE_SubsystemFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGSE_SubsystemFunctionLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UWorldSubsystem* GetWorldSubsystem(UObject* ContextObject, TSubclassOf<UWorldSubsystem> Class);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ULocalPlayerSubsystem* GetLocalPlayerSubSystemFromPlayerController(APlayerController* PlayerController, TSubclassOf<ULocalPlayerSubsystem> Class);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ULocalPlayerSubsystem* GetLocalPlayerSubsystem(UObject* ContextObject, TSubclassOf<ULocalPlayerSubsystem> Class);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UGameInstanceSubsystem* GetGameInstanceSubsystem(UObject* ContextObject, TSubclassOf<UGameInstanceSubsystem> Class);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UEngineSubsystem* GetEngineSubsystem(TSubclassOf<UEngineSubsystem> Class);
    
};

