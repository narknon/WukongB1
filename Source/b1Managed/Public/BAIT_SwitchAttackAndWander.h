#pragma once
#include "CoreMinimal.h"
#include "BAIT_Base.h"
#include "SwitchBattleFSMState.h"
#include "BAIT_SwitchAttackAndWander.generated.h"

UCLASS(Blueprintable)
class UBAIT_SwitchAttackAndWander : public UBAIT_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    SwitchBattleFSMState SwitchBattleFSMState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinWanderTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxWanderTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinComboNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxComboNum;
    
    UBAIT_SwitchAttackAndWander();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPropertyChanged(const FString& MemberName, const FString& PropertyName);
    
};

