#include "BED_StateNode_Junction.h"
#include "ECalliopeNodeStyle.h"

UBED_StateNode_Junction::UBED_StateNode_Junction() {
    this->bSupportsContextPins = false;
    this->Category = TEXT("Route");
    this->NodeStyle = ECalliopeNodeStyle::Latent;
    this->InputPins.AddDefaulted(1);
}

FString UBED_StateNode_Junction::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


