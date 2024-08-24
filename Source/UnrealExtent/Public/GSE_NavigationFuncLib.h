#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Templates/SubclassOf.h"
#include "GSE_NavigationFuncLib.generated.h"

class UNavAreaBase;
class UShapeComponent;

UCLASS(Blueprintable)
class UNREALEXTENT_API UGSE_NavigationFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGSE_NavigationFuncLib();

    UFUNCTION(BlueprintCallable)
    static void SetCollisionNavDynamicObstacle(UShapeComponent* Collision, bool bDynamicObstacle);
    
    UFUNCTION(BlueprintCallable)
    static void SetCollisionNavAreaClass(UShapeComponent* Collision, TSubclassOf<UNavAreaBase> AreaClass);
    
};

