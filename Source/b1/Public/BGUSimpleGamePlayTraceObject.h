#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TraceStatResult.h"
#include "BGUSimpleGamePlayTraceObject.generated.h"

UCLASS(Blueprintable)
class B1_API UBGUSimpleGamePlayTraceObject : public UObject {
    GENERATED_BODY()
public:
    UBGUSimpleGamePlayTraceObject();

    UFUNCTION(BlueprintCallable)
    void OnTick(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void OnShutdown();
    
    UFUNCTION(BlueprintCallable)
    void OnInit();
    
    UFUNCTION(BlueprintCallable)
    FTraceStatResult FindTraceStatResult(const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    void AddTraceStatByName(const FString& Name);
    
};

