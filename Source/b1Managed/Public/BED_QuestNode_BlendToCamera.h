#pragma once
#include "CoreMinimal.h"
#include "Camera/PlayerCameraManager.h"
#include "BED_QuestNode.h"
#include "BED_QuestNode_BlendToCamera.generated.h"

class AActor;

UCLASS(Blueprintable)
class UBED_QuestNode_BlendToCamera : public UBED_QuestNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bPlayerAsViewTarget: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<AActor> ViewTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendTime;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EViewTargetBlendFunction BlendFunc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendExp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bLockOutgoing: 1;
    
public:
    UBED_QuestNode_BlendToCamera();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetNodeDescriptionInCS() const;
    
};

