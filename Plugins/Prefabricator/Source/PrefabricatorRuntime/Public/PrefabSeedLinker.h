#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PrefabSeedLinker.generated.h"

class APrefabActor;
class UPrefabSeedLinkerComponent;

UCLASS(Blueprintable)
class PREFABRICATORRUNTIME_API APrefabSeedLinker : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<APrefabActor>> LinkedActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrefabSeedLinkerComponent* SeedLinkerComponent;
    
    APrefabSeedLinker(const FObjectInitializer& ObjectInitializer);

};

