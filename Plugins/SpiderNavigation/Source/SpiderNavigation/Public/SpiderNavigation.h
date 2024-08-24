#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "SpiderNavigation.generated.h"

UCLASS(Blueprintable)
class ASpiderNavigation : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoLoadGrid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DebugLinesThickness;
    
    ASpiderNavigation(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool LoadGrid();
    
    UFUNCTION(BlueprintCallable)
    int32 GetNavNodesCount();
    
    UFUNCTION(BlueprintCallable)
    TArray<FVector> FindPath(FVector Start, FVector End, bool& bFoundCompletePath);
    
    UFUNCTION(BlueprintCallable)
    bool FindNextLocationAndNormal(FVector CurrentLocation, FVector TargetLocation, FVector& NextLocation, FVector& Normal);
    
    UFUNCTION(BlueprintCallable)
    FVector FindClosestNodeNormal(FVector Location);
    
    UFUNCTION(BlueprintCallable)
    FVector FindClosestNodeLocation(FVector Location);
    
    UFUNCTION(BlueprintCallable)
    void DrawDebugRelations();
    
};

