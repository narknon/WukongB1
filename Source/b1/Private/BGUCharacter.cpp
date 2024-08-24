#include "BGUCharacter.h"
#include "Perception/AIPerceptionStimuliSourceComponent.h"
#include "ActorCompContainer.h"
#include "BGUAIController.h"
#include "BGUCharacterMovementComponent.h"
#include "Net/UnrealNetwork.h"

ABGUCharacter::ABGUCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UBGUCharacterMovementComponent>(TEXT("CharMoveComp"))) {
    this->bUseControllerRotationYaw = false;
    this->AIControllerClass = ABGUAIController::StaticClass();
    this->ActorCompContainer = CreateDefaultSubobject<UActorCompContainer>(TEXT("ActorCompContainer"));
    this->BGUDataComp = NULL;
    this->EventCollection = NULL;
    this->bIsFullyInit = false;
    this->bPreferActorRotToControlRot = false;
    this->ViewRotationYawOffset = 0.00f;
    this->GSNetInitFinish = false;
    this->AnimCapsule = NULL;
    this->AnimMoveComp = NULL;
    this->bBeginPlayFromLevelStreaming = false;
    this->TamerOwner = NULL;
    this->AIPerceptionStimuliSourceComponent = CreateDefaultSubobject<UAIPerceptionStimuliSourceComponent>(TEXT("AIPerceptionStimuliSourceComponent"));
    this->TeamIDDeprecate = 0;
    this->HostSyncMontage = NULL;
    this->HostSyncMontageStartTime = -1.00f;
}

UAnimMontage* ABGUCharacter::TryGetHostSyncMontage() {
    return NULL;
}

UActorComponent* ABGUCharacter::TryGetComponentByName(const FName& CompName) {
    return NULL;
}

void ABGUCharacter::SwitchNetRoleOnly(bool HasAuthority) {
}

void ABGUCharacter::SetViewRotationYawOffset(float NewOffset) {
}


void ABGUCharacter::SetTeamID(int32 ID) {
}

void ABGUCharacter::SetTamerOwner(ABGUTamerBase* NewOwner) {
}

void ABGUCharacter::SetPreferActorRotToControlRot(bool bValue) {
}




void ABGUCharacter::OnRep_ReplicatedAcceleration() {
}




void ABGUCharacter::OnGuestSyncMontage(UAnimMontage* _HostSyncMontage, float _HostSyncMontageStartTime) {
}



void ABGUCharacter::LeaveGuestSyncMontage() {
}


bool ABGUCharacter::IsInGuestSyncMontage() {
    return false;
}

void ABGUCharacter::GSSwapNetRoleCS(bool HasAuthority) {
}

float ABGUCharacter::GetViewRotationYawOffset() const {
    return 0.0f;
}

int32 ABGUCharacter::GetTeamID() const {
    return 0;
}

ABGUTamerBase* ABGUCharacter::GetTamerOwner() const {
    return NULL;
}

float ABGUCharacter::GetHostSyncMontageSyncStartTime() {
    return 0.0f;
}


UBUS_EventCollection* ABGUCharacter::GetBUSEventCollection() {
    return NULL;
}


bool ABGUCharacter::GetActorGuid(FString& OutActorGuid) const {
    return false;
}

void ABGUCharacter::FullyInit() {
}

void ABGUCharacter::ForceSpawnDefaultControllerCS() {
}

void ABGUCharacter::CallPostNetInit() {
}

void ABGUCharacter::AttachBaseActorComp(UBaseActorComp* Comp) {
}

void ABGUCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABGUCharacter, ReplicatedAcceleration);
    DOREPLIFETIME(ABGUCharacter, ECSDataNetSerialization);
}


