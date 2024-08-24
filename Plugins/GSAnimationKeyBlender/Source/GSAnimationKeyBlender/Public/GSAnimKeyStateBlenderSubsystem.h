#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GSAnimKeyStateBlenderSubsystem.generated.h"

class UGSAnimKeyStateBlender;

UCLASS(Blueprintable)
class GSANIMATIONKEYBLENDER_API UGSAnimKeyStateBlenderSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UGSAnimKeyStateBlender*> AnimKeyStateBlenderContainer;
    
public:
    UGSAnimKeyStateBlenderSubsystem();

};

