#pragma once
#include "CoreMinimal.h"
#include "GameInstanceSystemBaseUObj.h"
#include "BGWConsoleCommands.generated.h"

UCLASS(Blueprintable)
class UBGWConsoleCommands : public UGameInstanceSystemBaseUObj {
    GENERATED_BODY()
public:
    UBGWConsoleCommands();

private:
    UFUNCTION(BlueprintCallable)
    static void GenerateArrow();
    
};

