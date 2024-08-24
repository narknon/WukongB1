#pragma once
#include "CoreMinimal.h"
#include "BAID_Base.h"
#include "CheckAngleTest.h"
#include "DistanceTest.h"
#include "EAIAttentionFeatureType.h"
#include "EAIRequestType.h"
#include "PointGenBaseType.h"
#include "PointTestType.h"
#include "RingPointGenerate.h"
#include "BAID_CreateRequest.generated.h"

UCLASS(Blueprintable)
class UBAID_CreateRequest : public UBAID_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EAIAttentionFeatureType> RequiredFeatureList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> InverseList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAIRequestType AIRequestType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<PointTestType> FeatureTestList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCheckAngleTest> FeatureCheckAngleTestList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDistanceTest FeatureDistanceTest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRingPointGenerate RingPointGenerate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 IsRandomPoint: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    PointGenBaseType PointGenBaseType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<PointTestType> PointTestList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCheckAngleTest> CheckAngleTestList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDistanceTest DistanceTest;
    
    UBAID_CreateRequest();

};

