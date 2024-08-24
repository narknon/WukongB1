#pragma once
#include "CoreMinimal.h"
#include "EnhancedInputComponent.h"
#include "GSInputComponent.generated.h"

UCLASS(Blueprintable, NonTransient, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GSINPUT_API UGSInputComponent : public UEnhancedInputComponent {
    GENERATED_BODY()
public:
    UGSInputComponent(const FObjectInitializer& ObjectInitializer);

};

