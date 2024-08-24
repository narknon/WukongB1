#pragma once
#include "CoreMinimal.h"
#include "BGWDataAsset.h"
#include "DropItemPerfromType.h"
#include "PickingConditionItem.h"
#include "Templates/SubclassOf.h"
#include "UBGWDropItemTemplete.generated.h"

class ABGUDropItemActorCS;
class UBGWDataAsset_B1DBC;
class UCurveVector;
class UEnvQuery;

UCLASS(Blueprintable)
class UUBGWDropItemTemplete : public UBGWDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    DropItemPerfromType TempleteType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABGUDropItemActorCS> BPClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBGWDataAsset_B1DBC* DADropFixed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBGWDataAsset_B1DBC* DAWaitSign;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBGWDataAsset_B1DBC* DAPickedSign;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* DropingCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* PickingCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* EQSTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EQSActivationDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPickingConditionItem> PickingConditionConfig;
    
    UUBGWDropItemTemplete();

};

