#pragma once
#include "CoreMinimal.h"
#include "GSEQCBase.h"
#include "GSEQC_SkillBaseTargetContext.generated.h"

class AActor;
class UObject;

UCLASS(Blueprintable, EditInlineNew)
class UGSEQC_SkillBaseTargetContext : public UGSEQCBase {
    GENERATED_BODY()
public:
    UGSEQC_SkillBaseTargetContext();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ProvideActorsSetCS(UObject* QuerierObject, AActor* QuerierActor) const;
    
};

