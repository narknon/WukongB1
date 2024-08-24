#pragma once
#include "CoreMinimal.h"
#include "GSEQCBase.h"
#include "GSEQC_TargetContext.generated.h"

class AActor;
class UObject;

UCLASS(Blueprintable, EditInlineNew)
class UGSEQC_TargetContext : public UGSEQCBase {
    GENERATED_BODY()
public:
    UGSEQC_TargetContext();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ProvideActorsSetCS(UObject* QuerierObject, AActor* QuerierActor) const;
    
};

