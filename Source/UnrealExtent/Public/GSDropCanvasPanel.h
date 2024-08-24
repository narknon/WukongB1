#pragma once
#include "CoreMinimal.h"
#include "Components/CanvasPanel.h"
#include "OnGSDropEventDelegate.h"
#include "GSDropCanvasPanel.generated.h"

UCLASS(Blueprintable)
class UNREALEXTENT_API UGSDropCanvasPanel : public UCanvasPanel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGSDropEvent OnDropEvent;
    
    UGSDropCanvasPanel();

};

