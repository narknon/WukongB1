#include "AnimToTextureDataAsset.h"

UAnimToTextureDataAsset::UAnimToTextureDataAsset() {
    this->SkeletalLODIndex = 0;
    this->StaticLODIndex = 0;
    this->UVChannel = 1;
    this->MaxHeight = 4096;
    this->MaxWidth = 4096;
    this->bEnforcePowerOfTwo = false;
    this->Precision = EAnimToTexturePrecision::EightBits;
    this->Mode = EAnimToTextureMode::Vertex;
    this->SampleRate = 30.00f;
    this->NumFrames = 0;
    this->VertexRowsPerFrame = 1;
    this->BoneWeightRowsPerFrame = 1;
    this->BoneRowsPerFrame = 1;
}

void UAnimToTextureDataAsset::ResetInfo() {
}

int32 UAnimToTextureDataAsset::GetIndexFromAnimSequence(const UAnimSequence* Sequence) {
    return 0;
}

UStaticMesh* UAnimToTextureDataAsset::BP_GetStaticMesh() {
    return NULL;
}

USkeletalMesh* UAnimToTextureDataAsset::BP_GetSkeletalMesh() {
    return NULL;
}

UTexture2D* UAnimToTextureDataAsset::BP_GetBoneWeightTexture() {
    return NULL;
}

UTexture2D* UAnimToTextureDataAsset::BP_GetBoneRotationTexture() {
    return NULL;
}

UTexture2D* UAnimToTextureDataAsset::BP_GetBonePositionTexture() {
    return NULL;
}


