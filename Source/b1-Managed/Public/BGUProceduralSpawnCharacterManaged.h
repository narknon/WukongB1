#pragma once
#include "CoreMinimal.h"
#include "BGUProceduralSpawnCharacterBase.h"
#include "BGUProceduralSpawnCharacterManaged.generated.h"

class UObject;

UCLASS(Blueprintable)
class ABGUProceduralSpawnCharacterManaged : public ABGUProceduralSpawnCharacterBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UObject*> Datas;
    
public:
    ABGUProceduralSpawnCharacterManaged(const FObjectInitializer& ObjectInitializer);

};

