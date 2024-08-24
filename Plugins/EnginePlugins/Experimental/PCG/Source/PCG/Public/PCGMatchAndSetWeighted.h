#pragma once
#include "CoreMinimal.h"
#include "PCGMatchAndSetBase.h"
#include "PCGMatchAndSetWeightedEntry.h"
#include "PCGMatchAndSetWeighted.generated.h"

UCLASS(Blueprintable)
class PCG_API UPCGMatchAndSetWeighted : public UPCGMatchAndSetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPCGMatchAndSetWeightedEntry> Entries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldMutateSeed;
    
    UPCGMatchAndSetWeighted();

};

