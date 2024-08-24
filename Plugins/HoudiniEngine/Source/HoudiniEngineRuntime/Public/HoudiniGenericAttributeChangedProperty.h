#pragma once
#include "CoreMinimal.h"
#include "HoudiniGenericAttributeChangedProperty.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct HOUDINIENGINERUNTIME_API FHoudiniGenericAttributeChangedProperty {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* Object;
    
    FHoudiniGenericAttributeChangedProperty();
};

