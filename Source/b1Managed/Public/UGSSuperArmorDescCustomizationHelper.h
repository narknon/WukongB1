#pragma once
#include "CoreMinimal.h"
#include "GSDescPropertyDetailCustomizationHelper.h"
#include "UGSSuperArmorDescCustomizationHelper.generated.h"

UCLASS(Blueprintable)
class UUGSSuperArmorDescCustomizationHelper : public UGSDescPropertyDetailCustomizationHelper {
    GENERATED_BODY()
public:
    UUGSSuperArmorDescCustomizationHelper();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnGetRowStrings(TArray<FString>& OutStrings, TArray<bool>& OutRestrictedItems);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetRowNameByDescId(int32 DescID, FName& RowName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 FindDescIdByRowName(FName RowName);
    
};

