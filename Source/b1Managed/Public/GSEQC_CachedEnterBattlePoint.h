#pragma once
#include "CoreMinimal.h"
#include "GSEQCBase.h"
#include "GSEQC_CachedEnterBattlePoint.generated.h"

class AActor;
class UObject;

UCLASS(Blueprintable, EditInlineNew)
class UGSEQC_CachedEnterBattlePoint : public UGSEQCBase {
    GENERATED_BODY()
public:
    UGSEQC_CachedEnterBattlePoint();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ProvideSingleLocationCS(UObject* QuerierObject, AActor* QuerierActor) const;
    
};

