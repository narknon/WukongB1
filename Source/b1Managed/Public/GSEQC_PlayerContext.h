#pragma once
#include "CoreMinimal.h"
#include "GSEQCBase.h"
#include "GSEQC_PlayerContext.generated.h"

class AActor;
class UObject;

UCLASS(Blueprintable, EditInlineNew)
class UGSEQC_PlayerContext : public UGSEQCBase {
    GENERATED_BODY()
public:
    UGSEQC_PlayerContext();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ProvideActorsSetCS(UObject* QuerierObject, AActor* QuerierActor) const;
    
};

