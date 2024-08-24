#include "BUS_SpiderOceanMgrComp.h"

UBUS_SpiderOceanMgrComp::UBUS_SpiderOceanMgrComp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SpiderNiagara = NULL;
    this->NiagaraSpline = NULL;
    this->SpiderFollowStartIndex = -1;
    this->NiagaraMoveCurve = NULL;
    this->SpiderDistanceCurve = NULL;
    this->SpiderSpawnPointsSelectCurve = NULL;
    this->SpiderSectorActor = NULL;
    this->SpiderSectorScaleCurve = NULL;
    this->bDrawDebugNiagaraLocation = false;
}


