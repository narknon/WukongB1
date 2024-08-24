#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/Widget.h"
#include "GSSafeZone.generated.h"

UCLASS(Blueprintable)
class UNREALEXTENT_API UGSSafeZone : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor SafeZoneBrushColor;
    
    UGSSafeZone();

};

