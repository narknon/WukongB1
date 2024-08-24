#pragma once
#include "CoreMinimal.h"
#include "ECalliopeViewType.h"
#include "BED_CalliopeAssetBase.h"
#include "BED_FSMAsset.generated.h"

UCLASS(Blueprintable)
class UBED_FSMAsset : public UBED_CalliopeAssetBase {
    GENERATED_BODY()
public:
    UBED_FSMAsset();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ECalliopeViewType GetViewType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UClass* GetStartNodeClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UClass* GetRerouteNodeClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetExtraDefaultInputNodes(TArray<UClass*>& OutClasses) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetExtraDefaultOutputNodes(TArray<UClass*>& OutClasses) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UClass* GetStartNodeClassInBranchGraph() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UClass* GetRerouteNodeClassInBranchGraph() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetExtraDefaultInputNodesInBranchGraph(TArray<UClass*>& OutClasses) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetExtraDefaultOutputNodesInBranchGraph(TArray<UClass*>& OutClasses) const;
    
};

