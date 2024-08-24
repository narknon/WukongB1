#pragma once
#include "CoreMinimal.h"
#include "Kismet/KismetMathLibrary.h"
#include "EGSAnimKBEnumBoolEasing.h"
#include "LevelSequenceActor.h"
#include "FGSSeqAnimKeyStateBlendCfg.h"
#include "BGUSeqAKBActor.generated.h"

class AActor;
class UGSAnimKeyStateBlender;

UCLASS(Blueprintable)
class ABGUSeqAKBActor : public ALevelSequenceActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultEasingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEasingFunc::Type DefaultEasingFunc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultEasingBlendExp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultEasingSteps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultDelayEasingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGSAnimKBEnumBoolEasing::Type DefaultEnumValEasingType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGSAnimKBEnumBoolEasing::Type DefaultBoolValEasingType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 IsStrictStateMatchCfg: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 IsAlwaysUsingEndStateAsChanging: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFGSSeqAnimKeyStateBlendCfg> GSBlendCfgList;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGSAnimKeyStateBlender* GSAnimKeyStateBlenderObj;
    
public:
    ABGUSeqAKBActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void DoTick(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void GSInit();
    
    UFUNCTION(BlueprintCallable)
    void ToState(FName TargetState, float InStateDelayEasingTime, float InStateOverideEasingTime);
    
    UFUNCTION(BlueprintCallable)
    void OnAKBStateEndFunc(FName BegineState, FName EndState, bool IsForceImSet);
    
    UFUNCTION(BlueprintCallable)
    void OnAKBStateBeginFunc(FName BegineState, FName EndState, bool IsForceImSet);
    
    UFUNCTION(BlueprintCallable)
    void WoodTestAnimKeyState(const FString& AnimName, const FString& TargetState, float InStateDelayEasingTime, bool IsForce);
    
    UFUNCTION(BlueprintCallable)
    void OnAKBStateInteruptFunc(FName BegineState, FName EndState, bool IsForceImSet);
    
    UFUNCTION(BlueprintCallable)
    void GSBeforeInitAddBindingActor(FName BindingActorTagName, AActor* InActor);
    
    UFUNCTION(BlueprintCallable)
    void GetPredicToStateCfgEasingTime(FName TargetState, float& PredicCfgEasingTime, float& PredicCfgDelayEasingTime);
    
};

