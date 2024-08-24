#pragma once
#include "CoreMinimal.h"
#include "GameInstanceSystemBaseUObj.h"
#include "BGWDreamTeleportPointsComp.generated.h"

UCLASS(Blueprintable)
class UBGWDreamTeleportPointsComp : public UGameInstanceSystemBaseUObj {
    GENERATED_BODY()
public:
    UBGWDreamTeleportPointsComp();

    UFUNCTION(BlueprintCallable)
    void OnAfterTeleportMontageEnded();
    
    UFUNCTION(BlueprintCallable)
    void OnBeforeTeleportMontageEnded();
    
};

