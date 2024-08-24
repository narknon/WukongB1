#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ConstructionSystemCursor.generated.h"

class APrefabActor;
class UMaterialInterface;
class UPrefabricatorConstructionSnapComponent;

UCLASS(Blueprintable)
class CONSTRUCTIONSYSTEMRUNTIME_API UConstructionSystemCursor : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APrefabActor* CursorGhostActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CursorSeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInterface* CursorMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInterface* CursorInvalidMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UPrefabricatorConstructionSnapComponent*> SnapComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ActiveSnapComponentIndex;
    
public:
    UConstructionSystemCursor();

};

