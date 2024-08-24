#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "CalliopeGuid.h"
#include "ECalliopeViewType.h"
#include "CalliopeInteractor.generated.h"

class UCalliopeInteractor;
class UCalliopeNode;

UCLASS(Blueprintable)
class CALLIOPE_API UCalliopeInteractor : public UObject {
    GENERATED_BODY()
public:
    UCalliopeInteractor();

    UFUNCTION(BlueprintCallable)
    static void UnregisterInstance();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SetCustomOutputNodeEventName(UCalliopeNode* Node, const FName& InEventName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SetCustomInputNodeEventName(UCalliopeNode* Node, const FName& InEventName);
    
    UFUNCTION(BlueprintCallable)
    static void RegisterInstance(UCalliopeInteractor* Instance);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetSubGraphNodeClasses(TArray<UClass*>& OutClasses) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetStartNodeClasses(TArray<UClass*>& OutClasses) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetRerouteNodeClasses(TArray<UClass*>& OutClasses) const;
    
    UFUNCTION(BlueprintCallable)
    static UCalliopeInteractor* GetInstanceChecked();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetFinishNodeClasses(TArray<UClass*>& OutClasses) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetExecutionSequenceNodeClasses(TArray<UClass*>& OutClasses) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetExecutionMultiGateNodeClasses(TArray<UClass*>& OutClasses) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetCustomOutputNodeEventName(UCalliopeNode* Node, FName& OutEventName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetCustomOutputNodeClasses(TArray<UClass*>& OutClasses) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetCustomInputNodeEventName(UCalliopeNode* Node, FName& OutEventName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetCustomInputNodeClasses(TArray<UClass*>& OutClasses) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetComponentObserverNodeClasses(TArray<UClass*>& OutClasses) const;
    
    UFUNCTION(BlueprintCallable)
    UClass* GetAssetClass(ECalliopeViewType InViewType);
    
    UFUNCTION(BlueprintCallable)
    static FGuid ConvertCalliopeGuidToGuid(const FCalliopeGuid& InCalliopeGuid);
    
};

