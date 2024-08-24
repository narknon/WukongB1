#include "PCGActorSelectorSettings.h"

FPCGActorSelectorSettings::FPCGActorSelectorSettings() {
    this->ActorFilter = EPCGActorFilter::Self;
    this->bMustOverlapSelf = false;
    this->bIncludeChildren = false;
    this->bDisableFilter = false;
    this->ActorSelection = EPCGActorSelection::ByTag;
    this->ActorSelectionClass = NULL;
    this->bSelectMultiple = false;
    this->bIgnoreSelfAndChildren = false;
    this->bShowActorFilter = false;
    this->bShowIncludeChildren = false;
    this->bShowActorSelection = false;
    this->bShowActorSelectionClass = false;
    this->bShowSelectMultiple = false;
}

