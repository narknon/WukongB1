#pragma once
#include "CoreMinimal.h"
#include "GSEQCBase.h"
#include "GSEQC_TeamContext.generated.h"

class AActor;
class UObject;

UCLASS(Blueprintable, EditInlineNew)
class UGSEQC_TeamContext : public UGSEQCBase {
    GENERATED_BODY()
public:
    UGSEQC_TeamContext();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ProvideActorsSetCS(UObject* QuerierObject, AActor* QuerierActor) const;
    
};

