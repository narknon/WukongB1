#pragma once
#include "CoreMinimal.h"
#include "AutoTest_Template.h"
#include "GetTamerMethod.h"
#include "AutoTest_NiagaraPerformance.generated.h"

class UBGWDataAsset_TamerListConfig;

UCLASS(Blueprintable)
class UAutoTest_NiagaraPerformance : public UAutoTest_Template {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    GetTamerMethod TestType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> SkillIDBlackList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBGWDataAsset_TamerListConfig* TamerList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 QuitEditorPerUnit: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TamerString;
    
    UAutoTest_NiagaraPerformance();

};

