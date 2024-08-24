#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EGsEnAnimN.h"
#include "EGsEnAnimNS.h"
#include "NotifySoftRefs.h"
#include "AnimNotifyFuncLibrary.generated.h"

class UAnimMontage;
class UAnimNotifyState_GSBase;
class UAnimNotify_GSBase;
class UAnimSequenceBase;

UCLASS(Blueprintable)
class B1_API UAnimNotifyFuncLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAnimNotifyFuncLibrary();

    UFUNCTION(BlueprintCallable)
    static void PrepareAnimNotifySoftAsset(UAnimSequenceBase* AnimBase, TMap<UAnimNotify_GSBase*, FNotifySoftRefs>& outNotifyRefs, TMap<UAnimNotifyState_GSBase*, FNotifySoftRefs>& outNotifyStateRefs);
    
    UFUNCTION(BlueprintCallable)
    static void PrepareAnimationsNotifySoftAsset(TArray<UAnimSequenceBase*> AnimBases, TMap<UAnimNotify_GSBase*, FNotifySoftRefs>& outNotifyRefs, TMap<UAnimNotifyState_GSBase*, FNotifySoftRefs>& outNotifyStateRefs);
    
    UFUNCTION(BlueprintCallable)
    static void GetAllAnimNotifySoftAsset(UAnimSequenceBase* AnimBase, TMap<UAnimNotify_GSBase*, FNotifySoftRefs>& outNotifyRefs, TMap<UAnimNotifyState_GSBase*, FNotifySoftRefs>& outNotifyStateRefs);
    
    UFUNCTION(BlueprintCallable)
    static void DeleteAnimNotifyAndAnimNotifyState(UAnimMontage* AnimMontage, TArray<EGsEnAnimN> NotifyTypeList, TArray<EGsEnAnimNS> NotifyStateTypeList);
    
};

