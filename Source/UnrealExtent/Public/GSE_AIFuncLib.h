#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GSE_AIFuncLib.generated.h"

class AActor;
class UAIPerceptionComponent;
class UBehaviorTree;
class UBehaviorTreeComponent;
class UBrainComponent;

UCLASS(Blueprintable)
class UNREALEXTENT_API UGSE_AIFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGSE_AIFuncLib();

    UFUNCTION(BlueprintCallable)
    static void SinglePerceptionSetEnable(UAIPerceptionComponent* PerceptionComp, bool IsHearing, bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    static void SetPerceptionForgetAll(UAIPerceptionComponent* PerceptionComp);
    
    UFUNCTION(BlueprintCallable)
    static void SetAISenseConfig(UAIPerceptionComponent* PerceptionComp, float HearRange, float SightRange, float LoseSightRange, float VisionAngleDegrees, float ASRangeFromLastSeenLoc, bool IsSightDominantSense, bool& IsHearingSet, bool& IsSightSet);
    
    UFUNCTION(BlueprintCallable)
    static void SetAIBTStop(UBehaviorTreeComponent* BTComp);
    
    UFUNCTION(BlueprintCallable)
    static void SetAIBTPause(UBrainComponent* BrainComponent, bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    static void ListenerForgetsActor(UAIPerceptionComponent* PerceptionComp, AActor* ActorToForget);
    
    UFUNCTION(BlueprintCallable)
    static void AISetBT(AActor* Actor, UBehaviorTree* BTAsset);
    
};

