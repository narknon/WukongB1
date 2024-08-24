#pragma once
#include "CoreMinimal.h"
#include "BGG_GameMode.h"
#include "BGG_GameModeStartUp.generated.h"

UCLASS(Blueprintable, NonTransient)
class ABGG_GameModeStartUp : public ABGG_GameMode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GameDefaultMapID;
    
    ABGG_GameModeStartUp(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BeginPlayCS();
    
};

