#pragma once
#include "CoreMinimal.h"
#include "BGUMagicFieldBaseCS.h"
#include "BGUMagicFieldBaseManaged.generated.h"

class UObject;

UCLASS(Blueprintable)
class ABGUMagicFieldBaseManaged : public ABGUMagicFieldBaseCS {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UObject*> Datas;
    
public:
    ABGUMagicFieldBaseManaged(const FObjectInitializer& ObjectInitializer);

};

