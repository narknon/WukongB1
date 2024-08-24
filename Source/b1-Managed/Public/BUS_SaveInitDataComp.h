#pragma once
#include "CoreMinimal.h"
#include "EBGUResetType.h"
#include "ActorEditCompBase.h"
#include "BUS_SaveInitDataComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_SaveInitDataComp : public UActorEditCompBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSaveInitData: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBGUResetType ActorResetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 PersistentDataDontResetOnNewGamePlus: 1;
    
    UBUS_SaveInitDataComp(const FObjectInitializer& ObjectInitializer);

};

