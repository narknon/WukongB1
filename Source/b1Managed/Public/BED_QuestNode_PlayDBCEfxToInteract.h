#pragma once
#include "CoreMinimal.h"
#include "GsSmartParam.h"
#include "BED_QuestNode.h"
#include "BED_QuestNode_PlayDBCEfxToInteract.generated.h"

class UBGWDataAsset_B1DBC;

UCLASS(Blueprintable)
class UBED_QuestNode_PlayDBCEfxToInteract : public UBED_QuestNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGsSmartParam Interactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UBGWDataAsset_B1DBC> B1DBC;
    
    UBED_QuestNode_PlayDBCEfxToInteract();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetNodeDescriptionInCS() const;
    
};

