#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TestQueueData.generated.h"

class UNiagaraComponent;

UCLASS(Blueprintable)
class UTestQueueData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UNiagaraComponent*> NCs;
    
    UTestQueueData();

};

