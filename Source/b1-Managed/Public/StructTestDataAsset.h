#pragma once
#include "CoreMinimal.h"
#include "BGWDataAsset.h"
#include "DBCTestStruct.h"
#include "StructTestDataAsset.generated.h"

class UNiagaraSystem;

UCLASS(Blueprintable)
class UStructTestDataAsset : public UBGWDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDBCTestStruct> TestStructs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UNiagaraSystem*> NiagaraSystems;
    
    UStructTestDataAsset();

};

