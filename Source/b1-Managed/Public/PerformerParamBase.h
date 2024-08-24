#pragma once
#include "CoreMinimal.h"
#include "CalliopeGuid.h"
#include "BGWObjectExtend.h"
#include "PerformerParamType.h"
#include "PerformerParamBase.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class UPerformerParamBase : public UBGWObjectExtend {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    PerformerParamType ParamType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCalliopeGuid ConfigGuid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParamName;
    
    UPerformerParamBase();

};

