#pragma once
#include "CoreMinimal.h"
#include "BED_FSMNode_PS_TransactionBase.h"
#include "EPS_Transaction.h"
#include "TransactionTaskType.h"
#include "BED_FSMNode_PS_Transaction_TransactionTask.generated.h"

UCLASS(Blueprintable)
class UBED_FSMNode_PS_Transaction_TransactionTask : public UBED_FSMNode_PS_TransactionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TransactionTaskType TransactionTaskType;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EPS_Transaction> AcceptEvents;
    
    UBED_FSMNode_PS_Transaction_TransactionTask();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PostPropertyChanged(const FString& MemberName, const FString& PropertyName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetNodeDescriptionInCS() const;
    
};

