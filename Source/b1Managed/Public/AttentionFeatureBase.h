#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EAIAttentionFeatureType.h"
#include "AttentionFeatureBase.generated.h"

UCLASS(Blueprintable)
class UAttentionFeatureBase : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAIAttentionFeatureType FeatureType;
    
    UAttentionFeatureBase();

};

