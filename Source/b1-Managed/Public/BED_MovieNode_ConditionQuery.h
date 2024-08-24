#pragma once
#include "CoreMinimal.h"
#include "BED_MovieNode.h"
#include "MovieConditionQueryConfig.h"
#include "BED_MovieNode_ConditionQuery.generated.h"

UCLASS(Blueprintable)
class UBED_MovieNode_ConditionQuery : public UBED_MovieNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieConditionQueryConfig MovieConditionQueryConfig;
    
    UBED_MovieNode_ConditionQuery();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FString GetNodeDescriptionInCS() const;
    
};

