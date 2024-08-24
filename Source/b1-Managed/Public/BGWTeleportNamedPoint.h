#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "BGUTeleportPoint.h"
#include "BGWTeleportNamedPoint.generated.h"

UCLASS(Blueprintable)
class ABGWTeleportNamedPoint : public ABGUTeleportPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TeleportID;
    
    ABGWTeleportNamedPoint(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReceiveEndPlay(EEndPlayReason::Type EndPlayReason);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReceiveBeginPlay();
    
};

