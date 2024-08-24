#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SceneComponentTickable.h"
#include "BGUBoundCircleComp.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBGUBoundCircleComp : public USceneComponentTickable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DragSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BackSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 DrawDebug: 1;
    
    UBGUBoundCircleComp(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void AddDragVec(FVector DragVectorInWorld, float DragFactor);
    
    UFUNCTION(BlueprintCallable)
    void SetGSEnabled(bool IsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void GSTmpBeginPlay();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BeginPlayGS();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TickComponentGS(float DeltaTime);
    
};

