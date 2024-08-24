#pragma once
#include "CoreMinimal.h"
#include "BED_TaskNode.h"
#include "BED_TaskNode_RunProcessGraph.generated.h"

class UBED_ProcessAsset;
class UObject;

UCLASS(Blueprintable, NotPlaceable)
class UBED_TaskNode_RunProcessGraph : public UBED_TaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UBED_ProcessAsset> Asset;
    
    UBED_TaskNode_RunProcessGraph();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UObject* GetAssetToEditInCS();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PrePropertyChanged(const FString& PropertyName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PostPropertyChanged(const FString& MemberName, const FString& PropertyName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetNodeDescriptionInCS() const;
    
};

