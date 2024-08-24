#pragma once
#include "CoreMinimal.h"
#include "UObject/Class.h"
#include "PropertyBagPropertyDesc.h"
#include "PropertyBag.generated.h"

UCLASS(Blueprintable, Transient)
class PCG_API UPropertyBag : public UScriptStruct {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPropertyBagPropertyDesc> PropertyDescs;
    
public:
    UPropertyBag();

};

