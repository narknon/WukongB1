#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "AllLayerData.h"
#include "LayerSceneInfo.generated.h"

class ALandscape;
class UTexture;

UCLASS(Blueprintable)
class UNREALEXTENT_API ALayerSceneInfo : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALandscape* LandscapeActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntPoint ActorSpaceExtendsMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntPoint ActorSpaceExtendsMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform LandscapeTransform;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAllLayerData AllLandscapeLayerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UTexture*> LayerPreviewInEditor;
    
public:
    ALayerSceneInfo(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool QueryWeightInfo(const FVector& WorldPos, int32 LayerIndex, bool Nearest, float& Value);
    
    UFUNCTION(BlueprintCallable)
    void GenerateLayeredInfo();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BeginPlayCS();
    
};

