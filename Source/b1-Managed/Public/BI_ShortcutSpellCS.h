#pragma once
#include "CoreMinimal.h"
#include "BI_ShortcutCommCS.h"
#include "BI_ShortcutSpellCS.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UBI_ShortcutSpellCS : public UBI_ShortcutCommCS {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 IsInTrans: 1;
    
    UBI_ShortcutSpellCS();

};

