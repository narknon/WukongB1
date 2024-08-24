#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "V8Config.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Engine)
class V8_API UV8Config : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGenAltPropAccessorForAllProp;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGenGetStructRefArrayFunction;
    
    UV8Config();

};

