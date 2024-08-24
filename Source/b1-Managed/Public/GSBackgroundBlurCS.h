#pragma once
#include "CoreMinimal.h"
#include "Components/BackgroundBlur.h"
#include "MatCommParams.h"
#include "GSBackgroundBlurCS.generated.h"

UCLASS(Blueprintable)
class UGSBackgroundBlurCS : public UBackgroundBlur {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMatCommParams CommParams;
    
    UGSBackgroundBlurCS();

    UFUNCTION(BlueprintCallable)
    void GSOnConstruct();
    
    UFUNCTION(BlueprintCallable)
    void SetCommParams(FMatCommParams InCommParams);
    
};

