#pragma once
#include "CoreMinimal.h"
#include "EPCGGetDataFromActorMode.h"
#include "PCGActorSelectorSettings.h"
#include "PCGSettings.h"
#include "PCGDataFromActorSettings.generated.h"

UCLASS(Blueprintable)
class PCG_API UPCGDataFromActorSettings : public UPCGSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGActorSelectorSettings ActorSelector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGGetDataFromActorMode Mode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMergeSinglePointData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDisplayModeSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ExpectedPins;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PropertyName;
    
    UPCGDataFromActorSettings();

};

