#pragma once
#include "CoreMinimal.h"
#include "BED_GuideNode_Base.h"
#include "BED_GuideNode_Wait.generated.h"

UCLASS(Blueprintable)
class UBED_GuideNode_Wait : public UBED_GuideNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WaitSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaitSecondFloat;
    
    UBED_GuideNode_Wait();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetNodeDescriptionInCS() const;
    
};

