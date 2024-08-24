#pragma once
#include "CoreMinimal.h"
#include "GsManagedAiConversationID.h"
#include "GsManagedArchiveLabel.h"
#include "GsManagedAssociationOnFightSkillID.h"
#include "GsManagedAssociationUnitConfigID.h"
#include "GsManagedBuffID.h"
#include "GsManagedDynamicObstacle.h"
#include "GsManagedFollowPartnerConfigID.h"
#include "GsManagedGroupID.h"
#include "GsManagedGroupUnit.h"
#include "GsManagedIdleAMIdx.h"
#include "GsManagedInteractGroupID.h"
#include "GsManagedInteractor.h"
#include "GsManagedLeisureAnimIndex.h"
#include "GsManagedNPCUnit.h"
#include "GsManagedOverlap.h"
#include "GsManagedSequenceID.h"
#include "GsManagedSpawner.h"
#include "GsManagedStreamingLevel.h"
#include "GsManagedStreamingLevelStateConfig.h"
#include "GsManagedTaskLine.h"
#include "GsManagedTaskStage.h"
#include "GsManagedTeamID.h"
#include "GsManagedUnit.h"
#include "CalliopeParameters.generated.h"

USTRUCT(BlueprintType)
struct CALLIOPE_API FCalliopeParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGsManagedFollowPartnerConfigID> FollowPartnerConfigIDCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGsManagedAssociationUnitConfigID> AssociationUnitConfigIDCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGsManagedAssociationOnFightSkillID> AssociationOnFightSkillIDCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGsManagedSequenceID> SequenceIDCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGsManagedTaskStage> TaskStageCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGsManagedTaskLine> TaskLineCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGsManagedBuffID> BuffIDCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGsManagedArchiveLabel> ArchiveLabelCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGsManagedGroupID> GroupIDCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGsManagedAiConversationID> AiConversationIDCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGsManagedTeamID> TeamIDCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGsManagedIdleAMIdx> IdleAMIdxCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGsManagedLeisureAnimIndex> LeisureAnimIndexCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGsManagedInteractGroupID> InteractGroupIDCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGsManagedDynamicObstacle> DynamicObstacleCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGsManagedOverlap> OverlapCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGsManagedInteractor> InteractorCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGsManagedSpawner> SpawnerCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGsManagedUnit> UnitCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGsManagedGroupUnit> GroupUnitCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGsManagedNPCUnit> NPCUnitCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGsManagedStreamingLevel> StreamingLevelCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGsManagedStreamingLevelStateConfig> StreamingLevelStateConfigCollection;
    
    FCalliopeParameters();
};

