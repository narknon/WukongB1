#include "AudioVisualizeUtil.h"

AAudioVisualizeUtil::AAudioVisualizeUtil(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Audio = NULL;
    this->LoudnessAnalyzer = NULL;
    this->ConstantAnalyzer = NULL;
}

void AAudioVisualizeUtil::OnAudioPlaybackPercentCallback(const USoundWave* SoundWave, const float Percent) {
}


