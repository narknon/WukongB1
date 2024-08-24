#pragma once
#include "CoreMinimal.h"
#include "BED_FSMNode_GI_GlobalBase.h"
#include "EGI_Global.h"
#include "BED_FSMNode_GI_GlobalAnyState.generated.h"

UCLASS(Blueprintable)
class UBED_FSMNode_GI_GlobalAnyState : public UBED_FSMNode_GI_GlobalBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EGI_Global> AcceptEvents;
    
    UBED_FSMNode_GI_GlobalAnyState();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PostPropertyChanged(const FString& MemberName, const FString& PropertyName);
    
};

