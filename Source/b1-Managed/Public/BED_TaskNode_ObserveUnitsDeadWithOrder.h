#pragma once
#include "CoreMinimal.h"
#include "GsSmartParamArray.h"
#include "BED_TaskNode.h"
#include "BED_TaskNode_ObserveUnitsDeadWithOrder.generated.h"

UCLASS(Blueprintable)
class UBED_TaskNode_ObserveUnitsDeadWithOrder : public UBED_TaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGsSmartParamArray UnitList;
    
    UBED_TaskNode_ObserveUnitsDeadWithOrder();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRefreshAssetInCS() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PostPropertyChanged(const FString& MemberName, const FString& PropertyName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetNodeDescriptionInCS() const;
    
};

