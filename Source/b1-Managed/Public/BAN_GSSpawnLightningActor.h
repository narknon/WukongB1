#pragma once
#include "CoreMinimal.h"
#include "UStGSNotifyParam.h"
#include "BAN_GSBase.h"
#include "Templates/SubclassOf.h"
#include "BAN_GSSpawnLightningActor.generated.h"

class ABGULightningFXActorBase;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UBAN_GSSpawnLightningActor : public UBAN_GSBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABGULightningFXActorBase> LightningFXActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 NeedAttach: 1;
    
    UBAN_GSSpawnLightningActor();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GSNotifyCS(FUStGSNotifyParam NotifyParam) const;
    
};

