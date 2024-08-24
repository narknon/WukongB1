#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BGURootMotionSourceObject_Base.generated.h"

class UCharacterMovementComponent;

UCLASS(Blueprintable)
class B1_API UBGURootMotionSourceObject_Base : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCharacterMovementComponent* CharacterMovement;
    
public:
    UBGURootMotionSourceObject_Base();

    UFUNCTION(BlueprintCallable)
    void RemoveRootMotionSource();
    
    UFUNCTION(BlueprintCallable)
    void Init(UCharacterMovementComponent* MoveComp, const FName& InInstanceName);
    
};

