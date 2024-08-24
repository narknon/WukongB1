#pragma once
#include "CoreMinimal.h"
#include "EPCGFilterByTagOperation.h"
#include "PCGSettings.h"
#include "PCGFilterByTagSettings.generated.h"

UCLASS(Blueprintable)
class PCG_API UPCGFilterByTagSettings : public UPCGSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGFilterByTagOperation Operation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SelectedTags;
    
    UPCGFilterByTagSettings();

};

