#pragma once
#include "CoreMinimal.h"
#include "GameInstanceSystemBaseUObj.h"
#include "Templates/SubclassOf.h"
#include "NEW_SDFMgr.generated.h"

class ABGUDynamicSDFGenerator;

UCLASS(Blueprintable)
class UNEW_SDFMgr : public UGameInstanceSystemBaseUObj {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABGUDynamicSDFGenerator> DSDFActorClass;
    
public:
    UNEW_SDFMgr();

};

