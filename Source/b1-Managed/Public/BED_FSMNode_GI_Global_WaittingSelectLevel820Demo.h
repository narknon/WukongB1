#pragma once
#include "CoreMinimal.h"
#include "BED_FSMNode_GI_GlobalBase.h"
#include "EGI_Global.h"
#include "BED_FSMNode_GI_Global_WaittingSelectLevel820Demo.generated.h"

UCLASS(Blueprintable)
class UBED_FSMNode_GI_Global_WaittingSelectLevel820Demo : public UBED_FSMNode_GI_GlobalBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EGI_Global> AcceptEvents;
    
    UBED_FSMNode_GI_Global_WaittingSelectLevel820Demo();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PostPropertyChanged(const FString& MemberName, const FString& PropertyName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetNodeDescriptionInCS() const;
    
};
