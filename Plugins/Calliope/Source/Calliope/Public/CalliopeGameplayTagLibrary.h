#pragma once
#include "CoreMinimal.h"
#include "BlueprintGameplayTagLibrary.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "CalliopeGameplayTagLibrary.generated.h"

UCLASS(Blueprintable)
class CALLIOPE_API UCalliopeGameplayTagLibrary : public UBlueprintGameplayTagLibrary {
    GENERATED_BODY()
public:
    UCalliopeGameplayTagLibrary();

    UFUNCTION(BlueprintCallable)
    static FGameplayTag MakeGameplayTagFromString(const FString& TagStr);
    
    UFUNCTION(BlueprintCallable)
    static FGameplayTag MakeGameplayTagFromName(const FName& TagName);
    
    UFUNCTION(BlueprintCallable)
    static FGameplayTagContainer MakeGameplayTagContainer();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool HasTagName(const FGameplayTagContainer& TagContainer, FName TagName, bool bExactMatch);
    
    UFUNCTION(BlueprintCallable)
    static FGameplayTagContainer FilterTags(const FGameplayTagContainer& Container, const FGameplayTagContainer& OtherContainer, bool bExactMatch);
    
    UFUNCTION(BlueprintCallable)
    static FGameplayTagContainer FilterTag(const FGameplayTagContainer& Container, const FGameplayTag& Tag, bool bExactMatch);
    
    UFUNCTION(BlueprintCallable)
    static bool AddGamePlayTagToINI(const FString& NewTag, const FString& Comment, FName TagSourceName, bool bIsRestrictedTag, bool bAllowNonRestrictedChildren);
    
};

