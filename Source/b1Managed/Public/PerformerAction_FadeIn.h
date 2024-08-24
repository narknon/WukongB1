#pragma once
#include "CoreMinimal.h"
#include "GsSmartParam.h"
#include "PerformerActionBase.h"
#include "PerformerAction_FadeIn.generated.h"

class ABGUPerformerActorCS;
class UCurveFloat;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UPerformerAction_FadeIn : public UPerformerActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGsSmartParam Performer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MatParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* OpacityCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ABGUPerformerActorCS* PerformerActor;
    
    UPerformerAction_FadeIn();

};

