#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/Overlay.h"
#include "GSRoundRectQuick.generated.h"

UCLASS(Blueprintable)
class UNREALEXTENT_API UGSRoundRectQuick : public UOverlay {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector4 RadiusCfg;
    
    UGSRoundRectQuick();

};

