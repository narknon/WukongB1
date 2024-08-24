#pragma once
#include "CoreMinimal.h"
#include "CalliopeGuid.h"
#include "CalliopeNode.h"
#include "ECalliopeViewType.h"
#include "ActorGuidOption.h"
#include "SmartActorGuidObj.h"
#include "BED_CalliopeNodeBae.generated.h"

class AActor;

UCLASS(Abstract, Blueprintable)
class UBED_CalliopeNodeBae : public UCalliopeNode, public ISmartActorGuidObj {
    GENERATED_BODY()
public:
    UBED_CalliopeNodeBae();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetActorGuid(AActor* InActor, FString& OutActorGuid) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanManageStates() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetActorGuidOptions(const FString& PropertyName, TArray<FActorGuidOption>& OutOptions) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FCalliopeGuid GetGuid() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsSupportViewType(const ECalliopeViewType& InViewType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsBranchGraphNode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetBranchGraphToEditInCS(FString& OutBranchGraphIdentifier);
    

    // Fix for true pure virtual functions not being implemented
};

