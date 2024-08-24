#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "ArteriesActor.generated.h"

class UArteriesObject;

UCLASS(Blueprintable)
class ARTERIES_API AArteriesActor : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnBuildCompleted, UArteriesObject*, Object, FTransform, Transform);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBuildCompleted OnBuildCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UArteriesObject* FinalObject;
    
    AArteriesActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void WaitForCount(FName GroupName, int32 Count, float Timeout);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBuild();
    
    UFUNCTION(BlueprintCallable)
    void Increment(FName GroupName);
    
    UFUNCTION(BlueprintCallable)
    void Build(bool bForceRebuild);
    
};

