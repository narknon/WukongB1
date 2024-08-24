#pragma once
#include "CoreMinimal.h"
#include "BGWDataAsset.h"
#include "PatrolGroupSetting.h"
#include "BGWDataAsset_PatrolGroupSettings.generated.h"

UCLASS(Blueprintable)
class UBGWDataAsset_PatrolGroupSettings : public UBGWDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GroupIndexToUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPatrolGroupSetting> PatrolGroups;
    
    UBGWDataAsset_PatrolGroupSettings();

    UFUNCTION(BlueprintCallable)
    void ClearRepeatedSettings();
    
    UFUNCTION(BlueprintCallable)
    void ApplyAllPatrolGroupSettings();
    
    UFUNCTION(BlueprintCallable)
    void ClearAllPatrolGroupSettings();
    
    UFUNCTION(BlueprintCallable)
    void ApplySinglePatrolGroupSetting();
    
    UFUNCTION(BlueprintCallable)
    void ClearSinglePatrolGroupSetting();
    
};

