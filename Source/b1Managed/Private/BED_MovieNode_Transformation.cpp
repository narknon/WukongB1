#include "BED_MovieNode_Transformation.h"

UBED_MovieNode_Transformation::UBED_MovieNode_Transformation() {
    this->Category = TEXT("Player");
    this->InputPins.AddDefaulted(1);
    this->OutputPins.AddDefaulted(1);
    this->ResID = 0;
}

FString UBED_MovieNode_Transformation::GetNodeDescriptionInCS_Implementation() const {
    return TEXT("");
}


