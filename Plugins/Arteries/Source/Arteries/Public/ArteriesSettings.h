#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ArteriesSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Engine)
class ARTERIES_API UArteriesSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBuildWhenPropertiesChanged;
    
    UArteriesSettings();

};

