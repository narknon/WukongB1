#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/KismetMathLibrary.h"
#include "EGSAnimKBEnumBoolEasing.h"
#include "GSAKBStateEasingCfg.h"
#include "GSAKObjectEasingOneToOneStateData.h"
#include "GSAnimKeyCachedMatParamData.h"
#include "GSAnimKeyObjST.h"
#include "GSOnAKBStateBeginDelegate.h"
#include "GSOnAKBStateEndDelegate.h"
#include "GSOnAKBStateInteruptDelegate.h"
#include "GSAnimKeyStateBlender.generated.h"

class AActor;
class ALevelSequenceActor;
class ULevelSequence;
class UUserWidget;
class UWidgetAnimation;

UCLASS(Blueprintable)
class GSANIMATIONKEYBLENDER_API UGSAnimKeyStateBlender : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* RefAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULevelSequence* RefLevelSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* RefObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FGSAnimKeyCachedMatParamData> CurrentObjMatParamData;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<uint32, FGSAnimKeyCachedMatParamData> CurrentMPCMatParamData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FGSAKObjectEasingOneToOneStateData> EasingOneToOneStateData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, int32> StateNameIndexMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, FGSAKBStateEasingCfg> StateToStateEasingCfgMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsStrictStateMatchCfg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsAlwaysUsingEndStateAsChanging;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsWithRegStateName;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FGSAnimKeyObjST> AKObjSTList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsTicking;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGSOnAKBStateBegin OnAKBStateBegin;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGSOnAKBStateEnd OnAKBStateEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGSOnAKBStateInterupt OnAKBStateInterupt;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BeginStateName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurrentStateName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EndStateName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RefWorldTranslation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGSAKBStateEasingCfg DefaultEasingCfg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGSAKBStateEasingCfg WorkingEasingCfg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StateEasedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StateDelayEasingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StateOverideEasingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsWidgetBlender;
    
public:
    UGSAnimKeyStateBlender();

    UFUNCTION(BlueprintCallable)
    void ToState(FName TargetStateName, float InStateDelayEasingTime, float InStateOverideEasingTime);
    
    UFUNCTION(BlueprintCallable)
    bool IsInBlending();
    
    UFUNCTION(BlueprintCallable)
    void InitSetWidgetAnimation(UUserWidget* InRefUserWidget, UWidgetAnimation* InWidgetAnimation, bool InIsStrictStateMatchCfg, bool InIsAlwaysUsingEndStateAsChanging);
    
    UFUNCTION(BlueprintCallable)
    void InitSetLevelSequence(UObject* InRefObject, ULevelSequence* InLevelSequence, bool InIsStrictStateMatchCfg, bool InIsAlwaysUsingEndStateAsChanging);
    
    UFUNCTION(BlueprintCallable)
    void InitSetDefaultEasingCfg(float InEasingTime, TEnumAsByte<EEasingFunc::Type> InEasingFunc, float InEasingBlendExp, int32 InEasingSteps, TEnumAsByte<EGSAnimKBEnumBoolEasing::Type> InEnumValEasingType, TEnumAsByte<EGSAnimKBEnumBoolEasing::Type> InBoolValEasingType, float InDelayEasingTime);
    
    UFUNCTION(BlueprintCallable)
    void InitResetState();
    
    UFUNCTION(BlueprintCallable)
    void InitAddStateToStateEasingCfg(FName FromStateName, FName ToStateName, float InEasingTime, TEnumAsByte<EEasingFunc::Type> InEasingFunc, float InEasingBlendExp, int32 InEasingSteps, TEnumAsByte<EGSAnimKBEnumBoolEasing::Type> InEnumValEasingType, TEnumAsByte<EGSAnimKBEnumBoolEasing::Type> InBoolValEasingType, float InDelayEasingTime);
    
    UFUNCTION(BlueprintCallable)
    float GetPredicToStateCfgEasingTime(FName TargetStateName, float& OutDelayEasingTime);
    
    UFUNCTION(BlueprintCallable)
    FName GetEndStateName();
    
    UFUNCTION(BlueprintCallable)
    FName GetCurrentStateName();
    
    UFUNCTION(BlueprintCallable)
    FName GetBeginStateName();
    
    UFUNCTION(BlueprintCallable)
    void ForceSetStateImmediately(FName TargetStateName);
    
    UFUNCTION(BlueprintCallable)
    void EasingToEndState(float alpha, bool IsFromForceSetStateImmediately);
    
    UFUNCTION(BlueprintCallable)
    void DoTick(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void DoDebug();
    
    UFUNCTION(BlueprintCallable)
    void BeforeInitAddBindingActor(ALevelSequenceActor* RefLevelSequenceActor, FName BindingActorTagName, AActor* InActor);
    
};

