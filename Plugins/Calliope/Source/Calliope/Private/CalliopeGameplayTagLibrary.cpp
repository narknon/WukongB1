#include "CalliopeGameplayTagLibrary.h"

UCalliopeGameplayTagLibrary::UCalliopeGameplayTagLibrary() {
}

FGameplayTag UCalliopeGameplayTagLibrary::MakeGameplayTagFromString(const FString& TagStr) {
    return FGameplayTag{};
}

FGameplayTag UCalliopeGameplayTagLibrary::MakeGameplayTagFromName(const FName& TagName) {
    return FGameplayTag{};
}

FGameplayTagContainer UCalliopeGameplayTagLibrary::MakeGameplayTagContainer() {
    return FGameplayTagContainer{};
}

bool UCalliopeGameplayTagLibrary::HasTagName(const FGameplayTagContainer& TagContainer, FName TagName, bool bExactMatch) {
    return false;
}

FGameplayTagContainer UCalliopeGameplayTagLibrary::FilterTags(const FGameplayTagContainer& Container, const FGameplayTagContainer& OtherContainer, bool bExactMatch) {
    return FGameplayTagContainer{};
}

FGameplayTagContainer UCalliopeGameplayTagLibrary::FilterTag(const FGameplayTagContainer& Container, const FGameplayTag& Tag, bool bExactMatch) {
    return FGameplayTagContainer{};
}

bool UCalliopeGameplayTagLibrary::AddGamePlayTagToINI(const FString& NewTag, const FString& Comment, FName TagSourceName, bool bIsRestrictedTag, bool bAllowNonRestrictedChildren) {
    return false;
}


