#pragma once
#include "CoreMinimal.h"
#include "PCGExternalDataSettings.h"
#include "PCGLoadDataTableSettings.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class PCG_API UPCGLoadDataTableSettings : public UPCGExternalDataSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> DataTable;
    
    UPCGLoadDataTableSettings();

};

