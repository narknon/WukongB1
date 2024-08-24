#pragma once
#include "CoreMinimal.h"
#include "AutoTest_Template.h"
#include "AutoTest_BianShenCastAllSkill.generated.h"

UCLASS(Blueprintable)
class UAutoTest_BianShenCastAllSkill : public UAutoTest_Template {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> SkillIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartIndex;
    
    UAutoTest_BianShenCastAllSkill();

};

