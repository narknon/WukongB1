#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNodeReference.h"
#include "Animation/AnimExecutionContext.h"
#include "BUAnimHumanoidCS_LinkedInstanceBase.h"
#include "ELMFreeMode.h"
#include "ELMLockMode.h"
#include "GaitGroundedState.h"
#include "BUAnimHumanoidCS_AdvancedMonsterLocomotion.generated.h"

class UAnimSequence;

UCLASS(Abstract, Blueprintable, NonTransient)
class UBUAnimHumanoidCS_AdvancedMonsterLocomotion : public UBUAnimHumanoidCS_LinkedInstanceBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELMFreeMode FreeMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELMLockMode LockMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StrideWarpingStartAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StrideWarpingLoopAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StrideWarpingTurnAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveLoopSpine01AngleOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveLoopSpine02AngleOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveLoopSpine03AngleOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveLoopHeadAngleOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveLoopPelvisLocalOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveLoopPelvisAngleOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* ASWalkStartFwd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* ASWalkStartBwd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* ASWalkStartLeftMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* ASWalkStartLeftMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* ASWalkStartRightMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* ASWalkStartRightMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* ASWalkStartLF;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* ASWalkStartLB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* ASWalkStartRF;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* ASWalkStartRB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* ASWalkLoopFwd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* ASWalkLoopBwd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* ASWalkLoopLF;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* ASWalkLoopLB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* ASWalkLoopRF;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* ASWalkLoopRB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* ASWalkSharpturnLeftMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* ASWalkSharpturnLeftMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* ASWalkSharpturnRightMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* ASWalkSharpturnRightMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* ASWalkPivotFwd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* ASWalkPivotBwd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* ASWalkPivotLF;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* ASWalkPivotLB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* ASWalkPivotRF;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* ASWalkPivotRB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* ASWalkTransFRToBR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* ASWalkTransBRToFR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* ASWalkTransFLToBL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* ASWalkTransBLToFL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* ASWalkStopFwd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* ASWalkStopBwd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* ASWalkStopLF;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* ASWalkStopLB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* ASWalkStopRF;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* ASWalkStopRB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* ASWalkLoopAddPose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimSequence*> ASWalkLoopAdditiveList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* ASRunStartFwd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* ASRunStartBwd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* ASRunStartLeftMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* ASRunStartLeftMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* ASRunStartRightMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* ASRunStartRightMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* ASRunStartLF;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* ASRunStartLB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* ASRunStartRF;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* ASRunStartRB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* ASRunLoopFwd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* ASRunLoopBwd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* ASRunLoopLF;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* ASRunLoopLB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* ASRunLoopRF;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* ASRunLoopRB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* ASRunSharpturnLeftMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* ASRunSharpturnLeftMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* ASRunSharpturnRightMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* ASRunSharpturnRightMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* ASRunPivotFwd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* ASRunPivotBwd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* ASRunPivotLF;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* ASRunPivotLB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* ASRunPivotRF;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* ASRunPivotRB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* ASRunTransFRToBR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* ASRunTransBRToFR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* ASRunTransFLToBL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* ASRunTransBLToFL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* ASRunStopFwd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* ASRunStopBwd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* ASRunStopLF;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* ASRunStopLB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* ASRunStopRF;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* ASRunStopRB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* ASRunLoopAddPose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimSequence*> ASRunLoopAdditiveList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* ASRushStartFwd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* ASRushStartLeftMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* ASRushStartLeftMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* ASRushStartRightMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* ASRushStartRightMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* ASRushLoopFwd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* ASRushSharpturnLeftMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* ASRushSharpturnLeftMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* ASRushSharpturnRightMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* ASRushSharpturnRightMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* ASRushStopFwd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* ASRushLoopAddPose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimSequence*> ASRushLoopAdditiveList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* AnimIdle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MappedSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    GaitGroundedState GaitGroundedState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    GaitGroundedState MoveGaitGroundedState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SwitchingLockStateAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ActorSpineNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VelocityDeltaAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StopVelocityDeltaAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InputDeltaAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InputVelocityAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveSpeedLastUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bPivotUseOrientationWarping: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUpdateAnimIdle: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSwitchToLock: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSwitchingLockState: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bFreeStop: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bLockStop: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSwitchingLockStateStop: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bMoveToIdle: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bStartToTrans: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bFreeStartToTurn: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bLockStartToTurn: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSwitchingFreeToTurn: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bLockLoopToTurn: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bLockTurnToLoop: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bFreeLoopToTurn: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bFreeMoveToTurn: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bLockMoveToTurn: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bMoveStartSwitch: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bMoveTurnSwitch: 1;
    
    UBUAnimHumanoidCS_AdvancedMonsterLocomotion();

private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldToMove();
    
    UFUNCTION(BlueprintCallable)
    void SetupIdleAnim(UPARAM(Ref) FAnimUpdateContext& Context, UPARAM(Ref) FAnimNodeReference& Node);
    
    UFUNCTION(BlueprintCallable)
    void SetupIdleOutput(UPARAM(Ref) FAnimUpdateContext& Context, UPARAM(Ref) FAnimNodeReference& Node);
    
    UFUNCTION(BlueprintCallable)
    void SetupMoveLoopAnim(UPARAM(Ref) FAnimUpdateContext& Context, UPARAM(Ref) FAnimNodeReference& Node);
    
    UFUNCTION(BlueprintCallable)
    void SetupMoveStopAnim(UPARAM(Ref) FAnimUpdateContext& Context, UPARAM(Ref) FAnimNodeReference& Node);
    
    UFUNCTION(BlueprintCallable)
    void SetupMoveTurnAnim(UPARAM(Ref) FAnimUpdateContext& Context, UPARAM(Ref) FAnimNodeReference& Node);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldMoveLoopToBR();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldMoveLoopToBL();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldMoveLoopToFR();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldMoveLoopToFL();
    
    UFUNCTION(BlueprintCallable)
    void SetupMoveStartAnim(UPARAM(Ref) FAnimUpdateContext& Context, UPARAM(Ref) FAnimNodeReference& Node);
    
    UFUNCTION(BlueprintCallable)
    void UpdateMoveStopAnim(UPARAM(Ref) FAnimUpdateContext& Context, UPARAM(Ref) FAnimNodeReference& Node);
    
    UFUNCTION(BlueprintCallable)
    void UpdateMoveTurnAnim(UPARAM(Ref) FAnimUpdateContext& Context, UPARAM(Ref) FAnimNodeReference& Node);
    
    UFUNCTION(BlueprintCallable)
    void SetupMoveTurnOutput(UPARAM(Ref) FAnimUpdateContext& Context, UPARAM(Ref) FAnimNodeReference& Node);
    
    UFUNCTION(BlueprintCallable)
    void SetupMoveStopOutput(UPARAM(Ref) FAnimUpdateContext& Context, UPARAM(Ref) FAnimNodeReference& Node);
    
    UFUNCTION(BlueprintCallable)
    void UpdateMoveStartAnim(UPARAM(Ref) FAnimUpdateContext& Context, UPARAM(Ref) FAnimNodeReference& Node);
    
    UFUNCTION(BlueprintCallable)
    void SetupMoveLoopOutput(UPARAM(Ref) FAnimUpdateContext& Context, UPARAM(Ref) FAnimNodeReference& Node);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldMoveLoopToFwd();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldMoveLoopToBwd();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldMoveLoopBRToFR();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldMoveLoopFRToBR();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldMoveLoopFLToBL();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldMoveLoopLeftBR();
    
    UFUNCTION(BlueprintCallable)
    void UpdateMoveTurnOutput(UPARAM(Ref) FAnimUpdateContext& Context, UPARAM(Ref) FAnimNodeReference& Node);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldMoveLoopLeftFR();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldMoveLoopLeftFL();
    
    UFUNCTION(BlueprintCallable)
    void UpdateMoveStopOutput(UPARAM(Ref) FAnimUpdateContext& Context, UPARAM(Ref) FAnimNodeReference& Node);
    
    UFUNCTION(BlueprintCallable)
    void UpdateMoveLoopOutput(UPARAM(Ref) FAnimUpdateContext& Context, UPARAM(Ref) FAnimNodeReference& Node);
    
    UFUNCTION(BlueprintCallable)
    void UpdateMoveLoopBRAnim(UPARAM(Ref) FAnimUpdateContext& Context, UPARAM(Ref) FAnimNodeReference& Node);
    
    UFUNCTION(BlueprintCallable)
    void UpdateMoveLoopBLAnim(UPARAM(Ref) FAnimUpdateContext& Context, UPARAM(Ref) FAnimNodeReference& Node);
    
    UFUNCTION(BlueprintCallable)
    void UpdateMoveLoopFRAnim(UPARAM(Ref) FAnimUpdateContext& Context, UPARAM(Ref) FAnimNodeReference& Node);
    
    UFUNCTION(BlueprintCallable)
    void UpdateMoveLoopFLAnim(UPARAM(Ref) FAnimUpdateContext& Context, UPARAM(Ref) FAnimNodeReference& Node);
    
    UFUNCTION(BlueprintCallable)
    void SetupMoveStartOutput(UPARAM(Ref) FAnimUpdateContext& Context, UPARAM(Ref) FAnimNodeReference& Node);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldMoveLoopLeftBL();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldMoveLoopBLToFL();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldMoveLoopLeftBwd();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldMoveLoopLeftFwd();
    
    UFUNCTION(BlueprintCallable)
    void UpdateMoveLoopFwdAnim(UPARAM(Ref) FAnimUpdateContext& Context, UPARAM(Ref) FAnimNodeReference& Node);
    
    UFUNCTION(BlueprintCallable)
    void UpdateMoveLoopBwdAnim(UPARAM(Ref) FAnimUpdateContext& Context, UPARAM(Ref) FAnimNodeReference& Node);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldMoveLoopTransToFL();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldMoveLoopTransToFR();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldMoveLoopTransToBR();
    
    UFUNCTION(BlueprintCallable)
    void UpdateMoveLoopTransAnim(UPARAM(Ref) FAnimUpdateContext& Context, UPARAM(Ref) FAnimNodeReference& Node);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldMoveLoopTransToBL();
    
    UFUNCTION(BlueprintCallable)
    void UpdateMoveLoopSimpleAnim(UPARAM(Ref) FAnimUpdateContext& Context, UPARAM(Ref) FAnimNodeReference& Node);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldMoveTurnSwitchFree();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldMoveTurnSwitchLock();
    
    UFUNCTION(BlueprintCallable)
    void SetupMoveLoopAdditiveAnim(UPARAM(Ref) FAnimUpdateContext& Context, UPARAM(Ref) FAnimNodeReference& Node);
    
    UFUNCTION(BlueprintCallable)
    void UpdateMoveLoopLB2LFOutput(UPARAM(Ref) FAnimUpdateContext& Context, UPARAM(Ref) FAnimNodeReference& Node);
    
    UFUNCTION(BlueprintCallable)
    void UpdateMoveLoopRB2RFOutput(UPARAM(Ref) FAnimUpdateContext& Context, UPARAM(Ref) FAnimNodeReference& Node);
    
    UFUNCTION(BlueprintCallable)
    void UpdateMoveLoopRF2RBOutput(UPARAM(Ref) FAnimUpdateContext& Context, UPARAM(Ref) FAnimNodeReference& Node);
    
    UFUNCTION(BlueprintCallable)
    void UpdateMoveLoopLF2LBOutput(UPARAM(Ref) FAnimUpdateContext& Context, UPARAM(Ref) FAnimNodeReference& Node);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldMoveLoopLeftTransBR();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldMoveLoopLeftTransFL();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldMoveLoopLeftTransBL();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldMoveLoopLeftTransFR();
    
    UFUNCTION(BlueprintCallable)
    void UpdateMoveLoopStateMachine(UPARAM(Ref) FAnimUpdateContext& Context, UPARAM(Ref) FAnimNodeReference& Node);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldMoveTurnSwitchLockToFree();
    
};

