#pragma once
#include "CoreMinimal.h"
#include "BED_ComboNode.h"
#include "BED_ComboNode_State.generated.h"

UCLASS(Abstract, Blueprintable)
class UBED_ComboNode_State : public UBED_ComboNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, bool> OptionalPins;
    
    UBED_ComboNode_State();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PostLoadInCS();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PostPropertyChanged(const FString& MemberName, const FString& PropertyName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<FName> GetContextOutputsInCS();
    
};

