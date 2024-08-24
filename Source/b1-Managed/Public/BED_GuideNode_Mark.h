#pragma once
#include "CoreMinimal.h"
#include "BED_GuideNode_Base.h"
#include "BED_GuideNode_Mark.generated.h"

UCLASS(Blueprintable)
class UBED_GuideNode_Mark : public UBED_GuideNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GuildGroupId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 IsWaitUntilGuideFinish: 1;
    
    UBED_GuideNode_Mark();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetNodeDescriptionInCS() const;
    
};

