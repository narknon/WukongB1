#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GSDescPropertyDetailCustomizationHelper.generated.h"

UCLASS(Blueprintable)
class B1_API UGSDescPropertyDetailCustomizationHelper : public UObject {
    GENERATED_BODY()
public:
    UGSDescPropertyDetailCustomizationHelper();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGetRowStrings(TArray<FString>& OutStrings, TArray<bool>& OutRestrictedItems);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool GetRowNameByDescId(int32 DescID, FName& RowName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 FindDescIdByRowName(FName RowName);
    
};

