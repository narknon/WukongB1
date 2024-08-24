#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "PCGEngineSettings.generated.h"

UCLASS(Blueprintable, Config=EditorPerProjectUserSettings)
class PCG_API UPCGEngineSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector VolumeScale;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGenerateOnDrop;
    
    UPCGEngineSettings();

};

