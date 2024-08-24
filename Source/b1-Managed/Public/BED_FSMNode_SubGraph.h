#pragma once
#include "CoreMinimal.h"
#include "BED_FSMNode.h"
#include "BED_FSMNode_SubGraph.generated.h"

class UBED_FSMAsset;
class UObject;

UCLASS(Abstract, Blueprintable)
class UBED_FSMNode_SubGraph : public UBED_FSMNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UBED_FSMAsset> SubGraphAsset;
    
    UBED_FSMNode_SubGraph();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UObject* GetAssetToEditInCS();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PrePropertyChanged(const FString& PropertyName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PostPropertyChanged(const FString& MemberName, const FString& PropertyName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetNodeDescriptionInCS() const;
    
};

