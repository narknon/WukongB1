#include "GSEQGBase_ProjectedPoint.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"
#include "EnvironmentQuery/Items/EnvQueryItemType_Point.h"

UGSEQGBase_ProjectedPoint::UGSEQGBase_ProjectedPoint() {
    this->ItemType = UEnvQueryItemType_Point::StaticClass();
    this->Context = UEnvQueryContext_Querier::StaticClass();
}

TArray<FVector> UGSEQGBase_ProjectedPoint::RunNavRaycastsInCS(const TArray<FVector>& Points, const FVector& SourcePt) const {
    return TArray<FVector>();
}

TArray<FVector> UGSEQGBase_ProjectedPoint::ProjectAndFilterNavPointsInCS(const TArray<FVector>& Points) const {
    return TArray<FVector>();
}

UObject* UGSEQGBase_ProjectedPoint::GetQuerier() const {
    return NULL;
}


void UGSEQGBase_ProjectedPoint::AddGeneratedVector(FVector GeneratedVector) const {
}

void UGSEQGBase_ProjectedPoint::AddGeneratedActor(AActor* GeneratedActor) const {
}


