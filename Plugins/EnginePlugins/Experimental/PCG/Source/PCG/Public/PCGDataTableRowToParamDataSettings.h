#pragma once
#include "CoreMinimal.h"
#include "PCGSettings.h"
#include "PCGDataTableRowToParamDataSettings.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class UPCGDataTableRowToParamDataSettings : public UPCGSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RowName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PathOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> DataTable;
    
    UPCGDataTableRowToParamDataSettings();

};

