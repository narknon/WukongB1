#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "JavascriptGlobalDelegates.generated.h"

class AActor;
class ULevel;
class UPackage;
class UWorld;

UCLASS(Blueprintable)
class V8_API UJavascriptGlobalDelegates : public UObject {
    GENERATED_BODY()
public:
    UJavascriptGlobalDelegates();

    UFUNCTION(BlueprintCallable)
    void UnbindAll();
    
    UFUNCTION(BlueprintCallable)
    void Unbind(const FString& Key);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RedirectorFollowed(const FString& PackageName, UObject* Redirector);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PreLoadMap(const FString& MapName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PreGarbageCollectDelegate();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PostLoadMapWithWorld(UWorld* World);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PostGarbageCollect();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PostDemoPlay();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PostApplyLevelOffset(ULevel* Level, UWorld* World, const FVector& Offset, bool Flag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PackageCreatedForLoad(UPackage* InPackage);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWorldCleanup(UWorld* World, bool bSessionEnded, bool bCleanupResources);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPreWorldInitialization_Friendly(UWorld* World);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPreWorldFinishDestroy(UWorld* World);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPreObjectPropertyChanged_Friendly(UObject* InObject, const TFieldPath<FProperty>& Property, const TFieldPath<FProperty>& MemberProperty);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPostWorldInitialization_Friendly(UWorld* World);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPostWorldCreation(UWorld* World);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPostDuplicate_Friendly(UWorld* World, bool bDuplicateForPIE);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnObjectSaved(UObject* Object);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnObjectPropertyChanged_Friendly(UObject* InObject, const TFieldPath<FProperty>& Property, const TFieldPath<FProperty>& MemberProperty, int32 ChangeType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnObjectModified(UObject* Object);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAssetLoaded(UObject* Object);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActorLabelChanged(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LevelRemovedFromWorld(ULevel* Level, UWorld* World);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LevelAddedToWorld(ULevel* Level, UWorld* World);
    
    UFUNCTION(BlueprintCallable)
    void Bind(const FString& Key);
    
};

