#pragma once
#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "JavascriptHyperlinkSignatureDelegate.generated.h"

class UJavascriptRichTextBlockHyperlinkDecorator;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FJavascriptHyperlinkSignature, UJavascriptRichTextBlockHyperlinkDecorator*, OnClick);

