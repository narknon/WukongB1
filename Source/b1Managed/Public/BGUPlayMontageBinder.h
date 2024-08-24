#pragma once
#include "CoreMinimal.h"
#include "BGUFunctionBinder.h"
#include "BGUPlayMontageBinder.generated.h"

class UAnimInstance;
class UAnimMontage;

UCLASS(Blueprintable)
class UBGUPlayMontageBinder : public UBGUFunctionBinder {
    GENERATED_BODY()
public:
    UBGUPlayMontageBinder();

private:
    UFUNCTION(BlueprintCallable)
    void OnBlendOut(int32 _ReqIdx, UAnimInstance* AnimInstance, UAnimMontage* Montage);
    
    UFUNCTION(BlueprintCallable)
    void OnCompleted(int32 _ReqIdx, UAnimInstance* AnimInstance, UAnimMontage* Montage);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnInterrupted(int32 _ReqIdx, UAnimInstance* AnimInstance, UAnimMontage* Montage);
    
};

