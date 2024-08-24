#pragma once
#include "CoreMinimal.h"
#include "BED_FSMNode_PS_TransactionBase.h"
#include "EPS_Transaction.h"
#include "BED_FSMNode_PS_TransactionAnyState.generated.h"

UCLASS(Blueprintable)
class UBED_FSMNode_PS_TransactionAnyState : public UBED_FSMNode_PS_TransactionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EPS_Transaction> AcceptEvents;
    
    UBED_FSMNode_PS_TransactionAnyState();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PostPropertyChanged(const FString& MemberName, const FString& PropertyName);
    
};

