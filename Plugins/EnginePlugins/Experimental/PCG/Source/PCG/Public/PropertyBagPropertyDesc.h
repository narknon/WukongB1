#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EPropertyBagPropertyType.h"
#include "PropertyBagContainerTypes.h"
#include "PropertyBagPropertyDesc.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct PCG_API FPropertyBagPropertyDesc {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* ValueTypeObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPropertyBagPropertyType ValueType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPropertyBagContainerTypes ContainerTypes;
    
    FPropertyBagPropertyDesc();
};

