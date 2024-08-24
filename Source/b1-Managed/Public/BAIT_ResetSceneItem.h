#pragma once
#include "CoreMinimal.h"
#include "BAIT_Base.h"
#include "BAIT_ResetSceneItem.generated.h"

UCLASS(Blueprintable)
class UBAIT_ResetSceneItem : public UBAIT_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> SceneActorTags;
    
    UBAIT_ResetSceneItem();

};

