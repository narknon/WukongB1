#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GSEQGBase_ProjectedPoint.h"
#include "GSEQG_LandingPointGenerator.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UGSEQG_LandingPointGenerator : public UGSEQGBase_ProjectedPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExtentX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExtentY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpawnPointNumPerXDir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpawnPointNumPerYDir;
    
    UGSEQG_LandingPointGenerator();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DoItemGenerationCS(const TArray<FVector>& ContextLocations) const;
    
};

