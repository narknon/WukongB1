#pragma once
#include "CoreMinimal.h"
#include "BAID_Base.h"
#include "BAID_BulletNumCheck.generated.h"

UCLASS(Blueprintable)
class UBAID_BulletNumCheck : public UBAID_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ProjectileIDFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UperNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DestroyTimeFilter;
    
    UBAID_BulletNumCheck();

};

