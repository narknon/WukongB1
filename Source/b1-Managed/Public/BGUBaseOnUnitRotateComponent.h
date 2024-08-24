#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SceneComponentTickable.h"
#include "BGUBaseOnUnitRotateComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBGUBaseOnUnitRotateComponent : public USceneComponentTickable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator BaseOnUnitRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector OffsetLocation;
    
    UBGUBaseOnUnitRotateComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void BGUSetBaseOnUnitRotation(AActor* BaseUnit, FRotator TargteRotation, FVector OffsetVector);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BeginPlayGS();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TickComponentGS(float DeltaSeconds);
    
};

