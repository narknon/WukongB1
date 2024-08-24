#pragma once
#include "CoreMinimal.h"
#include "Components/Widget.h"
#include "ChartTheme.h"
#include "CustomChart.generated.h"

UCLASS(Blueprintable)
class SIMPLECHARTS_API UCustomChart : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool useDirtyRect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ChartTheme Theme;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Option;
    
    UCustomChart();

    UFUNCTION(BlueprintCallable)
    void SetTheme(ChartTheme ChartTheme);
    
    UFUNCTION(BlueprintCallable)
    void SetOption(const FString& InOption, const FString& OtherCode);
    
};

