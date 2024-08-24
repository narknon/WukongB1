#pragma once
#include "CoreMinimal.h"
#include "AnimToTextureAnimState.h"
#include "AnimToTextureInstancePlaybackData.generated.h"

USTRUCT(BlueprintType)
struct FAnimToTextureInstancePlaybackData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimToTextureAnimState CurrentState;
    
    ANIMTOTEXTURE_API FAnimToTextureInstancePlaybackData();
};

