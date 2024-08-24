#pragma once
#include "CoreMinimal.h"
#include "BED_GuideNode_Base.h"
#include "CompositeTransitionCondition_Guide.h"
#include "BED_GuideNode_Listener.generated.h"

UCLASS(Blueprintable)
class UBED_GuideNode_Listener : public UBED_GuideNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCompositeTransitionCondition_Guide> TransitionConditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FString> RelatedGuideGroupList;
    
    UBED_GuideNode_Listener();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<FName> GetContextOutputsInCS();
    
};

