#pragma once
#include "CoreMinimal.h"
#include "AnimationAnalyzer.h"
#include "BUAnimationAnalyzer.generated.h"

class AActor;
class UBGWDataAsset_AbpHumanoidSetting;
class UBUAnimationAnalyzer;
class UObject;

UCLASS(Blueprintable)
class UBUAnimationAnalyzer : public UAnimationAnalyzer {
    GENERATED_BODY()
public:
    UBUAnimationAnalyzer();

private:
    UFUNCTION(BlueprintCallable)
    static UBUAnimationAnalyzer* GenerateNewAACSAsset(UAnimationAnalyzer* OrgAA);
    
    UFUNCTION(BlueprintCallable)
    bool FindABPSettingSameToAA(UBGWDataAsset_AbpHumanoidSetting* ABP_Setting, const FString& OrgAAPackageName);
    
    UFUNCTION(BlueprintCallable)
    bool AddToABPSettingSameToAA(UBGWDataAsset_AbpHumanoidSetting* ABP_Setting, const FString& OrgAAPackageName);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void MMAnimationSeqUsingNotify_Inner(int32 Ref, AActor* Owner);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CheckIsFirstLoadRequireDesireAsset(int32 Ref);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 RequireAnimationsLoadAtDesiredReferences(int32 Ref, bool bLoadAll, UObject* Obj);
    
};

