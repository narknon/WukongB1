#include "BUS_SeqHelperActorComp.h"
#include "Templates/SubclassOf.h"

UBUS_SeqHelperActorComp::UBUS_SeqHelperActorComp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UBUS_SeqHelperActorComp::AddBuff(FName Tag, bool IsRemoving, int32 BuffID, float Duration) {
}

void UBUS_SeqHelperActorComp::EnableAI(FName Tag) {
}

void UBUS_SeqHelperActorComp::DisableAI(FName Tag) {
}

void UBUS_SeqHelperActorComp::ExitStealth() {
}

void UBUS_SeqHelperActorComp::PlayMontage(FName Tag, UAnimMontage* MontageToPlay) {
}

void UBUS_SeqHelperActorComp::PerformPatrol(FName Tag) {
}

void UBUS_SeqHelperActorComp::CatchAsTarget(FName SelfTag, FName TargetTag) {
}

void UBUS_SeqHelperActorComp::SetVisibility(FName Tag, bool IsHidden, bool EnableCollision) {
}

void UBUS_SeqHelperActorComp::NotifyUnitDead(FName Tag) {
}

void UBUS_SeqHelperActorComp::UpdateSimpleStates(FName Tag, EBGUSimpleState SimpleState, bool IsRemoving) {
}

void UBUS_SeqHelperActorComp::SpawnPlayerPartner(TSubclassOf<ABGUCharacterCS> Class, FTransform Transform, FName Tag, bool PauseAI) {
}

void UBUS_SeqHelperActorComp::PerformMoveToPlayer(FName Tag, EAIMoveSpeedType SpeedRateType, float AcceptableRadius, EBGUMoveAIType MoveAIType, bool IncludeSelfRadius, bool IncludeTargetRadius) {
}

void UBUS_SeqHelperActorComp::PerformMoveToLocation(FName Tag, FVector position, EAIMoveSpeedType SpeedRateType, float AcceptableRadius, EBGUMoveAIType MoveAIType, bool IncludeSelfRadius, bool IncludeTargetRadius) {
}

void UBUS_SeqHelperActorComp::PerformPerceivePlayer(FName Tag) {
}

void UBUS_SeqHelperActorComp::BeginPlayInCS_Implementation() {
}


