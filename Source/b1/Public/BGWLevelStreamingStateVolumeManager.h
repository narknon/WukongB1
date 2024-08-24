#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BGWLevelStreamingStateVolumeManager.generated.h"

class APlayerController;
class AVolume;
class UBGWLevelStreamingStateVolumeManager;

UCLASS(Blueprintable)
class B1_API UBGWLevelStreamingStateVolumeManager : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnRequestUpdateLevelState);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRequestUpdateLevelState OnRequestUpdateLevelState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FString> CurrentActiveVolumes;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<AVolume>> RegisteredVolumePtrs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<AVolume>> CurrentActiveVolumePtrs;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APlayerController* PlayerController;
    
public:
    UBGWLevelStreamingStateVolumeManager();

    UFUNCTION(BlueprintCallable)
    void UpdateCurrentActiveVolumes();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static UBGWLevelStreamingStateVolumeManager* Get(UObject* WorldContext);
    
};

