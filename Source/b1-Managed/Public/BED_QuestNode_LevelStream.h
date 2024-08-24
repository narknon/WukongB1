#pragma once
#include "CoreMinimal.h"
#include "BED_QuestNode.h"
#include "BED_QuestNode_LevelStream.generated.h"

class ABGWLevelStreamingVolume;

UCLASS(Blueprintable)
class UBED_QuestNode_LevelStream : public UBED_QuestNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<ABGWLevelStreamingVolume>> LoadStreamingVolumes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<ABGWLevelStreamingVolume>> UnloadStreamingVolumes;
    
    UBED_QuestNode_LevelStream();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetNodeDescriptionInCS() const;
    
};

