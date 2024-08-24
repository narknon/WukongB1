#include "CalliopeParameterMapping.h"

FCalliopeParameterMapping::FCalliopeParameterMapping() {
    this->ParamType = EGsManagedParamType::None;
    this->SequenceID = 0;
    this->TaskStage = 0;
    this->BuffID = 0;
    this->GroupId = 0;
    this->bKeepOriginal = false;
    this->ParameterInt = 0;
}

