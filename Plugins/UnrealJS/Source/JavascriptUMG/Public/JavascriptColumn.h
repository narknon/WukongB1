#pragma once
#include "CoreMinimal.h"
#include "JavascriptColumn.generated.h"

class UWidget;

USTRUCT(BlueprintType)
struct FJavascriptColumn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Width;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWidget* Widget;
    
    JAVASCRIPTUMG_API FJavascriptColumn();
};

