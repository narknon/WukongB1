#include "JavascriptComponent.h"

UJavascriptComponent::UJavascriptComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->bActiveWithinEditor = false;
    this->JavascriptContext = NULL;
    this->JavascriptIsolate = NULL;
}

UClass* UJavascriptComponent::ResolveClass(FName Name) {
    return NULL;
}

UObject* UJavascriptComponent::ResolveAsset(FName Name, bool bTryLoad) {
    return NULL;
}

void UJavascriptComponent::Invoke(FName Name) {
}

void UJavascriptComponent::ForceGC() {
}

void UJavascriptComponent::Expose(const FString& ExposedAs, UObject* Object) {
}


