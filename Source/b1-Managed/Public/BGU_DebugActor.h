#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BGUActorBase.h"
#include "BGU_DebugActor.generated.h"

class UBGUDebugCircleComponent;
class UBGUDebugSectorComponent;
class USceneComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class ABGU_DebugActor : public ABGUActorBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneRoot;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBGUDebugSectorComponent* SightPerceptionDebugSector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBGUDebugCircleComponent* HearingPerceptionDebugCircle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* WakeUpRangeCylinder;
    
    ABGU_DebugActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BeginPlayCS();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnConstructionCS(const FTransform& Transform);
    
};

