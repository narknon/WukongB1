#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EGSAKBObjType.h"
#include "GSAnimKeyStateData.h"
#include "GSAKObjectEasingOneToOneStateData.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FGSAKObjectEasingOneToOneStateData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* TargetObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGSAKBObjType ObjType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid BindedGuid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsSubActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGSAnimKeyStateData BeginStateData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGSAnimKeyStateData EndStateData;
    
    GSANIMATIONKEYBLENDER_API FGSAKObjectEasingOneToOneStateData();
};

