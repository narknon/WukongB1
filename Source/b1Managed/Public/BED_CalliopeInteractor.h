#pragma once
#include "CoreMinimal.h"
#include "CalliopeInteractor.h"
#include "BED_CalliopeInteractor.generated.h"

class UCalliopeNode;

UCLASS(Blueprintable)
class UBED_CalliopeInteractor : public UCalliopeInteractor {
    GENERATED_BODY()
public:
    UBED_CalliopeInteractor();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetStartNodeClasses(TArray<UClass*>& OutClasses) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetFinishNodeClasses(TArray<UClass*>& OutClasses) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetRerouteNodeClasses(TArray<UClass*>& OutClasses) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetSubGraphNodeClasses(TArray<UClass*>& OutClasses) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetCustomInputNodeClasses(TArray<UClass*>& OutClasses) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetCustomOutputNodeClasses(TArray<UClass*>& OutClasses) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SetCustomInputNodeEventName(UCalliopeNode* Node, const FName& InEventName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetCustomInputNodeEventName(UCalliopeNode* Node, FName& OutEventName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SetCustomOutputNodeEventName(UCalliopeNode* Node, const FName& InEventName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetCustomOutputNodeEventName(UCalliopeNode* Node, FName& OutEventName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetComponentObserverNodeClasses(TArray<UClass*>& OutClasses) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetExecutionSequenceNodeClasses(TArray<UClass*>& OutClasses) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetExecutionMultiGateNodeClasses(TArray<UClass*>& OutClasses) const;
    
};

