#pragma once
#include "CoreMinimal.h"
#include "BANSM_MarkFoot.h"
#include "BANSM_AttackRotation.generated.h"

class UAnimSequenceBase;

UCLASS(Blueprintable)
class UBANSM_AttackRotation : public UBANSM_MarkFoot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinFootOnGroundCanRotate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxFootOnGroundCanRotate;
    
    UBANSM_AttackRotation();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CheckState(UAnimSequenceBase* AnimBase, float CurTime);
    
};

