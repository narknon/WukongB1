#pragma once
#include "CoreMinimal.h"
#include "BGUAreaBase.h"
#include "TamerStrategyArea.h"
#include "BGUTamerConfigArea.generated.h"

UCLASS(Blueprintable)
class ABGUTamerConfigArea : public ABGUAreaBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TamerStrategyArea TamerStrategyArea;
    
    ABGUTamerConfigArea(const FObjectInitializer& ObjectInitializer);

};

