#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GSEQGBase_ProjectedPoint.h"
#include "GSEQG_SyncAnimationGuestPointGenerator.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UGSEQG_SyncAnimationGuestPointGenerator : public UGSEQGBase_ProjectedPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartSyncGuestDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BeforeSyncGuestMoveDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CirclePointsCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GuestUnitGuid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngleCostWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceCostWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDrawDebug: 1;
    
    UGSEQG_SyncAnimationGuestPointGenerator();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DoItemGenerationCS(const TArray<FVector>& ContextLocations) const;
    
};

