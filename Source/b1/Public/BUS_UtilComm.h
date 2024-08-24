#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EGSBlendTypeG.h"
#include "BUS_UtilComm.generated.h"

class AActor;
class ACharacter;
class UAnimMontage;
class UCurveFloat;
class ULevelSequence;
class UMatineeCameraShake;
class UObject;
class UParticleSystem;

UCLASS(Blueprintable)
class B1_API UBUS_UtilComm : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBUS_UtilComm();

    UFUNCTION(BlueprintCallable)
    static void SetCurActiveMontagePos(ACharacter* CurCharacter, float TargetPos);
    
    UFUNCTION(BlueprintCallable)
    static bool SafeSetCharacterMontagePlayingRate(ACharacter* CurCharacter, float PlayRate);
    
    UFUNCTION(BlueprintCallable)
    static bool SafeSetCharacterMontagePlaying(ACharacter* CurCharacter, bool IsPlaying);
    
    UFUNCTION(BlueprintCallable)
    static bool PlayMontage(ACharacter* CurCharacter, UAnimMontage* AnimMontage);
    
    UFUNCTION(BlueprintCallable)
    static UMatineeCameraShake* PlayCameraShakeByClass(AActor* Caster, UClass* CameraShakeCls);
    
    UFUNCTION(BlueprintCallable)
    static void ParticleSystemComponentTrailSetTimeRate(ACharacter* CurCharacter, float TimeRate);
    
    UFUNCTION(BlueprintCallable)
    static UParticleSystem* LoadParticleSystemFromString(const FString& ResPath, float DefaultDelayTime);
    
    UFUNCTION(BlueprintCallable)
    static ULevelSequence* LoadLevelSequenceFromString(const FString& ResPath);
    
    UFUNCTION(BlueprintCallable)
    static UCurveFloat* LoadCurveFloatFromString(const FString& ResPath);
    
    UFUNCTION(BlueprintCallable)
    static UClass* LoadCameraShakeFromString(const FString& ResPath);
    
    UFUNCTION(BlueprintCallable)
    static UAnimMontage* LoadAnimMontageFromString(const FString& ResPath);
    
    UFUNCTION(BlueprintCallable)
    static UObject* LoadAKEventFromString(const FString& ResPath);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCharacterStoped(ACharacter* CurCharacter);
    
    UFUNCTION(BlueprintCallable)
    static FRotator GSEaseRotator(FRotator Start, FRotator End, float alpha, EGSBlendTypeG GSBlendTypeG, float EaseExp, bool IsShortestPath);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GSEase(float Start, float End, float alpha, EGSBlendTypeG GSBlendTypeG, float EaseExp);
    
    UFUNCTION(BlueprintCallable)
    static float GetUMatineeCameraShakeBlendOutTime(UMatineeCameraShake* CameraShake);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetEasingFuncType(EGSBlendTypeG GSBlengTypeG);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetCurActiveMontagePos(ACharacter* CurCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator CalcYawRotator(const FVector& TargetLocation, const FVector& FromLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator CalcDirWithInput(ACharacter* CurCharacter, float ForwardVal, float RightVal);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float CalcDegreeFromVectorsProjectInXYPlane(const FVector& AVector, const FVector& BVector);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float CalcDegreeFromRotatorsInYaw(const FRotator& ARotator, const FRotator& BRotator);
    
};

