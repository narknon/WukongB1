#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PCSEW_Base.generated.h"

class AActor;

UCLASS(Blueprintable)
class UPCSEW_Base : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Owner;
    
    UPCSEW_Base();

    UFUNCTION(BlueprintCallable)
    void MainThread();
    
};

