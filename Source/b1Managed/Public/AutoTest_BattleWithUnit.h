#pragma once
#include "CoreMinimal.h"
#include "AutoTest_Template.h"
#include "Templates/SubclassOf.h"
#include "AutoTest_BattleWithUnit.generated.h"

class ABUTamerActor;

UCLASS(Blueprintable)
class UAutoTest_BattleWithUnit : public UAutoTest_Template {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<ABUTamerActor>> TamerClassList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartIndex;
    
    UAutoTest_BattleWithUnit();

    UFUNCTION(BlueprintCallable)
    void GetTamersInFolder();
    
};

