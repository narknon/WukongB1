#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CalliopeParameterMappingGroup.h"
#include "CalliopeParameterMappingDataAsset.generated.h"

class UCalliopeAsset;

UCLASS(Blueprintable)
class CALLIOPE_API UCalliopeParameterMappingDataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UCalliopeAsset> MappedAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRunTemplateInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCalliopeParameterMappingGroup> Groups;
    
    UCalliopeParameterMappingDataAsset();

    UFUNCTION(BlueprintCallable)
    void RefreshParameters();
    
    UFUNCTION(BlueprintCallable)
    void RefreshGroupsParameterValue();
    
};

