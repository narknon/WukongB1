#include "PCGPropertyToParamDataSettings.h"

UPCGPropertyToParamDataSettings::UPCGPropertyToParamDataSettings() {
    this->bSelectComponent = false;
    this->ComponentClass = NULL;
    this->bExtractObjectAndStruct = false;
    this->bAlwaysRequeryActors = true;
    this->ActorSelection = EPCGActorSelection::ByTag;
    this->ActorSelectionClass = NULL;
    this->ActorFilter = EPCGActorFilter::Self;
    this->bIncludeChildren = false;
}


