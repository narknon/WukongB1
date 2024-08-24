#pragma once
#include "CoreMinimal.h"
#include "DoNNavigationDebugParams.h"
#include "DoNNavigationQueryData.h"
#include "DoNNavigationQueryParams.h"
#include "DonNavigationDynamicCollisionPayload.h"
#include "BAIT_Base.h"
#include "EBTTargetType.h"
#include "BAIT_FlyMoveTo.generated.h"

UCLASS(Blueprintable)
class UBAIT_FlyMoveTo : public UBAIT_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBTTargetType BTTargetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumProximityRequired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDoNNavigationQueryParams QueryParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDoNNavigationDebugParams DebugParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bVisualizePawnAsVoxels: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bTeleportToDestinationUponFailure: 1;
    
    UBAIT_FlyMoveTo();

    UFUNCTION(BlueprintCallable)
    void Pathfinding_OnFinish(FDoNNavigationQueryData Data);
    
    UFUNCTION(BlueprintCallable)
    void Pathfinding_OnDynamicCollisionAlert(FDonNavigationDynamicCollisionPayload Data);
    
};

