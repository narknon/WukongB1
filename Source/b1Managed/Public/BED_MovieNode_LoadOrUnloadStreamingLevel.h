#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "BED_MovieNode.h"
#include "BED_MovieNode_LoadOrUnloadStreamingLevel.generated.h"

UCLASS(Blueprintable)
class UBED_MovieNode_LoadOrUnloadStreamingLevel : public UBED_MovieNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StreamingLevelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bLoadOrUnload: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag FinishLoadEventTag;
    
    UBED_MovieNode_LoadOrUnloadStreamingLevel();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetNodeDescriptionInCS() const;
    
};

