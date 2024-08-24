#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BGWVolumeManagerBase.generated.h"

class ABGWVolumeBase;

UCLASS(Abstract, Blueprintable)
class B1_API UBGWVolumeManagerBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ABGWVolumeBase*> RegisteredVolumes;
    
public:
    UBGWVolumeManagerBase();

};

