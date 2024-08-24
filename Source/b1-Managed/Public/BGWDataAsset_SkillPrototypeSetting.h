#pragma once
#include "CoreMinimal.h"
#include "BGWDataAsset.h"
#include "BGWDataAsset_SkillPrototypeSetting.generated.h"

class UAnimMontage;

UCLASS(Blueprintable)
class UBGWDataAsset_SkillPrototypeSetting : public UBGWDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> AnimMontages;
    
    UBGWDataAsset_SkillPrototypeSetting();

};

