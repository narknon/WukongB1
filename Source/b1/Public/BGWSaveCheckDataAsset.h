#pragma once
#include "CoreMinimal.h"
#include "BGWDataAsset.h"
#include "BGWSaveCheckDataAsset.generated.h"

UCLASS(Blueprintable)
class B1_API UBGWSaveCheckDataAsset : public UBGWDataAsset {
    GENERATED_BODY()
public:
    UBGWSaveCheckDataAsset();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SaveCheckCS(FString& OutTitle, FString& OutMessage);
    
};

