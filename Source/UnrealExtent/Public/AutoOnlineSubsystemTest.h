#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AutoOnlineSubsystemTest.generated.h"

UCLASS(Blueprintable)
class UNREALEXTENT_API UAutoOnlineSubsystemTest : public UObject {
    GENERATED_BODY()
public:
    UAutoOnlineSubsystemTest();

    UFUNCTION(BlueprintCallable)
    static void TestLogin();
    
    UFUNCTION(BlueprintCallable)
    static void TestGSSdkAuthToken();
    
};

