#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TestTmp.h"
#include "CSTestC.generated.h"

UCLASS(Blueprintable)
class GSUMGEXT_API UCSTestC : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TestCValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FTestTmp> MapTestA;
    
    UCSTestC();

};

