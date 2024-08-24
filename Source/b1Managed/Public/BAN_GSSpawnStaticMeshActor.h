#pragma once
#include "CoreMinimal.h"
#include "UStGSNotifyParam.h"
#include "BAN_GSBase.h"
#include "BAN_GSSpawnStaticMeshActor.generated.h"

class UBGWDataAsset_StaticMeshActorSetting;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UBAN_GSSpawnStaticMeshActor : public UBAN_GSBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAttachToOwner: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBGWDataAsset_StaticMeshActorSetting* StaticMeshActorSetting;
    
    UBAN_GSSpawnStaticMeshActor();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GSNotifyCS(FUStGSNotifyParam NotifyParam) const;
    
};

