#include "GSE_StaticMeshFunLib.h"

UGSE_StaticMeshFunLib::UGSE_StaticMeshFunLib() {
}

void UGSE_StaticMeshFunLib::SetStaticMeshActorVisibility(AStaticMeshActor* TargetActor, bool Visible, bool recurseToChildActor) {
}

void UGSE_StaticMeshFunLib::SetLinearColorParameterValueOnMaterials(UMeshComponent* MeshComp, const FName& ParamName, const FLinearColor& ParamValue) {
}

void UGSE_StaticMeshFunLib::SetCollisionComplexity(UStaticMesh* TargetStaticMesh, TEnumAsByte<ECollisionTraceFlag> _CollisionTraceFlag) {
}

bool UGSE_StaticMeshFunLib::IsCPUAccess(UStaticMesh* StaticMesh) {
    return false;
}

int32 UGSE_StaticMeshFunLib::GetStaticMeshMaterialNum(UStaticMesh* TargetStaticMesh) {
    return 0;
}

TArray<float> UGSE_StaticMeshFunLib::GetCustomPrimitiveData(UStaticMeshComponent* StaticMeshComponent) {
    return TArray<float>();
}

int32 UGSE_StaticMeshFunLib::GetCollisionPremitiveNumbers(UStaticMesh* TargetStaticMesh) {
    return 0;
}

TEnumAsByte<ECollisionTraceFlag> UGSE_StaticMeshFunLib::GetCollisionComplexity(UStaticMesh* TargetStaticMesh) {
    return CTF_UseDefault;
}


