#pragma once
#include "CoreMinimal.h"
#include "GSInputDisplayArray.generated.h"

class UGSInputDisplayWidget;

USTRUCT(BlueprintType)
struct FGSInputDisplayArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UGSInputDisplayWidget*> Widgets;
    
    GSINPUT_API FGSInputDisplayArray();
};

