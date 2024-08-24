#pragma once
#include "CoreMinimal.h"
#include "BGWDataAsset.h"
#include "TortoiseLevelStreamingBoxConfig.h"
#include "TortoiseManagedStateLevelConfig.h"
#include "BGWDataAsset_TortoiseLevelStreamingConfig.generated.h"

UCLASS(Blueprintable)
class UBGWDataAsset_TortoiseLevelStreamingConfig : public UBGWDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTortoiseManagedStateLevelConfig DefaultManagedStateLevelConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTortoiseLevelStreamingBoxConfig> StreamingLevelBoxTriggerConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LevelGetterKeywordInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> LevelGetterOutput;
    
    UBGWDataAsset_TortoiseLevelStreamingConfig();

    UFUNCTION(BlueprintCallable)
    void SubLevelNamesGetter();
    
};

