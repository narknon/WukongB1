#pragma once
#include "CoreMinimal.h"
#include "BED_MovieNode_PerformerAction.h"
#include "BED_MovieNode_PerformerHiddenInGame.generated.h"

UCLASS(Blueprintable)
class UBED_MovieNode_PerformerHiddenInGame : public UBED_MovieNode_PerformerAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHiddenInGame: 1;
    
    UBED_MovieNode_PerformerHiddenInGame();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetNodeDescriptionInCS() const;
    
};

