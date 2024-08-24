#pragma once
#include "CoreMinimal.h"
#include "BANSM_Base.h"
#include "BANSM_ComboWindow.generated.h"

class UAnimSequenceBase;

UCLASS(Blueprintable)
class UBANSM_ComboWindow : public UBANSM_Base {
    GENERATED_BODY()
public:
    UBANSM_ComboWindow();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CheckState(UAnimSequenceBase* AnimBase, float CurTime);
    
};

