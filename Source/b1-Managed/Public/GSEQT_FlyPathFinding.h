#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/Tests/EnvQueryTest_Pathfinding.h"
#include "UObject/NoExportTypes.h"
#include "GSEQTBase.h"
#include "GSEnvQueryTestItem.h"
#include "GSEQT_FlyPathFinding.generated.h"

class AActor;

UCLASS(Blueprintable)
class UGSEQT_FlyPathFinding : public UGSEQTBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EEnvTestPathfinding::Type TestMode;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxIterationCount;
    
    UGSEQT_FlyPathFinding();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PreProcessItems(const TArray<AActor*>& ContextActors, const TArray<FVector>& ContextLocations) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PostProcessItems() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPropertyChanged(const FString& MemberName, const FString& PropertyName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldPrepareContext() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetDescriptionTitleCS() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetDescriptionDetailsCS() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ProcessCustomItemScoreCS(const FGSEnvQueryTestItem& Item) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldUseCustomItemScore() const;
    
};

