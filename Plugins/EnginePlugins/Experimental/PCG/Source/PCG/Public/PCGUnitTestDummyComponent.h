#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PCGUnitTestDummyComponent.generated.h"

UCLASS(Blueprintable, HideDropdown, MinimalAPI, NotPlaceable, Transient, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPCGUnitTestDummyComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IntProperty;
    
    UPCGUnitTestDummyComponent(const FObjectInitializer& ObjectInitializer);

};

