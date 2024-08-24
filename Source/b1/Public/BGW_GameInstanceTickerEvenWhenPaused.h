#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BGW_GameInstanceTickerEvenWhenPaused.generated.h"

class UBGWGameInstance;

UCLASS(Blueprintable)
class B1_API ABGW_GameInstanceTickerEvenWhenPaused : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBGWGameInstance* Parent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 TickGroup;
    
    ABGW_GameInstanceTickerEvenWhenPaused(const FObjectInitializer& ObjectInitializer);

};

