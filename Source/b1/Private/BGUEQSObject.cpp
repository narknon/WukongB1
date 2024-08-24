#include "BGUEQSObject.h"

UBGUEQSObject::UBGUEQSObject() {
    this->EnvQuery = NULL;
    this->QuerierObject = NULL;
}

int32 UBGUEQSObject::EQSRun(const FString& EQSPath, AActor* Querier, EBGURunEQSObjReason Reason, FGSEQSExParam _ExParam) {
    return 0;
}

int32 UBGUEQSObject::EQSObjRunWithCustomParams(const UEnvQuery* EnvQueryObj, AActor* Querier, EBGURunEQSObjReason Reason, const TArray<FGSEnvNamedValue>& NamedParams) {
    return 0;
}

void UBGUEQSObject::EQSObjRunInstantWithCustomParams(const UEnvQuery* EnvQueryObj, AActor* Querier, const TArray<FGSEnvNamedValue>& NamedParams, TArray<FVector>& Locations, TArray<float>& Scores) {
}

void UBGUEQSObject::EQSObjRunInstant(const UEnvQuery* EnvQueryObj, AActor* Querier, TArray<FVector>& Locations, TArray<float>& Scores) {
}

int32 UBGUEQSObject::EQSObjRun(const UEnvQuery* EnvQueryObj, AActor* Querier, EBGURunEQSObjReason Reason, FGSEQSExParam _ExParam) {
    return 0;
}


