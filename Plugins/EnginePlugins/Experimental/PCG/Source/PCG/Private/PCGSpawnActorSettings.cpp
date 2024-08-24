#include "PCGSpawnActorSettings.h"

UPCGSpawnActorSettings::UPCGSpawnActorSettings() {
    this->TemplateActorClass = NULL;
    this->Option = EPCGSpawnActorOption::CollapseActors;
    this->bForceDisableActorParsing = true;
    this->GenerationTrigger = EPCGSpawnActorGenerationTrigger::Default;
    this->bInheritActorTags = false;
    this->bAllowTemplateActorEditing = false;
    this->TemplateActor = NULL;
    this->AttachOptions = EPCGAttachOptions::Attached;
    this->bSpawnByAttribute = false;
}


