#include "BGUTamerBase.h"
#include "Components/CapsuleComponent.h"
#include "Engine/EngineTypes.h"
#include "Components/StaticMeshComponent.h"
#include "Net/UnrealNetwork.h"

ABGUTamerBase::ABGUTamerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bNetTemporary = true;
    this->bReplicates = true;
    this->SetRemoteRoleForBackwardsCompat(ROLE_SimulatedProxy);
    this->SpawnCollisionHandlingMethod = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
    this->RootComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CollisionCylinder"));
    this->bBeginPlayFromLevelStreaming = false;
    this->SpawnedPlayerState = NULL;
    this->TamerType = ETamerType::None;
    this->bEnableShowLODMesh = false;
    this->LODMaxDistance = 1000;
    this->Mesh = NULL;
    this->CapsuleComponent = (UCapsuleComponent*)RootComponent;
    this->LowLODMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LowLOD"));
    this->LowLODMesh->SetupAttachment(RootComponent);
}

void ABGUTamerBase::SetLODMeshVisible(bool invisible) {
}





bool ABGUTamerBase::GetHighLODMeshConfig_Implementation(FTamerHighLODRootMeshConfig& OutMeshConfig) {
    return false;
}


bool ABGUTamerBase::GetActorGuid(FString& OutActorGuid) const {
    return false;
}

void ABGUTamerBase::ForceRefreshDetailView() {
}



void ABGUTamerBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABGUTamerBase, SpawnedPlayerState);
    DOREPLIFETIME(ABGUTamerBase, SpawnedTamerGuid);
    DOREPLIFETIME(ABGUTamerBase, TamerType);
}


