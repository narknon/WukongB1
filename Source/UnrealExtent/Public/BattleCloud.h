#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BattleCloud.generated.h"

UCLASS(Blueprintable)
class UNREALEXTENT_API ABattleCloud : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableSim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MipmapDistanceScale;
    
    ABattleCloud(const FObjectInitializer& ObjectInitializer);

};

