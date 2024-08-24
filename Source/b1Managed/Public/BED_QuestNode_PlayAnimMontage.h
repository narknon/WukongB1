#pragma once
#include "CoreMinimal.h"
#include "GsSmartParam.h"
#include "BED_QuestNode.h"
#include "BED_QuestNode_PlayAnimMontage.generated.h"

class ABGUCharacterCS;
class UAnimMontage;

UCLASS(Blueprintable)
class UBED_QuestNode_PlayAnimMontage : public UBED_QuestNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGsSmartParam Unit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimMontage> AM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ABGUCharacterCS> Caster;
    
    UBED_QuestNode_PlayAnimMontage();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetNodeDescriptionInCS() const;
    
};

