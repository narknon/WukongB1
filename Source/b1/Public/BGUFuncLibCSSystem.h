#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BGUFuncLibCSSystem.generated.h"

class AActor;
class UBaseActorComp;
class UObject;

UCLASS(Blueprintable)
class B1_API UBGUFuncLibCSSystem : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBGUFuncLibCSSystem();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UObject* CSGetReadOnlyData(AActor* OwnerActor, UClass* Cls);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UObject* CSGetDataByClass(UBaseActorComp* Comp, UClass* Cls);
    
};

