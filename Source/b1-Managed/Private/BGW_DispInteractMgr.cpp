#include "BGW_DispInteractMgr.h"

UBGW_DispInteractMgr::UBGW_DispInteractMgr() {
    this->DispInteractOwner = NULL;
    this->Landscape = NULL;
    this->LS_HeightMap = NULL;
    this->LS_WeightMap = NULL;
    this->LS_MinX = 0;
    this->LS_MinY = 0;
    this->LS_MaxX = 0;
    this->LS_MaxY = 0;
    this->MaxHeight = 0.00f;
    this->SimulationSize_cm = 0.00f;
    this->InteractiveData_StorageSize_cm = 0.00f;
    this->InteractDistLimitToDispActor = 0.00f;
    this->NS_Landscape_Interactive = NULL;
    this->NS_Landscape_Simulator = NULL;
}


