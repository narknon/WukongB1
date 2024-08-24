#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GSEQSExParam.h"
#include "BGUFunctionBinder.h"
#include "BGUEQSFunctionBinder.generated.h"

class UBGUEQSObject;

UCLASS(Blueprintable)
class UBGUEQSFunctionBinder : public UBGUFunctionBinder {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBGUEQSObject* EQSObject;
    
public:
    UBGUEQSFunctionBinder();

private:
    UFUNCTION(BlueprintCallable)
    void OnEQSFinish(TArray<FVector> Results, TArray<float> Scores, FGSEQSExParam ExParam, int32 QueryID);
    
};

