#pragma once
#include "CoreMinimal.h"
#include "PCGSettings.h"
#include "PCGDataNumSettings.generated.h"

UCLASS(Blueprintable)
class PCG_API UPCGDataNumSettings : public UPCGSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OutputAttributeName;
    
    UPCGDataNumSettings();

};

