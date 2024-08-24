#pragma once
#include "CoreMinimal.h"
#include "Components/Image.h"
#include "MatCommParams.h"
#include "GSImage.generated.h"

UCLASS(Blueprintable)
class UGSImage : public UImage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 UseTimer: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMatCommParams CommParams;
    
    UGSImage();

    UFUNCTION(BlueprintCallable)
    void SetUseTimer(bool InUseTimer);
    
    UFUNCTION(BlueprintCallable)
    void GSOnConstruct();
    
    UFUNCTION(BlueprintCallable)
    void SetCommParams(FMatCommParams InCommParams);
    
};

