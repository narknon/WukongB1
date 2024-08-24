#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "WwiseExternalSourceSettings.generated.h"

UCLASS(Blueprintable, Config=Game)
class WWISESIMPLEEXTERNALSOURCE_API UWwiseExternalSourceSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath MediaInfoTable;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath ExternalSourceDefaultMedia;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDirectoryPath ExternalSourceStagingDirectory;
    
    UWwiseExternalSourceSettings();

};

