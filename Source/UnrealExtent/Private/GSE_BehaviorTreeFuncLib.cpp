#include "GSE_BehaviorTreeFuncLib.h"

UGSE_BehaviorTreeFuncLib::UGSE_BehaviorTreeFuncLib() {
}

UBehaviorTree* UGSE_BehaviorTreeFuncLib::GetCurrentTree(AAIController* AIController) {
    return NULL;
}

TArray<FString> UGSE_BehaviorTreeFuncLib::GetCurrentBTActiveNodeInfo(UBehaviorTreeComponent* BehaviorTreeComp) {
    return TArray<FString>();
}

void UGSE_BehaviorTreeFuncLib::GetBTTaskNodes(UBehaviorTree* BT, FBehaviorTreeNodeData& NodeData) {
}

bool UGSE_BehaviorTreeFuncLib::BTDecoratorOverrideChildIdx(UBTDecorator_BlueprintBase* BTDecorator, int32 NewIndex) {
    return false;
}


