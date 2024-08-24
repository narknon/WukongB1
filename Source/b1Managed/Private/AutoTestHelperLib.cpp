#include "AutoTestHelperLib.h"
#include "Templates/SubclassOf.h"

UAutoTestHelperLib::UAutoTestHelperLib() {
}

void UAutoTestHelperLib::Jump(UObject* WorldContext) {
}

void UAutoTestHelperLib::Dodge(UObject* WorldContext) {
}

void UAutoTestHelperLib::OpenBag(UObject* WorldContext, bool IsOpen) {
}

void UAutoTestHelperLib::TestCode(UObject* WorldContext) {
}

bool UAutoTestHelperLib::FindText(UObject* WorldContext, const FString& Text, bool bNeedClick) {
    return false;
}

void UAutoTestHelperLib::GenActor(UWorld*& World, TSubclassOf<AActor> ActorClass) {
}

void UAutoTestHelperLib::SetMaxHp(AActor* Unit) {
}

bool UAutoTestHelperLib::HasSpell(UObject* WorldContext, int32 SpellID) {
    return false;
}

bool UAutoTestHelperLib::Interact(UObject* WorldContext) {
    return false;
}

void UAutoTestHelperLib::CastSpell(UObject* WorldContext, SpellType SkillType) {
}

void UAutoTestHelperLib::QAPauseBT(AActor* Unit, bool Status) {
}

void UAutoTestHelperLib::KillEnemy(UObject* WorldContext, AActor*& KillTarget) {
}

bool UAutoTestHelperLib::RunToEnemy(UObject* WorldContext, ABGUCharacterCS* Enemy, int32 ReachRadius) {
    return false;
}

void UAutoTestHelperLib::ClickButton(UWidget* Btn) {
}

void UAutoTestHelperLib::LightAttack(UObject* WorldContext) {
}

void UAutoTestHelperLib::HeavyAttack(UObject* WorldContext) {
}

void UAutoTestHelperLib::MouseGoBack(UObject* WorldContext) {
}

void UAutoTestHelperLib::SetCurrentHp(AActor* Unit, int32 Hp) {
}

void UAutoTestHelperLib::RemoveGroupAI(UObject* WorldContext, AActor* OwnerActor) {
}

bool UAutoTestHelperLib::RunToPosition(UObject* WorldContext, FVector TargetLocation, int32 ReachRadius) {
    return false;
}

int32 UAutoTestHelperLib::HasItemNumber(UObject* WorldContext, int32 ItemId) {
    return 0;
}

FString UAutoTestHelperLib::ReadDataTable(int32 ID) {
    return TEXT("");
}

bool UAutoTestHelperLib::FindNearbyUnit(UObject* WorldContext, int32 AttackRadius, ABGUCharacterCS*& EnemyUnit, const FString& UnitBP) {
    return false;
}

bool UAutoTestHelperLib::IsUnitInBattle(AActor* Unit) {
    return false;
}

void UAutoTestHelperLib::GenShiXianFeng(UWorld*& World) {
}

bool UAutoTestHelperLib::CanUnitBeTarget(ABGUCharacterCS* Enemy) {
    return false;
}

void UAutoTestHelperLib::SetPlayerAttack(AActor* Unit, int32 AttackNum) {
}

void UAutoTestHelperLib::QADrawSkillRange(AActor* Unit, int32 SkillID, float Duration) {
}

void UAutoTestHelperLib::CameraLockTarget(UObject* WorldContext, AActor* LockTarget) {
}

void UAutoTestHelperLib::AutoMoveComplete(UObject* WorldContext) {
}

bool UAutoTestHelperLib::IsEquippingSpell(UObject* WorldContext, int32 SpellID) {
    return false;
}

TArray<int32> UAutoTestHelperLib::GetUnitAllSkillID(AActor* Unit) {
    return TArray<int32>();
}

TArray<FString> UAutoTestHelperLib::QAStringArraySort(TArray<FString> StringList) {
    return TArray<FString>();
}

FString UAutoTestHelperLib::QAGetCurrentAMName(AActor* Target) {
    return TEXT("");
}

bool UAutoTestHelperLib::JudgeWidgetVisible(UWidget* Widget) {
    return false;
}

FString UAutoTestHelperLib::QAGetCurrentSkillID(AActor* Target) {
    return TEXT("");
}

void UAutoTestHelperLib::GetTamerInViewCount(UObject* WorldContext) {
}

ABGUCharacterCS* UAutoTestHelperLib::GetPlayerTargetActor(UObject* WorldContext) {
    return NULL;
}

bool UAutoTestHelperLib::GetPlayingSequenceID(UObject* WorldContext, int32& SequenceID) {
    return false;
}

bool UAutoTestHelperLib::IsPlayingCameraMovie(UObject* WorldContext) {
    return false;
}

bool UAutoTestHelperLib::GetActorLocationByName(UObject* WorldContext, const FString& ActorName, FVector& ActorLocation) {
    return false;
}

void UAutoTestHelperLib::QAUploadPerformanceData(UObject* WorldContext, const FString& Catelog, const FString& Summary, TArray<FString> FileList) {
}

bool UAutoTestHelperLib::RebirthPointChoiceClick(UObject* WorldContext, const FString& Choice) {
    return false;
}

void UAutoTestHelperLib::AutoTestInjectInputEvent(UObject* WorldContext, const FString& ActionName, ETriggerEvent TriggerEvent) {
}


