#pragma once
#include "CoreMinimal.h"
#include "PCGSettingsInterface.h"
#include "PCGSettingsOverridableParam.h"
#include "PCGSettings.generated.h"

UCLASS(Abstract, Blueprintable)
class PCG_API UPCGSettings : public UPCGSettingsInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Seed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FString> FilterOnTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPassThroughFilteredOutInputs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FString> TagsAppliedOnOutput;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bUseSeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPCGSettingsOverridableParam> CachedOverridableParams;
    
public:
    UPCGSettings();

};

