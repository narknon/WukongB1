#pragma once
#include "CoreMinimal.h"
#include "ActorEditCompBase.h"
#include "BUS_TortoiseLevelStreamingConfigComp.generated.h"

class UBGWDataAsset_TortoiseLevelStreamingConfig;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_TortoiseLevelStreamingConfigComp : public UActorEditCompBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBGWDataAsset_TortoiseLevelStreamingConfig* BeginConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBGWDataAsset_TortoiseLevelStreamingConfig* LoopConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBGWDataAsset_TortoiseLevelStreamingConfig* EndConfig;
    
    UBUS_TortoiseLevelStreamingConfigComp(const FObjectInitializer& ObjectInitializer);

};

