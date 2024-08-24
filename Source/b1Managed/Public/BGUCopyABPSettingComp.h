#pragma once
#include "CoreMinimal.h"
#include "BaseActorComp.h"
#include "BGUCopyABPSettingComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBGUCopyABPSettingComp : public UBaseActorComp {
    GENERATED_BODY()
public:
    UBGUCopyABPSettingComp(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BeginPlayInCS();
    
};

