#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Layout/Geometry.h"
#include "UI_EditorUtilSample.generated.h"

class UUI_EditorUtilSampleData;

UCLASS(Blueprintable)
class UUI_EditorUtilSample : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUI_EditorUtilSampleData* DataObj;
    
    UUI_EditorUtilSample();

    UFUNCTION(BlueprintCallable)
    void TickCS(FGeometry MyGeometry, float InDeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void ConstructCS(UObject* Widget);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnClickDoSth();
    
};

