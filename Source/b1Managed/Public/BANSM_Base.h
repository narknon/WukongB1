#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Templates/SubclassOf.h"
#include "BANSM_Base.generated.h"

class UAnimMontage;
class UAnimNotify;
class UAnimNotifyState;
class UAnimSequenceBase;

UCLASS(Abstract, Blueprintable)
class UBANSM_Base : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimNotifyState> NotifyStateClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimNotify> NotifyClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NotifyTrackName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NotifyTrackName_SweepCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NotifyTrackName_Socket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AWTag_GenerateBySweepCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AWTag_GenerateWithSocket;
    
    UBANSM_Base();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void MarkNotify(UAnimSequenceBase* AnimSeq, float StartTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CheckState(UAnimSequenceBase* AnimBase, float CurTime);
    
    UFUNCTION(BlueprintCallable)
    void GenerateNotify();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void MarkNotifyState(UAnimSequenceBase* AnimSeq, float StartTime, float EndTime);
    
    UFUNCTION(BlueprintCallable)
    void GenerateNotifyState();
    
    UFUNCTION(BlueprintCallable)
    void RefreshAttackWarning(UAnimMontage* AnimMontage, float PreTimeSeconds, float PostTimeSeconds);
    
private:
    UFUNCTION(BlueprintCallable)
    void AddSweepCheckAttackWarning(UAnimMontage* AnimMontage, float CheckSphereRadiusIncrease);
    
    UFUNCTION(BlueprintCallable)
    void AddExtraSocketAttackWarning(UAnimMontage* AnimMontage, int32 SocketNum, float SocketRadius, int32 LengthFrame);
    
    UFUNCTION(BlueprintCallable)
    void UpdateExtraSocketAttackWarning(UAnimMontage* AnimMontage, int32 LengthFrame);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure=false)
    UClass* GetSupportedClass() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void AddPlayerWaterSplash_BySweepCheck(UAnimMontage* AnimMontage, FName _SocketName, float SweepRadius, float PointBetweenMin, float SampleStep);
    
    UFUNCTION(BlueprintCallable)
    void ClearGeneratedAttackWarningsByTrack(UAnimMontage* AnimMontage);
    
protected:
    UFUNCTION(BlueprintCallable)
    void AddPreciseDodgeAttackWarningAndSocket(UAnimMontage* AnimMontage, float PreTimeSeconds, float PostTimeSeconds, float CheckSphereRadius, int32 AddSocketNumPerAnim);
    
};

