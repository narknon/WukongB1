#include "RenderTargetDebugger.h"
#include "Components/StaticMeshComponent.h"

ARenderTargetDebugger::ARenderTargetDebugger(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RT_Debug = NULL;
    this->MID_RTPreview = NULL;
    this->Mesh_Previewer = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh_Previewer"));
}


