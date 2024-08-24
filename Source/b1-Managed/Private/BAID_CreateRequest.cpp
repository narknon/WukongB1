#include "BAID_CreateRequest.h"

UBAID_CreateRequest::UBAID_CreateRequest() {
    this->AIRequestType = EAIRequestType::MoveToLoc;
    this->IsRandomPoint = false;
    this->PointGenBaseType = PointGenBaseType::OwnCharacter;
}


