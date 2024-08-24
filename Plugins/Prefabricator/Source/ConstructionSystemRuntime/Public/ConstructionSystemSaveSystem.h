#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ConstructionSystemSaveSystem.generated.h"

class UObject;

UCLASS(Blueprintable)
class CONSTRUCTIONSYSTEMRUNTIME_API UConstructionSystemSaveSystem : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UConstructionSystemSaveSystem();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SaveConstructionSystemLevel(const UObject* WorldContextObject, const FString& SaveSlotName, int32 UserIndex, bool bSavePlayerState);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void LoadConstructionSystemLevel(const UObject* WorldContextObject, const FName& LevelName, bool bAbsolute, const FString& SaveSlotName, int32 UserIndex);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void HandleConstructionSystemLevelLoad(const UObject* WorldContextObject);
    
};

