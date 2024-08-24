#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BodySetupEnums.h"
#include "GSE_StaticMeshFunLib.generated.h"

class AStaticMeshActor;
class UMeshComponent;
class UStaticMesh;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class UNREALEXTENT_API UGSE_StaticMeshFunLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGSE_StaticMeshFunLib();

    UFUNCTION(BlueprintCallable)
    static void SetStaticMeshActorVisibility(AStaticMeshActor* TargetActor, bool Visible, bool recurseToChildActor);
    
    UFUNCTION(BlueprintCallable)
    static void SetLinearColorParameterValueOnMaterials(UMeshComponent* MeshComp, const FName& ParamName, const FLinearColor& ParamValue);
    
    UFUNCTION(BlueprintCallable)
    static void SetCollisionComplexity(UStaticMesh* TargetStaticMesh, TEnumAsByte<ECollisionTraceFlag> _CollisionTraceFlag);
    
    UFUNCTION(BlueprintCallable)
    static bool IsCPUAccess(UStaticMesh* StaticMesh);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetStaticMeshMaterialNum(UStaticMesh* TargetStaticMesh);
    
    UFUNCTION(BlueprintCallable)
    static TArray<float> GetCustomPrimitiveData(UStaticMeshComponent* StaticMeshComponent);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetCollisionPremitiveNumbers(UStaticMesh* TargetStaticMesh);
    
    UFUNCTION(BlueprintCallable)
    static TEnumAsByte<ECollisionTraceFlag> GetCollisionComplexity(UStaticMesh* TargetStaticMesh);
    
};

