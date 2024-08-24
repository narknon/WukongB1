#pragma once
#include "CoreMinimal.h"
#include "GSEQCBase.h"
#include "GSEQC_CaptainContext.generated.h"

class AActor;
class UObject;

UCLASS(Blueprintable, EditInlineNew)
class UGSEQC_CaptainContext : public UGSEQCBase {
    GENERATED_BODY()
public:
    UGSEQC_CaptainContext();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ProvideSingleActorCS(UObject* QuerierObject, AActor* QuerierActor) const;
    
};

