#pragma once
#include "CoreMinimal.h"
#include "BGWSaveCheckDataAsset.h"
#include "ManagedStreamingLevelStateBoxConfig.h"
#include "ManagedStreamingLevelStateConfig.h"
#include "BGWDataAsset_StreamingLevelStateConfig.generated.h"

UCLASS(Blueprintable)
class UBGWDataAsset_StreamingLevelStateConfig : public UBGWSaveCheckDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FManagedStreamingLevelStateConfig DefaultManagedStateLevelConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FManagedStreamingLevelStateBoxConfig> StreamingLevelBoxTriggerConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LevelGetterKeywordInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> LevelGetterOutput;
    
    UBGWDataAsset_StreamingLevelStateConfig();

    UFUNCTION(BlueprintCallable)
    void SubLevelNamesGetter();
    
};

