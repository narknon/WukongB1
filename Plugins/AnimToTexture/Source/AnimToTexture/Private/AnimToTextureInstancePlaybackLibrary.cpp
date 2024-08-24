#include "AnimToTextureInstancePlaybackLibrary.h"

UAnimToTextureInstancePlaybackLibrary::UAnimToTextureInstancePlaybackLibrary() {
}

bool UAnimToTextureInstancePlaybackLibrary::UpdateInstanceData(FAnimToTextureInstanceData& InstanceData, int32 InstanceIndex, const FAnimToTextureInstancePlaybackData& PlaybackData, const FTransform& Transform) {
    return false;
}

void UAnimToTextureInstancePlaybackLibrary::SetupInstancedMeshComponent(UInstancedStaticMeshComponent* InstancedMeshComponent, FAnimToTextureInstanceData& InstanceData, int32 NumInstances) {
}

bool UAnimToTextureInstancePlaybackLibrary::GetInstanceTransform(const FAnimToTextureInstanceData& InstanceData, int32 InstanceIndex, FTransform& InstanceTransform) {
    return false;
}

bool UAnimToTextureInstancePlaybackLibrary::GetInstancePlaybackData(const FAnimToTextureInstanceData& InstanceData, int32 InstanceIndex, FAnimToTextureInstancePlaybackData& InstancePlaybackData) {
    return false;
}

void UAnimToTextureInstancePlaybackLibrary::BatchUpdateInstancedMeshComponent(UInstancedStaticMeshComponent* InstancedMeshComponent, FAnimToTextureInstanceData& InstanceData) {
}

bool UAnimToTextureInstancePlaybackLibrary::AnimStateFromDataAsset(const UAnimToTextureDataAsset* DataAsset, int32 StateIndex, FAnimToTextureAnimState& AnimState) {
    return false;
}

void UAnimToTextureInstancePlaybackLibrary::AllocateInstanceData(FAnimToTextureInstanceData& InstanceData, int32 Count) {
}


