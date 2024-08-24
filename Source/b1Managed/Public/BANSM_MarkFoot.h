#pragma once
#include "CoreMinimal.h"
#include "BANSM_Base.h"
#include "BANSM_MarkFoot.generated.h"

class UAnimSequenceBase;

UCLASS(Blueprintable)
class UBANSM_MarkFoot : public UBANSM_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> FootNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistTolerance;
    
    UBANSM_MarkFoot();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CheckState(UAnimSequenceBase* AnimBase, float CurTime);
    
};

