#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AudioVisualizeUtil.generated.h"

class UAudioComponent;
class UConstantQNRT;
class ULoudnessNRT;
class USoundWave;

UCLASS(Blueprintable)
class UNREALEXTENT_API AAudioVisualizeUtil : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* Audio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULoudnessNRT* LoudnessAnalyzer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UConstantQNRT* ConstantAnalyzer;
    
    AAudioVisualizeUtil(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnAudioPlaybackPercentCallback(const USoundWave* SoundWave, const float Percent);
    
};

