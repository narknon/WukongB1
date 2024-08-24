#pragma once
#include "CoreMinimal.h"
#include "GSEQCBase.h"
#include "GSEQC_CachedGroupAIHotZonePoint.generated.h"

class AActor;
class UObject;

UCLASS(Blueprintable, EditInlineNew)
class UGSEQC_CachedGroupAIHotZonePoint : public UGSEQCBase {
    GENERATED_BODY()
public:
    UGSEQC_CachedGroupAIHotZonePoint();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ProvideSingleLocationCS(UObject* QuerierObject, AActor* QuerierActor) const;
    
};

