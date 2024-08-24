#include "UGSSuperArmorDescCustomizationHelper.h"

UUGSSuperArmorDescCustomizationHelper::UUGSSuperArmorDescCustomizationHelper() {
}

void UUGSSuperArmorDescCustomizationHelper::OnGetRowStrings_Implementation(TArray<FString>& OutStrings, TArray<bool>& OutRestrictedItems) {
}

bool UUGSSuperArmorDescCustomizationHelper::GetRowNameByDescId_Implementation(int32 DescID, FName& RowName) {
    return false;
}

int32 UUGSSuperArmorDescCustomizationHelper::FindDescIdByRowName_Implementation(FName RowName) {
    return 0;
}


