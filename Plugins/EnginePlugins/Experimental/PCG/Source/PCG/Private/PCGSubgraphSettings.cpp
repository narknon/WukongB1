#include "PCGSubgraphSettings.h"
#include "PCGGraphInstance.h"

UPCGSubgraphSettings::UPCGSubgraphSettings() {
    this->SubgraphInstance = CreateDefaultSubobject<UPCGGraphInstance>(TEXT("PCGSubgraphInstance"));
    this->SubgraphOverride = NULL;
}


