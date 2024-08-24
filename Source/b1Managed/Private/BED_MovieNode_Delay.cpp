#include "BED_MovieNode_Delay.h"
#include "ECalliopeNodeStyle.h"

UBED_MovieNode_Delay::UBED_MovieNode_Delay() {
    this->Category = TEXT("Route");
    this->NodeStyle = ECalliopeNodeStyle::Latent;
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
    this->DelayTime = 0.50f;
    this->TimeDilationCurve = NULL;
}

FString UBED_MovieNode_Delay::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


