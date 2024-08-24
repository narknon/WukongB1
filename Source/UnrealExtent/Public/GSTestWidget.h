#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "GSTestWidget.generated.h"

class UAkAudioEvent;
class UImage;

UCLASS(Blueprintable, EditInlineNew)
class UNREALEXTENT_API UGSTestWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TestNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* TestImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* TestAudioEvent;
    
    UGSTestWidget();

};

