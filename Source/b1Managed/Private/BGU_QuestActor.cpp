#include "BGU_QuestActor.h"
#include "ActorCompContainer.h"
#include "ActorCompContainerCS.h"
#include "BUS_ActorConfigInfoComp.h"
#include "BUS_GuidComp.h"
#include "BUS_QuestDataComp.h"
#include "BUS_SaveInitDataComp.h"

ABGU_QuestActor::ABGU_QuestActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ActorCompContainer = CreateDefaultSubobject<UActorCompContainer>(TEXT("ActorCompContainer"));
    this->DataComp = CreateDefaultSubobject<UBUS_QuestDataComp>(TEXT("DataComp"));
    this->ActorCompContainerCS = CreateDefaultSubobject<UActorCompContainerCS>(TEXT("ActorCompContainerCS"));
    const FProperty* p_GuidComp = GetClass()->FindPropertyByName("GuidComp");
    (*p_GuidComp->ContainerPtrToValuePtr<UBUS_GuidComp*>(this)) = CreateDefaultSubobject<UBUS_GuidComp>(TEXT("GuidSystem"));
    const FProperty* p_SaveInitDataComp = GetClass()->FindPropertyByName("SaveInitDataComp");
    (*p_SaveInitDataComp->ContainerPtrToValuePtr<UBUS_SaveInitDataComp*>(this)) = CreateDefaultSubobject<UBUS_SaveInitDataComp>(TEXT("SaveInitDataSystem"));
    const FProperty* p_ActorConfigInfoComp = GetClass()->FindPropertyByName("ActorConfigInfoComp");
    (*p_ActorConfigInfoComp->ContainerPtrToValuePtr<UBUS_ActorConfigInfoComp*>(this)) = CreateDefaultSubobject<UBUS_ActorConfigInfoComp>(TEXT("ActorConfigInfoSystem"));
    this->QuestActorType = QuestActorType::None;
    this->bAutoEnableOverlap = false;
    this->AssignBirthPointID = 0;
    this->bAutoEnableDynamicObstacle = false;
    this->PerformID = 0;
    this->bEnableDynamicObstacleCollisionDebug = false;
    this->Timer_InArea = 0.00f;
    this->Timer_OutArea = 0.00f;
    this->HLMActor = NULL;
    this->bRecoverToNoSpawn = false;
    this->SpawnWaveGroupID = -1;
    this->SpawnWaveGlobleGroupCD = 0.00f;
    this->EnsureBornPosCanNavToPlayer = false;
    this->SpawnWaveType = SpawnWaveType::SpawnSequence;
    this->WaveStopActionType = WaveStopActionType::DestroyAllSpawnedUnits;
}

void ABGU_QuestActor::OnCollisionEndOverlap_Implementation(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ABGU_QuestActor::OnCollisionBeginOverlap_Implementation(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, FHitResult SweepResult) {
}

void ABGU_QuestActor::OnEnableDynamicObstacle_Implementation() {
}

void ABGU_QuestActor::OnDisableDynamicObstacle_Implementation() {
}

void ABGU_QuestActor::ReceiveEndPlay_Implementation(EEndPlayReason::Type EndPlayReason) {
}

void ABGU_QuestActor::OnPropertyChanged_Implementation(const FString& MemberName, const FString& PropertyName) {
}


