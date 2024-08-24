#pragma once
#include "CoreMinimal.h"
#include "Blueprint/IUserObjectListEntry.h"
#include "Blueprint/UserWidget.h"
#include "JavascriptUserObjectListEntry.generated.h"

class UObject;

UCLASS(Blueprintable, EditInlineNew)
class JAVASCRIPTUMG_API UJavascriptUserObjectListEntry : public UUserWidget, public IUserObjectListEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* Item;
    
    UJavascriptUserObjectListEntry();


    // Fix for true pure virtual functions not being implemented
};

