#include "BGUFuncLibAICS.h"

UBGUFuncLibAICS::UBGUFuncLibAICS() {
}

int32 UBGUFuncLibAICS::BGUAISideWalk(AActor* Unit, float MoveForwardValue, float MoveHorizonValue) {
    return 0;
}

void UBGUFuncLibAICS::BGUCancelAIMoveTo(AActor* Unit, int32 RequestIdx) {
}

void UBGUFuncLibAICS::BGUAISwitchSideWalk(AActor* Unit, bool bEnable) {
}

void UBGUFuncLibAICS::BGUAITriggerFSMEvent(AActor* Unit, EBGUFSMEventName FSMEvent) {
}

void UBGUFuncLibAICS::BGUCancelAICurrentMove(AActor* Unit) {
}

void UBGUFuncLibAICS::BGUUpdateUnitBattleState(ABGUCharacterCS* Unit, bool IsInBattle) {
}

int32 UBGUFuncLibAICS::BGURequestAIMontageMoveTo(AActor* Unit, UAnimMontage* Montage, float ScaleRate, float PlayTimeRate, float PosOffset) {
    return 0;
}

void UBGUFuncLibAICS::BGUAISetUnitTargetAsPlayer(AActor* Unit) {
}

int32 UBGUFuncLibAICS::BGURequestAIMoveToLocation(AActor* Unit, FVector position, EAIMoveSpeedType SpeedRateType, float AcceptableRadius, EBGUMoveAIType MoveAIType, bool IncludeSelfRadius, bool IncludeTargetRadius) {
    return 0;
}

void UBGUFuncLibAICS::BGUAISetUnitsTargetAsPlayer(UObject* WorldContextObject) {
}

int32 UBGUFuncLibAICS::BGURequestAIUseSkillWithSkillID(AActor* Unit, int32 SkillID, CastSkillSourceType SourceType) {
    return 0;
}

int32 UBGUFuncLibAICS::BGURequestAIMoveToLocationWithMM(AActor* Unit, FVector position, EAIMoveSpeedType SpeedRateType, float AcceptableRadius, EBGUMoveAIType MoveAIType, bool IncludeSelfRadius, bool IncludeTargetRadius, State_MM MotionMatchingState) {
    return 0;
}

int32 UBGUFuncLibAICS::BGURequestAIWallAndCellMoveToLocation(AActor* Unit, FVector position, EAIMoveSpeedType SpeedRateType, float turnSpeed, float AcceptableRadius, bool IncludeSelfRadius) {
    return 0;
}

void UBGUFuncLibAICS::BGUAISetUnitsTargetAsPlayerByTamerActorTag(UObject* WorldContextObject, FName MatchTag) {
}


