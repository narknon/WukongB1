#pragma once
#include "CoreMinimal.h"
#include "EJavascriptEncodingOptions.generated.h"

UENUM(BlueprintType)
namespace EJavascriptEncodingOptions {
    enum Type {
        AutoDetect,
        ForceAnsi,
        ForceUnicode,
        ForceUTF8,
        ForceUTF8WithoutBOM,
    };
}

