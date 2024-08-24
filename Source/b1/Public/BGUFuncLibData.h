#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "BGUFuncLibData.generated.h"

class AActor;
class UObject;

UCLASS(Blueprintable)
class B1_API UBGUFuncLibData : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBGUFuncLibData();

    UFUNCTION(BlueprintCallable)
    static void BGUSetTagVector(AActor* Unit, const FGameplayTag& Tag, const FVector& Val);
    
    UFUNCTION(BlueprintCallable)
    static void BGUSetTagObject(AActor* Unit, const FGameplayTag& Tag, UObject* Val);
    
    UFUNCTION(BlueprintCallable)
    static void BGUSetTagNameWithGameplayTag(AActor* Unit, const FGameplayTag& Tag, const FGameplayTag& Val);
    
    UFUNCTION(BlueprintCallable)
    static void BGUSetTagName(AActor* Unit, const FGameplayTag& Tag, const FName& Val);
    
    UFUNCTION(BlueprintCallable)
    static void BGUSetTagIntByName(AActor* Unit, const FName& TagName, float Val);
    
    UFUNCTION(BlueprintCallable)
    static void BGUSetTagInt(AActor* Unit, const FGameplayTag& Tag, int32 Val);
    
    UFUNCTION(BlueprintCallable)
    static void BGUSetTagFloatByName(AActor* Unit, const FName& TagName, float Val);
    
    UFUNCTION(BlueprintCallable)
    static void BGUSetTagFloat(AActor* Unit, const FGameplayTag& Tag, float Val);
    
    UFUNCTION(BlueprintCallable)
    static void BGUSetTagEnum(AActor* Unit, const FGameplayTag& Tag, uint8 Val);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void BGUGetTagVector(AActor* Unit, const FGameplayTag& Tag, bool& IsValid, FVector& Out);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UObject* BGUGetTagObject(AActor* Unit, const FGameplayTag& Tag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void BGUGetTagName(AActor* Unit, const FGameplayTag& Tag, bool& IsValid, FName& Out);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void BGUGetTagIntByName(AActor* Unit, const FName& TagName, bool& IsValid, int32& Out);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void BGUGetTagInt(AActor* Unit, const FGameplayTag& Tag, bool& IsValid, int32& Out);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void BGUGetTagFloatByName(AActor* Unit, const FName& TagName, bool& IsValid, float& Out);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void BGUGetTagFloat(AActor* Unit, const FGameplayTag& Tag, bool& IsValid, float& Out);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void BGUGetTagEnum(AActor* Unit, const FGameplayTag& Tag, bool& IsValid, uint8& Out);
    
};

