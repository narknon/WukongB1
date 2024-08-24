#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ContentWidget.h"
#include "Templates/SubclassOf.h"
#include "JavascriptGameViewport.generated.h"

class AActor;
class UWorld;

UCLASS(Blueprintable)
class JAVASCRIPTUMG_API UJavascriptGameViewport : public UContentWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor BackgroundColor;
    
    UJavascriptGameViewport();

    UFUNCTION(BlueprintCallable)
    AActor* Spawn(TSubclassOf<AActor> ActorClass);
    
    UFUNCTION(BlueprintCallable)
    void SetViewRotation(FRotator Rotation);
    
    UFUNCTION(BlueprintCallable)
    void SetViewLocation(FVector Location);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetViewRotation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWorld* GetViewportWorld() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetViewLocation() const;
    
};

