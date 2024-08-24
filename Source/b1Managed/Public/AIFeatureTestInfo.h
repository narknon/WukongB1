#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CheckAngleTest.h"
#include "DistanceTest.h"
#include "EAIAttentionFeatureType.h"
#include "PointTestType.h"
#include "AIFeatureTestInfo.generated.h"

UCLASS(Blueprintable)
class UAIFeatureTestInfo : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EAIAttentionFeatureType> RequiredFeatureList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> InverseList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<PointTestType> FeatureTestList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCheckAngleTest> CheckAngleTestList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDistanceTest DistanceTest;
    
    UAIFeatureTestInfo();

};

