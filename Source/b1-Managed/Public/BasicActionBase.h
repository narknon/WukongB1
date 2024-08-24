#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EAIBasicActionType.h"
#include "BasicActionBase.generated.h"

class ACharacter;
class UAIRequestBase;

UCLASS(Blueprintable)
class UBasicActionBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACharacter* OwnCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAIRequestBase* CurAIRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAIBasicActionType AIBasicActionType;
    
public:
    UBasicActionBase();

};

