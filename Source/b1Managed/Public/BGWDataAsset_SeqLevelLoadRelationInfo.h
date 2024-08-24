#pragma once
#include "CoreMinimal.h"
#include "BGWSaveCheckDataAsset.h"
#include "MovieRelationInfoCollection.h"
#include "RelationLevelInfo.h"
#include "SeqLevelRelationInfo.h"
#include "BGWDataAsset_SeqLevelLoadRelationInfo.generated.h"

UCLASS(Blueprintable)
class UBGWDataAsset_SeqLevelLoadRelationInfo : public UBGWSaveCheckDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FSeqLevelRelationInfo> LevelRelationInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FMovieRelationInfoCollection> MovieRelationInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FRelationLevelInfo> RelationDescriptions;
    
    UBGWDataAsset_SeqLevelLoadRelationInfo();

};

