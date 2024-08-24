#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EJavascriptHttpRequestStatus.h"
#include "JavascriptHttpRequest.generated.h"

UCLASS(Blueprintable)
class JAVASCRIPTHTTP_API UJavascriptHttpRequest : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FJavascriptHttpRequestProgressDelegate, int32, sent, int32, recv);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FJavascriptHttpRequestCompleteDelegate, bool, successful);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FJavascriptHttpRequestCompleteDelegate OnComplete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FJavascriptHttpRequestProgressDelegate OnProgress;
    
    UJavascriptHttpRequest();

    UFUNCTION(BlueprintCallable)
    void SetVerb(const FString& Verb);
    
    UFUNCTION(BlueprintCallable)
    void SetURL(const FString& URL);
    
    UFUNCTION(BlueprintCallable)
    void SetHeader(const FString& HeaderName, const FString& HeaderValue);
    
    UFUNCTION(BlueprintCallable)
    void SetContentWithFiles(TArray<FString> FilePaths, const FString& Boundary, const FString& Content);
    
    UFUNCTION(BlueprintCallable)
    void SetContentFromMemory();
    
    UFUNCTION(BlueprintCallable)
    void SetContentAsString(const FString& ContentString);
    
    UFUNCTION(BlueprintCallable)
    bool ProcessRequest();
    
    UFUNCTION(BlueprintCallable)
    FString GetVerb();
    
    UFUNCTION(BlueprintCallable)
    TEnumAsByte<EJavascriptHttpRequestStatus::Type> GetStatus();
    
    UFUNCTION(BlueprintCallable)
    int32 GetResponseCode();
    
    UFUNCTION(BlueprintCallable)
    float GetElapsedTime();
    
    UFUNCTION(BlueprintCallable)
    void GetContentToMemory();
    
    UFUNCTION(BlueprintCallable)
    int32 GetContentLength();
    
    UFUNCTION(BlueprintCallable)
    FString GetContentAsString();
    
    UFUNCTION(BlueprintCallable)
    void CancelRequest();
    
};

