#pragma once
#include "CoreMinimal.h"
#include "GSEQCBase.h"
#include "GSEQC_SummonContext.generated.h"

class AActor;
class UObject;

UCLASS(Blueprintable, EditInlineNew)
class UGSEQC_SummonContext : public UGSEQCBase {
    GENERATED_BODY()
public:
    UGSEQC_SummonContext();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ProvideActorsSetCS(UObject* QuerierObject, AActor* QuerierActor) const;
    
};

