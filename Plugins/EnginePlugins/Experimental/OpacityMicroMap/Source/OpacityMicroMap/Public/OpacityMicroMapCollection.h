#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OpacityMicroMapCollection.generated.h"

class UOpacityMicroMapData;

UCLASS(Blueprintable)
class OPACITYMICROMAP_API UOpacityMicroMapCollection : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint64, UOpacityMicroMapData*> Collection;
    
public:
    UOpacityMicroMapCollection();

};

