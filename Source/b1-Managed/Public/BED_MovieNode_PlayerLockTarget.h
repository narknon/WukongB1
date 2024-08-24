#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "BED_MovieNode.h"
#include "BED_MovieNode_PlayerLockTarget.generated.h"

UCLASS(Blueprintable)
class UBED_MovieNode_PlayerLockTarget : public UBED_MovieNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUnlock: 1;
    
    UBED_MovieNode_PlayerLockTarget();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetNodeDescriptionInCS() const;
    
};

