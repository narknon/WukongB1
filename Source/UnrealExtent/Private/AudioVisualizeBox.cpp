#include "AudioVisualizeBox.h"

UAudioVisualizeBox::UAudioVisualizeBox() : UUserWidget(FObjectInitializer::Get()) {
    this->LayoutWidget = NULL;
    this->FreqNum = 0;
    this->LoudnessNum = 0;
    this->FreqThickness = 0.00f;
    this->FreqHeightFinalScale = 0.00f;
    this->FreqHeightScale = 10.00f;
    this->FreqPaintPower = 5.00f;
    this->LoudnessThickness = 0.00f;
    this->LoudnessRandomScaleFactor = 0.00f;
    this->PaintFreq = false;
    this->PaintLoudness = false;
    this->FreqDisturbInterval = 0.00f;
}

void UAudioVisualizeBox::StopPainting() {
}

void UAudioVisualizeBox::StartPainting() {
}

void UAudioVisualizeBox::SetLoudnessInfo(const FVector2D InLoudness) {
}

void UAudioVisualizeBox::SetFreqNum(const int32 InFreqNum) {
}

void UAudioVisualizeBox::SetFreqInfo(const TArray<float>& InConstantInfo) {
}

void UAudioVisualizeBox::SetAudioInfo(const FVector2D InLoudness, const TArray<float>& InConstantInfo) {
}

void UAudioVisualizeBox::ResetVisualizing() {
}

void UAudioVisualizeBox::PausePainting() {
}


