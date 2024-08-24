#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "AsyncLineTraceReq.h"
#include "AsyncLineTraceSingleResult.h"
#include "BGUAsyncLineTraceObject.generated.h"

class AActor;
class UBGUAsyncLineTraceObject;

UCLASS(Blueprintable)
class UNREALEXTENT_API UBGUAsyncLineTraceObject : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> IgnoreActors;
    
    UBGUAsyncLineTraceObject();

    UFUNCTION(BlueprintCallable)
    static void RequestAsyncLineTraceByObjectTypeSingleStatic(UBGUAsyncLineTraceObject* InLineTraceObject, int32 ReqID, FVector Start, FVector End, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool bTraceComplex, bool bDebug);
    
    UFUNCTION(BlueprintCallable)
    void RequestAsyncLineTraceByObjectTypeSingle_Batch(const TArray<FAsyncLineTraceReq>& ReqList, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool bTraceComplex, bool bDebug);
    
    UFUNCTION(BlueprintCallable)
    void RequestAsyncLineTraceByObjectTypeSingle(int32 ReqID, FVector Start, FVector End, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool bTraceComplex, bool bDebug);
    
    UFUNCTION(BlueprintCallable)
    static void RequestAsyncLineTraceByChannelSingleStatic(UBGUAsyncLineTraceObject* InLineTraceObject, int32 ReqID, FVector Start, FVector End, TEnumAsByte<ECollisionChannel> TraceChannel, bool bTraceComplex, bool bDebug);
    
    UFUNCTION(BlueprintCallable)
    void RequestAsyncLineTraceByChannelSingle_Batch(const TArray<FAsyncLineTraceReq>& ReqList, TEnumAsByte<ECollisionChannel> TraceChannel, bool bTraceComplex, bool bDebug);
    
    UFUNCTION(BlueprintCallable)
    void RequestAsyncLineTraceByChannelSingle(int32 ReqID, FVector Start, FVector End, TEnumAsByte<ECollisionChannel> TraceChannel, bool bTraceComplex, bool bDebug);
    
    UFUNCTION(BlueprintCallable)
    void RequestAsyncLineTraceByChannelOnlyCheck(int32 ReqID, FVector Start, FVector End, TEnumAsByte<ECollisionChannel> TraceChannel, bool bTraceComplex, bool bDebug);
    
    UFUNCTION(BlueprintCallable)
    int32 GetAndCleanLineTraceResults(TArray<FAsyncLineTraceSingleResult>& OutAsyncLineTraceResults);
    
};

