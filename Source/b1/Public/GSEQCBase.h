#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryContext.h"
#include "UObject/NoExportTypes.h"
#include "EBGUEQCQueryType.h"
#include "GSEQCBase.generated.h"

class AActor;
class UObject;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class B1_API UGSEQCBase : public UEnvQueryContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBGUEQCQueryType EQCQueryType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* SingleActorResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SingleLocationResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ActorsSetResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> LocationsSetResult;
    
    UGSEQCBase();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ProvideSingleLocationCS(UObject* QuerierObject, AActor* QuerierActor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ProvideSingleActorCS(UObject* QuerierObject, AActor* QuerierActor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ProvideLocationsSetCS(UObject* QuerierObject, AActor* QuerierActor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ProvideActorsSetCS(UObject* QuerierObject, AActor* QuerierActor) const;
    
};

