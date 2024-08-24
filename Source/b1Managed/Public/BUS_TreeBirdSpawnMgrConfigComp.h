#pragma once
#include "CoreMinimal.h"
#include "ActorEditCompBase.h"
#include "TreeBirdSpawnConfig.h"
#include "TreeInfo.h"
#include "BUS_TreeBirdSpawnMgrConfigComp.generated.h"

class UBGWDataAsset_BPTreeInfo;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBUS_TreeBirdSpawnMgrConfigComp : public UActorEditCompBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTreeInfo> TreeArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBGWDataAsset_BPTreeInfo* TreeInfoBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTreeBirdSpawnConfig SpawnConfig;
    
    UBUS_TreeBirdSpawnMgrConfigComp(const FObjectInitializer& ObjectInitializer);

};

