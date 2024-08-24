#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TileViewDemoItemObject.generated.h"

class UImage;

UCLASS(Blueprintable)
class UTileViewDemoItemObject : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* skillImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SkillName;
    
    UTileViewDemoItemObject();

};

