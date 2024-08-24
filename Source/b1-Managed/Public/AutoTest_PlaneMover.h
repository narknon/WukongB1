#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AutoTest_Template.h"
#include "AutoTest_PlaneMover.generated.h"

UCLASS(Blueprintable)
class UAutoTest_PlaneMover : public UAutoTest_Template {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FVector> StartPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 HasMaxClampValue: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxClampValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 HasMinClampValue: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinClampValue;
    
    UAutoTest_PlaneMover();

};

