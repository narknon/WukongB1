#include "AIRequestBase.h"

UAIRequestBase::UAIRequestBase() {
    this->AIRequestType = EAIRequestType::MoveToLoc;
    this->FeatureActor = NULL;
    this->PointTestInfo = NULL;
    this->FeatureTestInfo = NULL;
}


