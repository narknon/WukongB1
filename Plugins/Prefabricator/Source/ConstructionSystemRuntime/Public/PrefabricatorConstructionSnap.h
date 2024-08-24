#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PrefabricatorConstructionSnap.generated.h"

class UPrefabricatorConstructionSnapComponent;

UCLASS(Blueprintable)
class CONSTRUCTIONSYSTEMRUNTIME_API APrefabricatorConstructionSnap : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrefabricatorConstructionSnapComponent* ConstructionSnapComponent;
    
public:
    APrefabricatorConstructionSnap(const FObjectInitializer& ObjectInitializer);

};

