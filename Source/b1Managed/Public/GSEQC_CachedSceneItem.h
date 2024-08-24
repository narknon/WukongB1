#pragma once
#include "CoreMinimal.h"
#include "GSEQCBase.h"
#include "GSEQC_CachedSceneItem.generated.h"

class AActor;
class UObject;

UCLASS(Blueprintable, EditInlineNew)
class UGSEQC_CachedSceneItem : public UGSEQCBase {
    GENERATED_BODY()
public:
    UGSEQC_CachedSceneItem();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ProvideActorsSetCS(UObject* QuerierObject, AActor* QuerierActor) const;
    
};

