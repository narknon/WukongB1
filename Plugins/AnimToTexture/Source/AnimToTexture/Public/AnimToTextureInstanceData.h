#pragma once
#include "CoreMinimal.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "AnimToTextureInstancePlaybackData.h"
#include "AnimToTextureInstanceData.generated.h"

USTRUCT(BlueprintType)
struct FAnimToTextureInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAnimToTextureInstancePlaybackData> PlaybackData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInstancedStaticMeshInstanceData> StaticMeshInstanceData;
    
    ANIMTOTEXTURE_API FAnimToTextureInstanceData();
};

