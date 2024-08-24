#pragma once
#include "CoreMinimal.h"
#include "GSAKMatParamBool.h"
#include "GSAKMatParamScalar.h"
#include "GSAKMatParamVector4.h"
#include "GSAnimKeyCachedMatParamData.generated.h"

USTRUCT(BlueprintType)
struct FGSAnimKeyCachedMatParamData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FGSAKMatParamBool> MatParamBoolMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FGSAKMatParamScalar> MatParamScalarMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FGSAKMatParamVector4> MatParamVector4Map;
    
    GSANIMATIONKEYBLENDER_API FGSAnimKeyCachedMatParamData();
};

