#pragma once
#include "CoreMinimal.h"
#include "BaseActorCompTickable.h"
#include "DispLib_EditorZakkaComp.generated.h"

class UBUC_DispLibDBCPermanentWEFMMotorDataAsset;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UDispLib_EditorZakkaComp : public UBaseActorCompTickable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBUC_DispLibDBCPermanentWEFMMotorDataAsset* PermanentWindMotorsDataAsset;
    
    UDispLib_EditorZakkaComp(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ReceiveTick(float DeltaSeconds);
    
};

