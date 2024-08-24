#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GlideMoveAnimState.h"
#include "IdleProcessActionType.h"
#include "LockMoveDirectionSix.h"
#include "MontageBindReason.h"
#include "MoveDirectionEight.h"
#include "ParkourMoveAnimState.h"
#include "BGUFuncLibAnim.generated.h"

class AActor;
class UAnimInstance;
class UAnimMontage;
class UBED_ProcessAsset;

UCLASS(Blueprintable)
class UBGUFuncLibAnim : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBGUFuncLibAnim();

    UFUNCTION(BlueprintCallable)
    static void BGURootMotionJumpEnd(AActor* Owner);
    
    UFUNCTION(BlueprintCallable)
    static void BGUSetUseSnapshotPose(AActor* Owner, bool bUseSnapshot, float BlendTime);
    
    UFUNCTION(BlueprintCallable)
    static float BGUActorTryPlayMontage(AActor* Owner, UAnimMontage* Montage, FName StartSectionName, MontageBindReason Reason, float Scale, float PlayTimeRate, float MontagePosOffset);
    
    UFUNCTION(BlueprintCallable)
    static void BGURootMotionJumpStart(AActor* Owner);
    
    UFUNCTION(BlueprintCallable)
    static void BGUSetGlideMoveAnimState(AActor* Owner, GlideMoveAnimState State);
    
    UFUNCTION(BlueprintCallable)
    static void BGUSetParkourMoveAnimState(AActor* Owner, ParkourMoveAnimState State);
    
    UFUNCTION(BlueprintCallable)
    static void BGUSplineMoveEnterStopState(AActor* Owner);
    
    UFUNCTION(BlueprintCallable)
    static void BGUPlayerLocomotionStartIdle(AActor* Owner);
    
    UFUNCTION(BlueprintCallable)
    static void BGUSetCharacterMontagePlaying(AActor* Owner, bool IsPlaying);
    
    UFUNCTION(BlueprintCallable)
    static void BGUMonsterLocomotionLockStopLeft(AActor* Owner, UAnimInstance* MonsterLocomotionAnimInst);
    
    UFUNCTION(BlueprintCallable)
    static void BGUMonsterLocomotionLockStopRight(AActor* Owner, UAnimInstance* MonsterLocomotionAnimInst);
    
    UFUNCTION(BlueprintCallable)
    static void BGUMonsterLocomotionEnterMoveLoop(AActor* Owner, UAnimInstance* MonsterLocomotionAnimInst);
    
    UFUNCTION(BlueprintCallable)
    static void BGUSetMonsterLocomotionLockMoveDir(AActor* Owner, MoveDirectionEight MoveDir);
    
    UFUNCTION(BlueprintCallable)
    static void BGUPlayerLocomotionLockTurnStopDir(AActor* Owner, LockMoveDirectionSix Direction);
    
    UFUNCTION(BlueprintCallable)
    static void BGUPlayerLocomotionEnterLockMoveState(AActor* Owner);
    
    UFUNCTION(BlueprintCallable)
    static bool BGUTryFindCPGIdleNodeWithoutResetGroup(UBED_ProcessAsset* CPG, IdleProcessActionType TargetAction);
    
    UFUNCTION(BlueprintCallable)
    static void BGUSetPlayerLocomotionLockMoveDirection(AActor* Owner, LockMoveDirectionSix Direction);
    
};

