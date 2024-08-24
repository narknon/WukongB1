#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BUE_BP_AI_FSMEventTriggerDelegate.h"
#include "BUE_BP_ClearCameraLockDelegate.h"
#include "BUE_BP_UnitDieDelegate.h"
#include "BUE_BounceCheckDelegate.h"
#include "BUE_GrantItemsDeferred_CSDelegate.h"
#include "BUS_EventCollection.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_EventCollection : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBUE_BounceCheck FBUE_BounceCheck;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBUE_BP_UnitDie FBUE_BP_UnitDie;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBUE_BP_ClearCameraLock FBUE_BP_ClearCameraLock;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBUE_BP_AI_FSMEventTrigger FBUE_BP_AI_FSMEventTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBUE_GrantItemsDeferred_CS FBUE_GrantItemsDeferred_CS;
    
    UBUS_EventCollection(const FObjectInitializer& ObjectInitializer);

};

