#pragma once
#include "CoreMinimal.h"
#include "StatInfoBaseWidget.h"
#include "NiagaraStatInfoUI.generated.h"

class UVerticalBox;

UCLASS(Blueprintable, EditInlineNew)
class UNREALEXTENT_API UNiagaraStatInfoUI : public UStatInfoBaseWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* VBox_StatList;
    
    UNiagaraStatInfoUI();

};

