#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "BUAnimDataAsset8Dir.generated.h"

class UAnimSequence;

UCLASS(Blueprintable)
class UBUAnimDataAsset8Dir : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* AnimSeqIdle;
    
    UBUAnimDataAsset8Dir();

};

