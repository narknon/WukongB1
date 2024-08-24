#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "BUAnimSettingsLocomotionEx.h"
#include "BUAnimLocomotionEx.generated.h"

UINTERFACE(Blueprintable)
class UBUAnimLocomotionEx : public UInterface {
    GENERATED_BODY()
};

class IBUAnimLocomotionEx : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetLocoExSettings(const FBUAnimSettingsLocomotionEx& Settings);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetLocoExEnable(bool bEnable);
    
};

