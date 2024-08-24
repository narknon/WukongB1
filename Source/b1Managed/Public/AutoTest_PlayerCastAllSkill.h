#pragma once
#include "CoreMinimal.h"
#include "AutoTest_Template.h"
#include "AutoTest_PlayerCastAllSkill.generated.h"

UCLASS(Blueprintable)
class UAutoTest_PlayerCastAllSkill : public UAutoTest_Template {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> RoleDataConfigIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> SkillIDBlackList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartIndex;
    
    UAutoTest_PlayerCastAllSkill();

};

