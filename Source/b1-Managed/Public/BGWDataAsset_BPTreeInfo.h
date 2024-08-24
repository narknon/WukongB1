#pragma once
#include "CoreMinimal.h"
#include "BGWDataAsset.h"
#include "FBPTreeInfo.h"
#include "Templates/SubclassOf.h"
#include "BGWDataAsset_BPTreeInfo.generated.h"

class AActor;
class UStaticMesh;

UCLASS(Blueprintable)
class UBGWDataAsset_BPTreeInfo : public UBGWDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<AActor>, FFBPTreeInfo> TreeInfoMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UStaticMesh*, FFBPTreeInfo> StaticMeshTreeInfoMap;
    
    UBGWDataAsset_BPTreeInfo();

};

