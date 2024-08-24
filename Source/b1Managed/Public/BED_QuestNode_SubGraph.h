#pragma once
#include "CoreMinimal.h"
#include "BED_QuestNode.h"
#include "BED_QuestNode_SubGraph.generated.h"

class UBED_QuestAsset;
class UObject;

UCLASS(Blueprintable)
class UBED_QuestNode_SubGraph : public UBED_QuestNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UBED_QuestAsset> Asset;
    
    UBED_QuestNode_SubGraph();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UObject* GetAssetToEditInCS();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PrePropertyChanged(const FString& PropertyName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PostPropertyChanged(const FString& MemberName, const FString& PropertyName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<FName> GetContextInputsInCS();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<FName> GetContextOutputsInCS();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetNodeDescriptionInCS() const;
    
};

