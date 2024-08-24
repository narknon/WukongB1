#pragma once
#include "CoreMinimal.h"
#include "BGWDataAsset.h"
#include "MontageTestUnit.h"
#include "UBGWTestTaskAnim.generated.h"

class UAnimMontage;

UCLASS(Blueprintable)
class UUBGWTestTaskAnim : public UBGWDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> MontageTestList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMontageTestUnit> MontageTestListWithDesc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> SeqTestList;
    
    UUBGWTestTaskAnim();

};

