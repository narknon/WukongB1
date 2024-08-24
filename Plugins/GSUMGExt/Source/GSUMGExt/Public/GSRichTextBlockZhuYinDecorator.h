#pragma once
#include "CoreMinimal.h"
#include "Components/RichTextBlockDecorator.h"
#include "GSRichTextBlockZhuYinDecorator.generated.h"

class UDataTable;

UCLASS(Abstract, Blueprintable)
class GSUMGEXT_API UGSRichTextBlockZhuYinDecorator : public URichTextBlockDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ZhuYinSet;
    
public:
    UGSRichTextBlockZhuYinDecorator();

};

