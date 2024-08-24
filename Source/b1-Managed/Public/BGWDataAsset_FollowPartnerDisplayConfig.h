#pragma once
#include "CoreMinimal.h"
#include "BGWDataAsset.h"
#include "AiBreakInteractionConversationInfo.h"
#include "FollowPartnerDodgeInfo.h"
#include "FollowPartnerIdleWaitingInfo.h"
#include "BGWDataAsset_FollowPartnerDisplayConfig.generated.h"

UCLASS(Blueprintable)
class UBGWDataAsset_FollowPartnerDisplayConfig : public UBGWDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WeakAiInteractConversationCD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAiBreakInteractionConversationInfo> BreakInteractionConversationInfoList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFollowPartnerDodgeInfo IdleDodgeInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFollowPartnerIdleWaitingInfo IdleWaitingInfo;
    
    UBGWDataAsset_FollowPartnerDisplayConfig();

};

