#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BGUFuncLibGMCS.generated.h"

class ABGUCharacterCS;

UCLASS(Blueprintable)
class UBGUFuncLibGMCS : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBGUFuncLibGMCS();

    UFUNCTION(BlueprintCallable)
    static void TestECSWorldObj(ABGUCharacterCS* Chr);
    
    UFUNCTION(BlueprintCallable)
    static bool IsShenZhenDebug();
    
    UFUNCTION(BlueprintCallable)
    static void PrintTestECSWorldObj(ABGUCharacterCS* Chr);
    
    UFUNCTION(BlueprintCallable)
    static void TestDestroyECSWorldObj(ABGUCharacterCS* Chr);
    
    UFUNCTION(BlueprintCallable)
    static void TestReleaseECSWorldObjRef(ABGUCharacterCS* Chr);
    
};

