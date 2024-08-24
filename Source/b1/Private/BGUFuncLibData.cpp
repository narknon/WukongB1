#include "BGUFuncLibData.h"

UBGUFuncLibData::UBGUFuncLibData() {
}

void UBGUFuncLibData::BGUSetTagVector(AActor* Unit, const FGameplayTag& Tag, const FVector& Val) {
}

void UBGUFuncLibData::BGUSetTagObject(AActor* Unit, const FGameplayTag& Tag, UObject* Val) {
}

void UBGUFuncLibData::BGUSetTagNameWithGameplayTag(AActor* Unit, const FGameplayTag& Tag, const FGameplayTag& Val) {
}

void UBGUFuncLibData::BGUSetTagName(AActor* Unit, const FGameplayTag& Tag, const FName& Val) {
}

void UBGUFuncLibData::BGUSetTagIntByName(AActor* Unit, const FName& TagName, float Val) {
}

void UBGUFuncLibData::BGUSetTagInt(AActor* Unit, const FGameplayTag& Tag, int32 Val) {
}

void UBGUFuncLibData::BGUSetTagFloatByName(AActor* Unit, const FName& TagName, float Val) {
}

void UBGUFuncLibData::BGUSetTagFloat(AActor* Unit, const FGameplayTag& Tag, float Val) {
}

void UBGUFuncLibData::BGUSetTagEnum(AActor* Unit, const FGameplayTag& Tag, uint8 Val) {
}

void UBGUFuncLibData::BGUGetTagVector(AActor* Unit, const FGameplayTag& Tag, bool& IsValid, FVector& Out) {
}

UObject* UBGUFuncLibData::BGUGetTagObject(AActor* Unit, const FGameplayTag& Tag) {
    return NULL;
}

void UBGUFuncLibData::BGUGetTagName(AActor* Unit, const FGameplayTag& Tag, bool& IsValid, FName& Out) {
}

void UBGUFuncLibData::BGUGetTagIntByName(AActor* Unit, const FName& TagName, bool& IsValid, int32& Out) {
}

void UBGUFuncLibData::BGUGetTagInt(AActor* Unit, const FGameplayTag& Tag, bool& IsValid, int32& Out) {
}

void UBGUFuncLibData::BGUGetTagFloatByName(AActor* Unit, const FName& TagName, bool& IsValid, float& Out) {
}

void UBGUFuncLibData::BGUGetTagFloat(AActor* Unit, const FGameplayTag& Tag, bool& IsValid, float& Out) {
}

void UBGUFuncLibData::BGUGetTagEnum(AActor* Unit, const FGameplayTag& Tag, bool& IsValid, uint8& Out) {
}


