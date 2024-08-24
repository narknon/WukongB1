#pragma once
#include "CoreMinimal.h"
#include "ActorEditCompBase.h"
#include "BUS_ProcessGraphEditComp.generated.h"

class UCalliopeAsset;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_ProcessGraphEditComp : public UActorEditCompBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UCalliopeAsset*> ProcessAssets;
    
    UBUS_ProcessGraphEditComp(const FObjectInitializer& ObjectInitializer);

};

