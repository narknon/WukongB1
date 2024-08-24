#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CppTestStructOuter.h"
#include "IL2CPPUnitTestStructOuter.h"
#include "IL2CPPStructPersistTest.generated.h"

UCLASS(Blueprintable)
class AIL2CPPStructPersistTest : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIL2CPPUnitTestStructOuter TestStruct;
    
    AIL2CPPStructPersistTest(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void PrintStruct(FCppTestStructOuter Input);
    
};

