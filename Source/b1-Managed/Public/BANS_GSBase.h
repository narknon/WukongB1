#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AnimNotifyState_GSBase.h"
#include "UStGSNotifyParam.h"
#include "BANS_GSBase.generated.h"

class AActor;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, NotPlaceable)
class UBANS_GSBase : public UAnimNotifyState_GSBase {
    GENERATED_BODY()
public:
    UBANS_GSBase();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GSValidateInputCS(AActor* Actor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<FSoftObjectPath> GetSoftReferences() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GSNotifyDebugPreEndCS(FUStGSNotifyParam NotifyParam) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GSNotifyDebugPostEndCS(FUStGSNotifyParam NotifyParam) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GSNotifyDebugPreTickCS(FUStGSNotifyParam NotifyParam) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GSNotifyDebugPreBeginCS(FUStGSNotifyParam NotifyParam) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GSNotifyDebugPostTickCS(FUStGSNotifyParam NotifyParam) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GSNotifyDebugPostBeginCS(FUStGSNotifyParam NotifyParam) const;
    
};

