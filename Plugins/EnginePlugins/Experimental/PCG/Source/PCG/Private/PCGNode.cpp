#include "PCGNode.h"
#include "PCGTrivialSettings.h"

UPCGNode::UPCGNode() {
    this->SettingsInterface = CreateDefaultSubobject<UPCGTrivialSettings>(TEXT("DefaultNodeSettings"));
}

bool UPCGNode::RemoveEdgeTo(FName FromPinLable, UPCGNode* To, FName ToPinLabel) {
    return false;
}

UPCGSettings* UPCGNode::GetSettings() const {
    return NULL;
}

UPCGGraph* UPCGNode::GetGraph() const {
    return NULL;
}

UPCGNode* UPCGNode::AddEdgeTo(FName FromPinLabel, UPCGNode* To, FName ToPinLabel) {
    return NULL;
}


