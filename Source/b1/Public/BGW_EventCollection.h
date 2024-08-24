#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BWE_DemoEnterCloudPlatformDelegate.h"
#include "BWE_DemoTianJiangBornDelegate.h"
#include "BWE_OldMKBornDelegate.h"
#include "BWE_TestWorldEventDelegate.h"
#include "BWE_TianBing04DeadDelegate.h"
#include "BWE_TianJiangQTEEndDelegate.h"
#include "BWE_UnitBeAttackDelegate.h"
#include "BGW_EventCollection.generated.h"

UCLASS(Blueprintable)
class UBGW_EventCollection : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBWE_TestWorldEvent TestWorldEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBWE_OldMKBorn FBWE_OldMKBorn;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBWE_TianBing04Dead FBWE_TianBing04Dead;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBWE_UnitBeAttack FBWE_UnitBeAttack;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBWE_TianJiangQTEEnd FBWE_TianJiangQTEEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBWE_DemoTianJiangBorn FBWE_DemoTianJiangBorn;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBWE_DemoEnterCloudPlatform FBWE_DemoEnterCloudPlatform;
    
    UBGW_EventCollection();

};

