#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GCTestA.generated.h"

UCLASS(Blueprintable)
class GSUMGEXT_API UGCTestA : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TestValueA;
    
    UGCTestA();

};

