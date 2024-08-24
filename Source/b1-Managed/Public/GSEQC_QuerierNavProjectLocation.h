#pragma once
#include "CoreMinimal.h"
#include "GSEQCBase.h"
#include "GSEQC_QuerierNavProjectLocation.generated.h"

class AActor;
class UObject;

UCLASS(Blueprintable, EditInlineNew)
class UGSEQC_QuerierNavProjectLocation : public UGSEQCBase {
    GENERATED_BODY()
public:
    UGSEQC_QuerierNavProjectLocation();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ProvideLocationsSetCS(UObject* QuerierObject, AActor* QuerierActor) const;
    
};

