#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EAIRequestType.h"
#include "AIRequestBase.generated.h"

class AActor;
class UAIFeatureTestInfo;
class UAIPointTestInfo;

UCLASS(Blueprintable)
class UAIRequestBase : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAIRequestType AIRequestType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* FeatureActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAIPointTestInfo* PointTestInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAIFeatureTestInfo* FeatureTestInfo;
    
    UAIRequestBase();

};

