#pragma once
#include "CoreMinimal.h"
#include "ECalliopeViewType.h"
#include "BED_CalliopeAssetBase.h"
#include "BED_StateAsset.generated.h"

class UBED_BehaviorAsset;

UCLASS(Blueprintable)
class UBED_StateAsset : public UBED_CalliopeAssetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBED_BehaviorAsset* PhaseBehaviorAsset;
    
    UBED_StateAsset();

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

