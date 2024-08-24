#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DownloadFile.h"
#include "EDownloadStatus.h"
#include "OnDownloadCanceledDelegate.h"
#include "OnDownloadCompleteDelegate.h"
#include "OnDownloadPausedDelegate.h"
#include "OnDownloadResumedDelegate.h"
#include "DownloadProxy.generated.h"

UCLASS(Blueprintable)
class DOWNLOADTOOKIT_API UDownloadProxy : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDownloadComplete OnDownloadCompleteDyMultiDlg;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDownloadPaused OnDownloadPausedDyMultiDlg;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDownloadCanceled OnDownloadCanceledDyMultiDlg;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDownloadResumed OnDownloadResumedDyMultiDlg;
    
    UDownloadProxy();

    UFUNCTION(BlueprintCallable)
    bool Tick(float Delta);
    
    UFUNCTION(BlueprintCallable)
    bool Resume();
    
    UFUNCTION(BlueprintCallable)
    void Reset();
    
    UFUNCTION(BlueprintCallable)
    void RequestDownload(const FString& InURL, const FString& InSavePathOpt, bool bInSliceOpt, int32 InSliceByteSizeOpt, bool bInForceOpt);
    
    UFUNCTION(BlueprintCallable)
    bool ReDownload();
    
    UFUNCTION(BlueprintCallable)
    void Pause();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HashCheck(const FString& InMD5Hash) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalSize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDownloadStatus GetDownloadStatus() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDownloadSpeedKbs() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDownloadSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDownloadProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDownloadedSize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDownloadFile GetDownloadedFileInfo() const;
    
    UFUNCTION(BlueprintCallable)
    void Cancel();
    
};

