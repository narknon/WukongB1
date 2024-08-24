#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "TestSaveGameModule.generated.h"

class UObject;

UCLASS(Blueprintable)
class UTestSaveGameModule : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UserIdx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* TestObj;
    
    UTestSaveGameModule();

};

