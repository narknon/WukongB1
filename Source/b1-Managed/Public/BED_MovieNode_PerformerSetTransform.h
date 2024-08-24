#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BED_MovieNode_PerformerAction.h"
#include "BED_MovieNode_PerformerSetTransform.generated.h"

UCLASS(Blueprintable)
class UBED_MovieNode_PerformerSetTransform : public UBED_MovieNode_PerformerAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Transform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bPlayerAsPerformer: 1;
    
    UBED_MovieNode_PerformerSetTransform();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetNodeDescriptionInCS() const;
    
};

