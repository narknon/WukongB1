#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BehaviorTreeNodeData.h"
#include "GSE_BehaviorTreeFuncLib.generated.h"

class AAIController;
class UBTDecorator_BlueprintBase;
class UBehaviorTree;
class UBehaviorTreeComponent;

UCLASS(Blueprintable)
class UNREALEXTENT_API UGSE_BehaviorTreeFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGSE_BehaviorTreeFuncLib();

    UFUNCTION(BlueprintCallable)
    static UBehaviorTree* GetCurrentTree(AAIController* AIController);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FString> GetCurrentBTActiveNodeInfo(UBehaviorTreeComponent* BehaviorTreeComp);
    
    UFUNCTION(BlueprintCallable)
    static void GetBTTaskNodes(UBehaviorTree* BT, FBehaviorTreeNodeData& NodeData);
    
    UFUNCTION(BlueprintCallable)
    static bool BTDecoratorOverrideChildIdx(UBTDecorator_BlueprintBase* BTDecorator, int32 NewIndex);
    
};

