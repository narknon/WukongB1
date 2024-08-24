#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "JavascriptWebSocketServer.generated.h"

class UJavascriptWebSocket;
class UJavascriptWebSocketServer;

UCLASS(Blueprintable)
class UJavascriptWebSocketServer : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnWebSocketServerDelegate, UJavascriptWebSocket*, WebSocket);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWebSocketServerDelegate OnConnected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UJavascriptWebSocket*> Connections;
    
    UJavascriptWebSocketServer();

    UFUNCTION(BlueprintCallable)
    void Tick();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString Info();
    
    UFUNCTION(BlueprintCallable)
    void Dispose();
    
    UFUNCTION(BlueprintCallable)
    static UJavascriptWebSocketServer* Create(int32 Port);
    
};

