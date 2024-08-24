#include "PCGCreateTargetActor.h"

UPCGCreateTargetActor::UPCGCreateTargetActor() {
    this->TemplateActorClass = NULL;
    this->TemplateActor = NULL;
    this->bAllowTemplateActorEditing = false;
    this->AttachOptions = EPCGAttachOptions::Attached;
}


