#pragma once
#include "CoreMinimal.h"
#include "EPCGMetadataTypes.h"
#include "EPCGMetadataTypesConstantStructStringMode.h"
#include "PCGMatchAndSetBase.h"
#include "PCGMatchAndSetWeightedByCategoryEntryList.h"
#include "PCGMatchAndSetWeightedByCategory.generated.h"

UCLASS(Blueprintable)
class PCG_API UPCGMatchAndSetWeightedByCategory : public UPCGMatchAndSetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CategoryAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGMetadataTypes CategoryType;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGMetadataTypesConstantStructStringMode CategoryStringMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPCGMatchAndSetWeightedByCategoryEntryList> Categories;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldMutateSeed;
    
    UPCGMatchAndSetWeightedByCategory();

};

