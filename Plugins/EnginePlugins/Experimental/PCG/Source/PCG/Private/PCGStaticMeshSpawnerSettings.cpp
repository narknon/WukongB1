#include "PCGStaticMeshSpawnerSettings.h"
#include "PCGMeshSelectorWeighted.h"
#include "Templates/SubclassOf.h"

UPCGStaticMeshSpawnerSettings::UPCGStaticMeshSpawnerSettings() {
    this->bUseSeed = true;
    this->MeshSelectorType = UPCGMeshSelectorWeighted::StaticClass();
    this->MeshSelectorParameters = NULL;
    this->InstanceDataPackerType = NULL;
    this->InstanceDataPackerParameters = NULL;
    this->bApplyMeshBoundsToPoints = true;
}

void UPCGStaticMeshSpawnerSettings::SetMeshSelectorType(TSubclassOf<UPCGMeshSelectorBase> InMeshSelectorType) {
}

void UPCGStaticMeshSpawnerSettings::SetInstancePackerType(TSubclassOf<UPCGInstanceDataPackerBase> InInstancePackerType) {
}


