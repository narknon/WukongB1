#pragma once
#include "CoreMinimal.h"
#include "BGUActorBaseCS.h"
#include "BGUTreeBirdSpawnMgr.generated.h"

class UBUS_TreeBirdSpawnMgrConfigComp;
class USceneComponent;

UCLASS(Blueprintable)
class ABGUTreeBirdSpawnMgr : public ABGUActorBaseCS {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBUS_TreeBirdSpawnMgrConfigComp* ConfigComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DrawDebugTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DrawDebugThickness;
    
    ABGUTreeBirdSpawnMgr(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void CollectAllTreesInfo();
    
    UFUNCTION(BlueprintCallable)
    void DrawDebug_OnlyInEditor();
    
};

