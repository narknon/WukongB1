#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "EGsEnAnimN.h"
#include "UStGSNotifyParam.h"
#include "AnimNotify_GSBase.generated.h"

class AActor;
class UObject;

UCLASS(Blueprintable, CollapseCategories)
class B1_API UAnimNotify_GSBase : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanBePlacedInASCS;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool isPreload;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UObject*> PreloadedAssets;
    
public:
    UAnimNotify_GSBase();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GSValidateInputCS(AActor* Actor) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GSPreNotifyDebugCS(FUStGSNotifyParam NotifyParam) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    int32 GSPostNotifyDebugCS(FUStGSNotifyParam NotifyParam) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GSNotifyCS(FUStGSNotifyParam NotifyParam) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<FSoftObjectPath> GetSoftReferences() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    TArray<UObject*> GetPreloadedAssets() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FString GetJumpableSectionPrefix() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EGsEnAnimN GetAnimNType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool bIsNativeBranchingPointCS() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void AddPreloadedAsset(UObject* Obj) const;
    
};

