#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UnitWeaponPreview.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FUnitWeaponPreview {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> Weapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SocketName;
    
    B1_API FUnitWeaponPreview();
};

