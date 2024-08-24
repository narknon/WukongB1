#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AnimNotify_GSBase.h"
#include "UStGSNotifyParam.h"
#include "BAN_GSBase.generated.h"

class AActor;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, NotPlaceable)
class UBAN_GSBase : public UAnimNotify_GSBase {
    GENERATED_BODY()
public:
    UBAN_GSBase();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GSValidateInputCS(AActor* Actor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<FSoftObjectPath> GetSoftReferences() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GSPreNotifyDebugCS(FUStGSNotifyParam NotifyParam) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GSPostNotifyDebugCS(FUStGSNotifyParam NotifyParam) const;
    
};

