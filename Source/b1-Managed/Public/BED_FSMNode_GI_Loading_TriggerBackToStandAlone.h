#pragma once
#include "CoreMinimal.h"
#include "BED_FSMNode_GI_LoadingBase.h"
#include "EGI_Loading.h"
#include "BED_FSMNode_GI_Loading_TriggerBackToStandAlone.generated.h"

UCLASS(Blueprintable)
class UBED_FSMNode_GI_Loading_TriggerBackToStandAlone : public UBED_FSMNode_GI_LoadingBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EGI_Loading> AcceptEvents;
    
    UBED_FSMNode_GI_Loading_TriggerBackToStandAlone();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PostPropertyChanged(const FString& MemberName, const FString& PropertyName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetNodeDescriptionInCS() const;
    
};

