#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BGWObjectExtend.generated.h"

UCLASS(Abstract, Blueprintable)
class B1_API UBGWObjectExtend : public UObject {
    GENERATED_BODY()
public:
    UBGWObjectExtend();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPropertyChanged(const FString& MemberName, const FString& PropertyName);
    
};

