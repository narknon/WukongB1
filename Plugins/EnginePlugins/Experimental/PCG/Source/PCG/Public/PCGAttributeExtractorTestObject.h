#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PCGAttributeExtractorTestObject.generated.h"

UCLASS(Blueprintable)
class UPCGAttributeExtractorTestObject : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double DoubleValue;
    
    UPCGAttributeExtractorTestObject();

};

