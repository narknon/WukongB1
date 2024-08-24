#pragma once
#include "CoreMinimal.h"
#include "BGWDataAsset.h"
#include "BGWDataAsset_GeneratePreloadDAConfig.generated.h"

class UWorld;

UCLASS(Blueprintable)
class UBGWDataAsset_GeneratePreloadDAConfig : public UBGWDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAutoIncludeItemLevels: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> RootLevelFolderPaths;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UWorld>> LevelsForPreload;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TxtOutputName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PreloadDAOutputName;
    
    UBGWDataAsset_GeneratePreloadDAConfig();

};

