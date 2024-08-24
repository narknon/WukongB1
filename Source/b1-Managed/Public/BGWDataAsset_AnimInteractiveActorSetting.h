#pragma once
#include "CoreMinimal.h"
#include "BGWDataAsset.h"
#include "BGWDataAsset_AnimInteractiveActorSetting.generated.h"

class UAnimSequence;

UCLASS(Blueprintable)
class UBGWDataAsset_AnimInteractiveActorSetting : public UBGWDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* AnimIdle;
    
    UBGWDataAsset_AnimInteractiveActorSetting();

};

