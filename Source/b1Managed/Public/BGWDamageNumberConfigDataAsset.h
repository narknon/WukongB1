#pragma once
#include "CoreMinimal.h"
#include "BGWDataAsset.h"
#include "DamageNumberType.h"
#include "Templates/SubclassOf.h"
#include "BGWDamageNumberConfigDataAsset.generated.h"

class UUserWidget;

UCLASS(Blueprintable)
class UBGWDamageNumberConfigDataAsset : public UBGWDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<DamageNumberType, TSubclassOf<UUserWidget>> DamageUIMap;
    
    UBGWDamageNumberConfigDataAsset();

};

