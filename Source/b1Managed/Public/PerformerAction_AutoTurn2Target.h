#pragma once
#include "CoreMinimal.h"
#include "GsSmartParam.h"
#include "UObject/NoExportTypes.h"
#include "InterpSpeed.h"
#include "PerformerActionBase.h"
#include "PerformerAction_AutoTurn2Target.generated.h"

class AActor;
class ABGUPerformerActorCS;
class UAnimMontage;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UPerformerAction_AutoTurn2Target : public UPerformerActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGsSmartParam Performer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* TurnLeftMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* TurnRightMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TurnThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInterpSpeed turnSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRotator PerformerOriginRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ABGUPerformerActorCS* PerformerActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* PlayerActor;
    
    UPerformerAction_AutoTurn2Target();

};

