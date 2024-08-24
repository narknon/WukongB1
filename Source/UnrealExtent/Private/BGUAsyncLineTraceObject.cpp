#include "BGUAsyncLineTraceObject.h"

UBGUAsyncLineTraceObject::UBGUAsyncLineTraceObject() {
}

void UBGUAsyncLineTraceObject::RequestAsyncLineTraceByObjectTypeSingleStatic(UBGUAsyncLineTraceObject* InLineTraceObject, int32 ReqID, FVector Start, FVector End, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool bTraceComplex, bool bDebug) {
}

void UBGUAsyncLineTraceObject::RequestAsyncLineTraceByObjectTypeSingle_Batch(const TArray<FAsyncLineTraceReq>& ReqList, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool bTraceComplex, bool bDebug) {
}

void UBGUAsyncLineTraceObject::RequestAsyncLineTraceByObjectTypeSingle(int32 ReqID, FVector Start, FVector End, const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool bTraceComplex, bool bDebug) {
}

void UBGUAsyncLineTraceObject::RequestAsyncLineTraceByChannelSingleStatic(UBGUAsyncLineTraceObject* InLineTraceObject, int32 ReqID, FVector Start, FVector End, TEnumAsByte<ECollisionChannel> TraceChannel, bool bTraceComplex, bool bDebug) {
}

void UBGUAsyncLineTraceObject::RequestAsyncLineTraceByChannelSingle_Batch(const TArray<FAsyncLineTraceReq>& ReqList, TEnumAsByte<ECollisionChannel> TraceChannel, bool bTraceComplex, bool bDebug) {
}

void UBGUAsyncLineTraceObject::RequestAsyncLineTraceByChannelSingle(int32 ReqID, FVector Start, FVector End, TEnumAsByte<ECollisionChannel> TraceChannel, bool bTraceComplex, bool bDebug) {
}

void UBGUAsyncLineTraceObject::RequestAsyncLineTraceByChannelOnlyCheck(int32 ReqID, FVector Start, FVector End, TEnumAsByte<ECollisionChannel> TraceChannel, bool bTraceComplex, bool bDebug) {
}

int32 UBGUAsyncLineTraceObject::GetAndCleanLineTraceResults(TArray<FAsyncLineTraceSingleResult>& OutAsyncLineTraceResults) {
    return 0;
}


