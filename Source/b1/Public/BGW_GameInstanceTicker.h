#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BGW_GameInstanceTicker.generated.h"

class UBGWGameInstance;

UCLASS(Blueprintable)
class B1_API ABGW_GameInstanceTicker : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBGWGameInstance* Parent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 TickGroup;
    
    ABGW_GameInstanceTicker(const FObjectInitializer& ObjectInitializer);

};

