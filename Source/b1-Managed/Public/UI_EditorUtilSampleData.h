#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UI_EditorUtilSampleData.generated.h"

UCLASS(Blueprintable)
class UUI_EditorUtilSampleData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TextData;
    
    UUI_EditorUtilSampleData();

};

