#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ActorGuidOption.h"
#include "SmartActorGuidObj.generated.h"

class AActor;

UINTERFACE(Blueprintable)
class B1_API USmartActorGuidObj : public UInterface {
    GENERATED_BODY()
};

class B1_API ISmartActorGuidObj : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetActorGuidOptions(const FString& PropertyName, TArray<FActorGuidOption>& OutOptions);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetActorGuid(AActor* InActor, FString& OutActorGuid);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanManageStates();
    
};

