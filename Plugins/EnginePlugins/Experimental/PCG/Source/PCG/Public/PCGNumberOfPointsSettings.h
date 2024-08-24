#pragma once
#include "CoreMinimal.h"
#include "PCGSettings.h"
#include "PCGNumberOfPointsSettings.generated.h"

UCLASS(Blueprintable)
class UPCGNumberOfPointsSettings : public UPCGSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OutputAttributeName;
    
    UPCGNumberOfPointsSettings();

};

