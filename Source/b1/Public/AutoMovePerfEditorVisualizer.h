#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Styling/SlateBrush.h"
#include "AutoMovePerfEditorVisualizer.generated.h"

UCLASS(Blueprintable)
class B1_API AAutoMovePerfEditorVisualizer : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush BaseImageBrush;
    
    AAutoMovePerfEditorVisualizer(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void DisplayVisualizedPerfInfo(TArray<float> InTileSourceInfoArray, FVector2D InResolution, FIntPoint InTileCount, float InIntensityScaleFactor, const FString& InBaseImagePath);
    
    UFUNCTION(BlueprintCallable)
    void ClearVisualizedPerfInfo();
    
};

