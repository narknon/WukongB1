#pragma once
#include "CoreMinimal.h"
#include "GsSmartParam.h"
#include "PerformerActionBase.h"
#include "PerformerAction_PlayMontage.generated.h"

class UAnimMontage;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UPerformerAction_PlayMontage : public UPerformerActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGsSmartParam Performer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* Montage;
    
    UPerformerAction_PlayMontage();

};

