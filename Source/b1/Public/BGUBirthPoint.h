#pragma once
#include "CoreMinimal.h"
#include "Engine/NavigationObjectBase.h"
#include "BGUBirthPoint.generated.h"

UCLASS(Blueprintable)
class B1_API ABGUBirthPoint : public ANavigationObjectBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BirthPointID;
    
    ABGUBirthPoint(const FObjectInitializer& ObjectInitializer);

};

