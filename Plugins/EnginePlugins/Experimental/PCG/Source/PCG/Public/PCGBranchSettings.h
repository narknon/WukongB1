#pragma once
#include "CoreMinimal.h"
#include "PCGSettings.h"
#include "PCGBranchSettings.generated.h"

UCLASS(Blueprintable)
class UPCGBranchSettings : public UPCGSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOutputToB;
    
    UPCGBranchSettings();

};

