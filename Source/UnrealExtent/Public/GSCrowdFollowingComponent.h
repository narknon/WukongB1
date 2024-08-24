#pragma once
#include "CoreMinimal.h"
#include "Navigation/CrowdFollowingComponent.h"
#include "GSCrowdFollowingComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNREALEXTENT_API UGSCrowdFollowingComponent : public UCrowdFollowingComponent {
    GENERATED_BODY()
public:
    UGSCrowdFollowingComponent(const FObjectInitializer& ObjectInitializer);

};

