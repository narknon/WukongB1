#pragma once
#include "CoreMinimal.h"
#include "BGUCharacterMovementComponent.h"
#include "BGUSpiderMovementComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class B1_API UBGUSpiderMovementComponent : public UBGUCharacterMovementComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOnPlatform;
    
    UBGUSpiderMovementComponent(const FObjectInitializer& ObjectInitializer);

};

