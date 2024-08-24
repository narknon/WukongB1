#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryGenerator.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "UObject/NoExportTypes.h"
#include "Templates/SubclassOf.h"
#include "GSEQGBase_ProjectedPoint.generated.h"

class AActor;
class UEnvQueryContext;
class UObject;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class B1_API UGSEQGBase_ProjectedPoint : public UEnvQueryGenerator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnvTraceData ProjectionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText GeneratorsActionDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> Context;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> GenerateItemList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnvTraceData TraceData;
    
    UGSEQGBase_ProjectedPoint();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FVector> RunNavRaycastsInCS(const TArray<FVector>& Points, const FVector& SourcePt) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FVector> ProjectAndFilterNavPointsInCS(const TArray<FVector>& Points) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UObject* GetQuerier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DoItemGenerationCS(const TArray<FVector>& ContextLocations) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void AddGeneratedVector(FVector GeneratedVector) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void AddGeneratedActor(AActor* GeneratedActor) const;
    
};

