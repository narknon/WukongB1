#pragma once
#include "CoreMinimal.h"
#include "Components/Widget.h"
#include "GSSearchBox.generated.h"

UCLASS(Blueprintable)
class GSUMGEXT_API UGSSearchBox : public UWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSearchTextChangedEvent, const FText&, Text);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSearchTextChangedEvent OnSearchTextChanged;
    
    UGSSearchBox();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetText() const;
    
};

