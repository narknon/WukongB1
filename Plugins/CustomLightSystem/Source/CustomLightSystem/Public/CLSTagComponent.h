#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CLSTagData.h"
#include "CLSTagComponent.generated.h"

class ACLSBaseVolume;
class ACLSLightManager;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CUSTOMLIGHTSYSTEM_API UCLSTagComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LightManagerID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCLSTagData TagData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACLSBaseVolume* TargetVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACLSLightManager* Manager;
    
    UCLSTagComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void InitializeManager();
    
};

