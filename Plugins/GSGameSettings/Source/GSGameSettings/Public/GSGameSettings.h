#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GSGameSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class GSGAMESETTINGS_API UGSGameSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> AvailableMapList;
    
    UGSGameSettings();

    UFUNCTION(BlueprintCallable)
    void RefreshAvailableMapList();
    
};

