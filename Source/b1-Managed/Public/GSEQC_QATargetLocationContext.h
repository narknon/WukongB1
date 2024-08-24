#pragma once
#include "CoreMinimal.h"
#include "GSEQCBase.h"
#include "GSEQC_QATargetLocationContext.generated.h"

class AActor;
class UObject;

UCLASS(Blueprintable, EditInlineNew)
class UGSEQC_QATargetLocationContext : public UGSEQCBase {
    GENERATED_BODY()
public:
    UGSEQC_QATargetLocationContext();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ProvideLocationsSetCS(UObject* QuerierObject, AActor* QuerierActor) const;
    
};

