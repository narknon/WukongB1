#pragma once
#include "CoreMinimal.h"
#include "ActorEditCompBase.h"
#include "MFDirectionEffect.h"
#include "MagicFieldDirectionType.h"
#include "MagicFieldDirectionTypeDetail.h"
#include "MagicFieldDirectionUsage.h"
#include "BUS_MFDirectionComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_MFDirectionComp : public UActorEditCompBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    MagicFieldDirectionUsage DirectionUsage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    MagicFieldDirectionType DirectionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    MagicFieldDirectionTypeDetail DirectionTypeDetail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AnchorPointTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMFDirectionEffect> DirectionEffects;
    
    UBUS_MFDirectionComp(const FObjectInitializer& ObjectInitializer);

};

