#pragma once
#include "CoreMinimal.h"
#include "EPCGMetadataTypes.h"
#include "EPCGMetadataTypesConstantStructStringMode.h"
#include "PCGMatchAndSetBase.h"
#include "PCGMatchAndSetByAttributeEntry.h"
#include "PCGMatchAndSetByAttribute.generated.h"

UCLASS(Blueprintable)
class PCG_API UPCGMatchAndSetByAttribute : public UPCGMatchAndSetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MatchSourceAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGMetadataTypes MatchSourceType;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGMetadataTypesConstantStructStringMode MatchSourceStringMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPCGMatchAndSetByAttributeEntry> Entries;
    
    UPCGMatchAndSetByAttribute();

};

