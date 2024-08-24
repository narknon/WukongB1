#pragma once
#include "CoreMinimal.h"
#include "HoudiniInputObject.h"
#include "HoudiniInputGeometryCollection.generated.h"

UCLASS(Blueprintable)
class HOUDINIENGINERUNTIME_API UHoudiniInputGeometryCollection : public UHoudiniInputObject {
    GENERATED_BODY()
public:
    UHoudiniInputGeometryCollection();

};

