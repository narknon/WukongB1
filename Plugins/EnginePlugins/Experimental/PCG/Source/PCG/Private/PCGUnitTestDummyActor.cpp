#include "PCGUnitTestDummyActor.h"

APCGUnitTestDummyActor::APCGUnitTestDummyActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IntProperty = 0;
    this->FloatProperty = 0.00f;
    this->Int64Property = 0;
    this->DoubleProperty = 0.00f;
    this->BoolProperty = false;
    this->EnumProperty = EPCGUnitTestDummyEnum::One;
    this->ClassProperty = AActor::StaticClass();
    this->ObjectProperty = NULL;
}


