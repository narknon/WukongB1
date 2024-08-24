#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "UObject/NoExportTypes.h"
#include "GSEnvQueryTestItem.h"
#include "Templates/SubclassOf.h"
#include "GSEQTBase.generated.h"

class AActor;
class UEnvQueryContext;
class UWorld;

UCLASS(Abstract, Blueprintable)
class B1_API UGSEQTBase : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> Context;
    
    UGSEQTBase();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldUseCustomItemScore() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ShouldPrepareContext() const;
    
    UFUNCTION(BlueprintCallable)
    void SetWorkOnFloatValuesCS(bool bWorkOnFloats);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetItemScoreFloat(float Score) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetItemScoreBool(bool bScore) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ProcessItemCS(UWorld* World, const FVector& ItemLocation, AActor* ItemActor, AActor* Querier) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ProcessCustomItemScoreCS(const FGSEnvQueryTestItem& Item) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PreProcessItems(const TArray<AActor*>& ContextActors, const TArray<FVector>& ContextLocations) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PostProcessItems() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPropertyChanged(const FString& MemberName, const FString& PropertyName);
    
    UFUNCTION(BlueprintCallable)
    bool GetWorkOnFloatValuesCS();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FString GetDescriptionTitleCS() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FString GetDescriptionDetailsCS() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ForceItemStatePassed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ForceItemStateFailed() const;
    
};

