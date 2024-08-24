#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GSEQGBase_ProjectedPoint.h"
#include "GSEQG_WanderPointGenerator.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UGSEQG_WanderPointGenerator : public UGSEQGBase_ProjectedPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Dist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Is8Dir: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RandomRangeDist;
    
    UGSEQG_WanderPointGenerator();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DoItemGenerationCS(const TArray<FVector>& ContextLocations) const;
    
};

