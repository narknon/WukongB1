#pragma once
#include "CoreMinimal.h"
#include "GameInstanceSystemBaseUObj.h"
#include "Templates/SubclassOf.h"
#include "BGW_DynamicSDFMgr.generated.h"

class ABGUDynamicSDFGenerator;
class ABGUDynamicSDFGenerator2;

UCLASS(Blueprintable)
class UBGW_DynamicSDFMgr : public UGameInstanceSystemBaseUObj {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABGUDynamicSDFGenerator> DSDFClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABGUDynamicSDFGenerator2> DSDFV2Class;
    
public:
    UBGW_DynamicSDFMgr();

};

