#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BehaviorTreeNodeData.h"
#include "QATamerDescriber.generated.h"

class ABUTamerActor;
class UAnimMontage;
class UBehaviorTree;

UCLASS(Blueprintable)
class UQATamerDescriber : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UQATamerDescriber();

    UFUNCTION(BlueprintCallable)
    static FString QADescribeBT(UBehaviorTree* BT);
    
    UFUNCTION(BlueprintCallable)
    static FString QADescribeISO(ABUTamerActor* TM);
    
    UFUNCTION(BlueprintCallable)
    static FString QADescribeArt(ABUTamerActor* TM);
    
    UFUNCTION(BlueprintCallable)
    static FString QADescribeDeath(ABUTamerActor* TM);
    
    UFUNCTION(BlueprintCallable)
    static FString QADescribeSkill(ABUTamerActor* TM);
    
    UFUNCTION(BlueprintCallable)
    static FString QADescribeBattle(ABUTamerActor* TM);
    
private:
    UFUNCTION(BlueprintCallable)
    static FBehaviorTreeNodeData QAGetBTTaskNodes(UBehaviorTree* BT);
    
public:
    UFUNCTION(BlueprintCallable)
    static FString QADescribeCounter(ABUTamerActor* TM);
    
    UFUNCTION(BlueprintCallable)
    static FString QADescribeBeAttacked(ABUTamerActor* TM);
    
    UFUNCTION(BlueprintCallable)
    static FString QADescribeEngagement(ABUTamerActor* TM);
    
    UFUNCTION(BlueprintCallable)
    static FString QADescribeBattleArena(ABUTamerActor* TM);
    
    UFUNCTION(BlueprintCallable)
    static FString QADescribeAnimByMontage(UAnimMontage* Montage);
    
    UFUNCTION(BlueprintCallable)
    static FString QADescribeAnimBySkillID(int32 SkillID);
    
};

