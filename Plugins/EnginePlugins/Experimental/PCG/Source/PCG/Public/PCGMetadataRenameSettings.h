#pragma once
#include "CoreMinimal.h"
#include "PCGSettings.h"
#include "PCGMetadataRenameSettings.generated.h"

UCLASS(Blueprintable)
class PCG_API UPCGMetadataRenameSettings : public UPCGSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttributeToRename;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NewAttributeName;
    
    UPCGMetadataRenameSettings();

};

