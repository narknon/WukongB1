#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "JavascriptMemoryObject.generated.h"

UCLASS(Abstract, Blueprintable)
class V8_API UJavascriptMemoryObject : public UObject {
    GENERATED_BODY()
public:
    UJavascriptMemoryObject();

};

