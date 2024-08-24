#pragma once
#include "CoreMinimal.h"
#include "Components/TextBlock.h"
#include "GSTextBlock.generated.h"

UCLASS(Blueprintable)
class UGSTextBlock : public UTextBlock {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseIndent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Ellipsis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultIndentSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Content;
    
    UGSTextBlock();

    UFUNCTION(BlueprintCallable)
    void SetUseIndent(bool InUseIndent);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultIndentSize(float InDefaultIndentSize);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintNativeEvent)
    void OnTextPrePaint();
    
    UFUNCTION(BlueprintCallable)
    void NativeCheckText();
    
    UFUNCTION(BlueprintCallable)
    void MakeContentDirty();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUseIndent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDefaultIndentSize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetContent() const;
    
    UFUNCTION(BlueprintCallable)
    void ApplyText(FText InText);
    
};

