#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryManager.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "BUE_RunEQSFinishDelegate.h"
#include "EBGURunEQSObjReason.h"
#include "GSEQSExParam.h"
#include "GSEnvNamedValue.h"
#include "BGUEQSObject.generated.h"

class AActor;
class UEnvQuery;

UCLASS(Blueprintable)
class B1_API UBGUEQSObject : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* EnvQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnvQueryRequest EvnQueryReq;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* QuerierObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FGSEQSExParam> Req_ExParamMap;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBUE_RunEQSFinish FBUE_RunEQSFinish;
    
    UBGUEQSObject();

    UFUNCTION(BlueprintCallable)
    int32 EQSRun(const FString& EQSPath, AActor* Querier, EBGURunEQSObjReason Reason, FGSEQSExParam _ExParam);
    
    UFUNCTION(BlueprintCallable)
    int32 EQSObjRunWithCustomParams(const UEnvQuery* EnvQueryObj, AActor* Querier, EBGURunEQSObjReason Reason, const TArray<FGSEnvNamedValue>& NamedParams);
    
    UFUNCTION(BlueprintCallable)
    void EQSObjRunInstantWithCustomParams(const UEnvQuery* EnvQueryObj, AActor* Querier, const TArray<FGSEnvNamedValue>& NamedParams, TArray<FVector>& Locations, TArray<float>& Scores);
    
    UFUNCTION(BlueprintCallable)
    void EQSObjRunInstant(const UEnvQuery* EnvQueryObj, AActor* Querier, TArray<FVector>& Locations, TArray<float>& Scores);
    
    UFUNCTION(BlueprintCallable)
    int32 EQSObjRun(const UEnvQuery* EnvQueryObj, AActor* Querier, EBGURunEQSObjReason Reason, FGSEQSExParam _ExParam);
    
};

