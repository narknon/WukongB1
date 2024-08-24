#pragma once
#include "CoreMinimal.h"
#include "AutoTest_Template.h"
#include "Templates/SubclassOf.h"
#include "AutoTest_UnitPicTaker.generated.h"

class ABGUCharacter;

UCLASS(Blueprintable)
class UAutoTest_UnitPicTaker : public UAutoTest_Template {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<ABGUCharacter>> UnitClassList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DistanceBetween;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartIndex;
    
    UAutoTest_UnitPicTaker();

    UFUNCTION(BlueprintCallable)
    void GetUnitsInFolder();
    
};

