#pragma once
#include "CoreMinimal.h"
#include "BED_QuestNode.h"
#include "TraceSpawnType.h"
#include "BED_QuestNode_SpawnBossTrace.generated.h"

class UBGWDataAsset_B1DBC;

UCLASS(Blueprintable)
class UBED_QuestNode_SpawnBossTrace : public UBED_QuestNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TraceSpawnType SpawnType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UBGWDataAsset_B1DBC> TraceEfxPath;
    
    UBED_QuestNode_SpawnBossTrace();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetNodeDescriptionInCS() const;
    
};

