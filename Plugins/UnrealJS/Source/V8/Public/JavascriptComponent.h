#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "JavascriptAsset.h"
#include "JavascriptClassAsset.h"
#include "JavascriptComponent.generated.h"

class UJavascriptContext;
class UJavascriptIsolate;
class UObject;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class V8_API UJavascriptComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_OneParam(FJavascriptTickSignature, float, DeltaSeconds);
    DECLARE_DYNAMIC_DELEGATE(FJavascriptNoParamSignature);
    DECLARE_DYNAMIC_DELEGATE_OneParam(FJavascriptNameSignature, FName, Name);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ScriptSourceFile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bActiveWithinEditor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UJavascriptContext* JavascriptContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UJavascriptIsolate* JavascriptIsolate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FJavascriptTickSignature OnTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FJavascriptNoParamSignature OnBeginPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FJavascriptNoParamSignature OnEndPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FJavascriptNameSignature OnInvoke;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FJavascriptAsset> Assets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FJavascriptClassAsset> ClassAssets;
    
    UJavascriptComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    UClass* ResolveClass(FName Name);
    
    UFUNCTION(BlueprintCallable)
    UObject* ResolveAsset(FName Name, bool bTryLoad);
    
    UFUNCTION(BlueprintCallable)
    void Invoke(FName Name);
    
    UFUNCTION(BlueprintCallable)
    void ForceGC();
    
    UFUNCTION(BlueprintCallable)
    void Expose(const FString& ExposedAs, UObject* Object);
    
};

