#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GSEQGBase_ProjectedPoint.h"
#include "GSEQG_CircleAroundProjectile.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UGSEQG_CircleAroundProjectile : public UGSEQGBase_ProjectedPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ProjectileID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PointNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CircleRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ZOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LeftFvector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RightFvector;
    
    UGSEQG_CircleAroundProjectile();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DoItemGenerationCS(const TArray<FVector>& ContextLocations) const;
    
};

