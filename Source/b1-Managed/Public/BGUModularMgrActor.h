#pragma once
#include "CoreMinimal.h"
#include "BGUActorBaseCS.h"
#include "BGUModularMgrActor.generated.h"

class AActor;
class UBUS_ModularMgrConfigComp;
class UObject;

UCLASS(Blueprintable)
class ABGUModularMgrActor : public ABGUActorBaseCS {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBUS_ModularMgrConfigComp* ModularMgrConfigComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> SpawnedModularActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UObject*, FString> ModularMeshes;
    
    ABGUModularMgrActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SpawnModularActors();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReceiveDestroyed();
    
};

