#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GSE_SaveGameFuncLib.generated.h"

UCLASS(Blueprintable)
class UNREALEXTENT_API UGSE_SaveGameFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGSE_SaveGameFuncLib();

    UFUNCTION(BlueprintCallable)
    static bool SaveDataToSlot(const TArray<uint8>& InSaveData, const FString& SlotName, const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    static bool LoadDataFromSlot(TArray<uint8>& OutSaveData, const FString& SlotName, const int32 UserIndex);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FString> GetAllSaveGameSlotNames();
    
};

