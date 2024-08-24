#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "JavascriptWebSocket.generated.h"

class UJavascriptWebSocket;

UCLASS(Blueprintable)
class UJavascriptWebSocket : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnWebSocketDelegate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWebSocketDelegate OnReceived;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWebSocketDelegate OnConnected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWebSocketDelegate OnError;
    
    UJavascriptWebSocket();

    UFUNCTION(BlueprintCallable)
    void Tick();
    
    UFUNCTION(BlueprintCallable)
    void SendMemory(int32 NumBytes);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString RemoteEndPoint(bool bAppendPort);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString LocalEndPoint(bool bAppendPort);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetReceivedBytes();
    
    UFUNCTION(BlueprintCallable)
    void Flush();
    
    UFUNCTION(BlueprintCallable)
    void Dispose();
    
    UFUNCTION(BlueprintCallable)
    void CopyBuffer();
    
    UFUNCTION(BlueprintCallable)
    static UJavascriptWebSocket* Connect(const FString& Endpoint);
    
};

