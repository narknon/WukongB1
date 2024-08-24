#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AnimToTextureAnimState.h"
#include "AnimToTextureInstanceData.h"
#include "AnimToTextureInstancePlaybackData.h"
#include "AnimToTextureInstancePlaybackLibrary.generated.h"

class UAnimToTextureDataAsset;
class UInstancedStaticMeshComponent;

UCLASS(Blueprintable)
class ANIMTOTEXTURE_API UAnimToTextureInstancePlaybackLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAnimToTextureInstancePlaybackLibrary();

    UFUNCTION(BlueprintCallable)
    static bool UpdateInstanceData(UPARAM(Ref) FAnimToTextureInstanceData& InstanceData, int32 InstanceIndex, const FAnimToTextureInstancePlaybackData& PlaybackData, const FTransform& Transform);
    
    UFUNCTION(BlueprintCallable)
    static void SetupInstancedMeshComponent(UInstancedStaticMeshComponent* InstancedMeshComponent, UPARAM(Ref) FAnimToTextureInstanceData& InstanceData, int32 NumInstances);
    
    UFUNCTION(BlueprintCallable)
    static bool GetInstanceTransform(const FAnimToTextureInstanceData& InstanceData, int32 InstanceIndex, FTransform& InstanceTransform);
    
    UFUNCTION(BlueprintCallable)
    static bool GetInstancePlaybackData(const FAnimToTextureInstanceData& InstanceData, int32 InstanceIndex, FAnimToTextureInstancePlaybackData& InstancePlaybackData);
    
    UFUNCTION(BlueprintCallable)
    static void BatchUpdateInstancedMeshComponent(UInstancedStaticMeshComponent* InstancedMeshComponent, UPARAM(Ref) FAnimToTextureInstanceData& InstanceData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool AnimStateFromDataAsset(const UAnimToTextureDataAsset* DataAsset, int32 StateIndex, FAnimToTextureAnimState& AnimState);
    
    UFUNCTION(BlueprintCallable)
    static void AllocateInstanceData(UPARAM(Ref) FAnimToTextureInstanceData& InstanceData, int32 Count);
    
};

