#pragma once
#include "CoreMinimal.h"
#include "EPCGMetadataTypes.h"
#include "EPCGMetadataTypesConstantStructStringMode.h"
#include "PCGAttributePropertyOutputSelector.h"
#include "PCGSettings.h"
#include "Templates/SubclassOf.h"
#include "PCGPointMatchAndSetSettings.generated.h"

class UPCGMatchAndSetBase;

UCLASS(Blueprintable)
class PCG_API UPCGPointMatchAndSetSettings : public UPCGSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    TSubclassOf<UPCGMatchAndSetBase> MatchAndSetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPCGMatchAndSetBase* MatchAndSetInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGAttributePropertyOutputSelector SetTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGMetadataTypes SetTargetType;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGMetadataTypesConstantStructStringMode SetTargetStringMode;
    
    UPCGPointMatchAndSetSettings();

    UFUNCTION(BlueprintCallable)
    void SetMatchAndSetType(TSubclassOf<UPCGMatchAndSetBase> InMatchAndSetType);
    
};

