#pragma once
#include "CoreMinimal.h"
#include "BGUBulletBaseCS.h"
#include "BGUBulletBaseManaged.generated.h"

class UObject;

UCLASS(Blueprintable)
class ABGUBulletBaseManaged : public ABGUBulletBaseCS {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UObject*> Datas;
    
public:
    ABGUBulletBaseManaged(const FObjectInitializer& ObjectInitializer);

};

