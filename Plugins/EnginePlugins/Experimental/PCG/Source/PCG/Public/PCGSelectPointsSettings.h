#pragma once
#include "CoreMinimal.h"
#include "PCGSettings.h"
#include "PCGSelectPointsSettings.generated.h"

UCLASS(Blueprintable)
class PCG_API UPCGSelectPointsSettings : public UPCGSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Ratio;
    
    UPCGSelectPointsSettings();

};

