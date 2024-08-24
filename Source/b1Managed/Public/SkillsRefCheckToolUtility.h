#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Animation/AnimTypes.h"
#include "SkillsRefCheckToolUtility.generated.h"

UCLASS(Blueprintable)
class USkillsRefCheckToolUtility : public UObject {
    GENERATED_BODY()
public:
    USkillsRefCheckToolUtility();

    UFUNCTION(BlueprintCallable)
    void CheckNotify(int32 SkillID, FAnimNotifyEvent Notify);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CheckMontage(int32 SkillID, const FString& Path);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Run();
    
};

