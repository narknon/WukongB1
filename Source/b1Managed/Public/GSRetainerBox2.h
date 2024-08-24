#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GSRetainerBox.h"
#include "GSRetainerBox2.generated.h"

UCLASS(Blueprintable)
class UGSRetainerBox2 : public UGSRetainerBox {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector4 Margin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Scale;
    
    UGSRetainerBox();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnViewWidgetSizeChangedEvent(FVector2D Size);
    
};

