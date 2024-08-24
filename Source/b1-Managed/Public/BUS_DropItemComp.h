#pragma once
#include "CoreMinimal.h"
#include "ActorEditCompBase.h"
#include "BUS_DropItemComp.generated.h"

class UUBGWDropItemTemplete;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_DropItemComp : public UActorEditCompBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DropItemResID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 UseSoulBottleCondition: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NewFXSpawnCompTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUBGWDropItemTemplete* NoSoulBottleDropTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUBGWDropItemTemplete* HaveSoulBottleDropTemplate;
    
    UBUS_DropItemComp(const FObjectInitializer& ObjectInitializer);

};

