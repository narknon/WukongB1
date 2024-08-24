#pragma once
#include "CoreMinimal.h"
#include "BANSM_Base.h"
#include "BANSM_AttackState.generated.h"

class UAnimSequenceBase;

UCLASS(Blueprintable)
class UBANSM_AttackState : public UBANSM_Base {
    GENERATED_BODY()
public:
    UBANSM_AttackState();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CheckState(UAnimSequenceBase* AnimBase, float CurTime);
    
};

