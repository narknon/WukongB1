#pragma once
#include "CoreMinimal.h"
#include "GameInstanceSystemBaseUObj.h"
#include "BGW_GameDataMgr.generated.h"

class UObject;

UCLASS(Blueprintable)
class UBGW_GameDataMgr : public UGameInstanceSystemBaseUObj {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> UObjectDataOwner;
    
public:
    UBGW_GameDataMgr();

};

