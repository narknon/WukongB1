#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CheckAngleTest.h"
#include "DistanceTest.h"
#include "PointGenBaseType.h"
#include "PointTestType.h"
#include "RingPointGenerate.h"
#include "AIPointTestInfo.generated.h"

UCLASS(Blueprintable)
class UAIPointTestInfo : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRingPointGenerate RingPointGenerate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<PointTestType> PointTestList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCheckAngleTest> CheckAngleTestList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDistanceTest DistanceTest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    PointGenBaseType PointGenBaseType;
    
    UAIPointTestInfo();

};

