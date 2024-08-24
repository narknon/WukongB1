#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineBaseTypes.h"
#include "DirectoryItem.h"
#include "EJavascriptEncodingOptions.h"
#include "EJavascriptStatDataType.h"
#include "EJavascriptStatOperation.h"
#include "ELogVerbosity_JS.h"
#include "JavascriptFunction.h"
#include "JavascriptInternetAddr.h"
#include "JavascriptLogCategory.h"
#include "JavascriptProfileNode.h"
#include "JavascriptSocket.h"
#include "JavascriptStat.h"
#include "JavascriptStreamableManager.h"
#include "JavascriptStubStruct.h"
#include "JavscriptProperty.h"
#include "ReadStringFromFileHandle.h"
#include "Templates/SubclassOf.h"
#include "JavascriptLibrary.generated.h"

class AActor;
class AController;
class AGameModeBase;
class ARecastNavMesh;
class UActorComponent;
class UBlueprint;
class UDynamicBlueprintBinding;
class UEngine;
class UEnum;
class UField;
class UFunction;
class ULevel;
class UModel;
class UObject;
class UPackage;
class USceneComponent;
class UWorld;

UCLASS(Blueprintable)
class V8_API UJavascriptLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UJavascriptLibrary();

    UFUNCTION(BlueprintCallable)
    static bool WriteStringToFile(UObject* Object, const FString& Filename, const FString& Data, TEnumAsByte<EJavascriptEncodingOptions::Type> EncodingOptions);
    
    UFUNCTION(BlueprintCallable)
    static bool WriteFile(UObject* Object, const FString& Filename);
    
    UFUNCTION(BlueprintCallable)
    static void V8_SetIdleTaskBudget(float BudgetInSeconds);
    
    UFUNCTION(BlueprintCallable)
    static void V8_SetFlagsFromString(const FString& V8Flags);
    
    UFUNCTION(BlueprintCallable)
    static void UnregisterComponent(UActorComponent* ActorComponent);
    
    UFUNCTION(BlueprintCallable)
    static void Unload(const FJavascriptStreamableManager& Manager, const FSoftObjectPath& Target);
    
    UFUNCTION(BlueprintCallable)
    static UObject* TryLoadByPath(const FString& Path);
    
    UFUNCTION(BlueprintCallable)
    static void SimpleAsyncLoad(const FJavascriptStreamableManager& Manager, const FSoftObjectPath& Target, int32 Priority);
    
    UFUNCTION(BlueprintCallable)
    static void SetRootComponent(AActor* Actor, USceneComponent* Component);
    
    UFUNCTION(BlueprintCallable)
    static void SetPort(FJavascriptInternetAddr& Addr, int32 Port);
    
    UFUNCTION(BlueprintCallable)
    static void SetObjectFlags(UObject* Obj, int32 Flags);
    
    UFUNCTION(BlueprintCallable)
    static void SetMobility(USceneComponent* SceneComponent, TEnumAsByte<EComponentMobility::Type> Type);
    
    UFUNCTION(BlueprintCallable)
    static void SetMobile(USceneComponent* SceneComponent);
    
    UFUNCTION(BlueprintCallable)
    static void SetIp(FJavascriptInternetAddr& Addr, const FString& ResolvedAddress, bool& bValid);
    
    UFUNCTION(BlueprintCallable)
    static void SetClientTravel(UEngine* Engine, UWorld* InWorld, const FString& NextURL, TEnumAsByte<ETravelType> InTravelType);
    
    UFUNCTION(BlueprintCallable)
    static void SetActorFlags(AActor* Actor, int32 Flags);
    
    UFUNCTION(BlueprintCallable)
    static bool SendMemoryTo(FJavascriptSocket& Socket, const FJavascriptInternetAddr& ToAddr, int32 NumBytes, int32& BytesSent);
    
    UFUNCTION(BlueprintCallable)
    static bool SegmentIntersection2D(const FVector& SegmentStartA, const FVector& SegmentEndA, const FVector& SegmentStartB, const FVector& SegmentEndB, FVector& IntersectionPoint);
    
    UFUNCTION(BlueprintCallable)
    static bool ResolveIp(const FString& HostName, FString& OutIp);
    
    UFUNCTION(BlueprintCallable)
    static void ReregisterComponent(UActorComponent* ActorComponent);
    
    UFUNCTION(BlueprintCallable)
    static void ReregisterAllComponents(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void RequestAsyncLoad(const FJavascriptStreamableManager& Manager, const TArray<FSoftObjectPath>& TargetsToStream, FJavascriptFunction DelegateToCall, int32 Priority);
    
    UFUNCTION(BlueprintCallable)
    static void RegisterComponent(UActorComponent* ActorComponent);
    
    UFUNCTION(BlueprintCallable)
    static FReadStringFromFileHandle ReadStringFromFileAsync(UObject* Object, const FString& Filename, FJavascriptFunction Function);
    
    UFUNCTION(BlueprintCallable)
    static FString ReadStringFromFile(UObject* Object, const FString& Filename);
    
    UFUNCTION(BlueprintCallable)
    static bool ReadFile(UObject* Object, const FString& Filename);
    
    UFUNCTION(BlueprintCallable)
    static bool ReadDirectory(UObject* Object, const FString& Directory, TArray<FDirectoryItem>& OutItems);
    
    UFUNCTION(BlueprintCallable)
    static FJavascriptStat NewStat(FName InStatName, const FString& InStatDesc, FName InGroupName, FName InGroupCategory, const FString& InGroupDesc, bool bDefaultEnable, bool bShouldClearEveryFrame, EJavascriptStatDataType InStatType, bool bCycleStat, bool bSortByName);
    
    UFUNCTION(BlueprintCallable)
    static void MarkRenderStateDirty(UActorComponent* Component);
    
    UFUNCTION(BlueprintCallable)
    static bool MakeDirectory(const FString& Path, bool Tree);
    
    UFUNCTION(BlueprintCallable)
    static void Log(const FJavascriptLogCategory& Category, ELogVerbosity_JS Verbosity, const FString& Message, const FString& Filename, int32 LineNumber);
    
    UFUNCTION(BlueprintCallable)
    static UPackage* LoadPackage(UPackage* InOuter, const FString& PackageName);
    
    UFUNCTION(BlueprintCallable)
    static bool IsSuppressed(const FJavascriptLogCategory& Category, ELogVerbosity_JS Verbosity);
    
    UFUNCTION(BlueprintCallable)
    static bool IsRegistered(UActorComponent* ActorComponent);
    
    UFUNCTION(BlueprintCallable)
    static bool IsPlayInPreview(UWorld* World);
    
    UFUNCTION(BlueprintCallable)
    static bool IsPlayInEditor(UWorld* World);
    
    UFUNCTION(BlueprintCallable)
    static bool IsPendingKill(AActor* InActor);
    
    UFUNCTION(BlueprintCallable)
    static bool IsGeneratedByBlueprint(UClass* InClass);
    
    UFUNCTION(BlueprintCallable)
    static bool IsGameWorld(UWorld* World);
    
    UFUNCTION(BlueprintCallable)
    static bool IsAsyncLoadComplete(const FJavascriptStreamableManager& Manager, const FSoftObjectPath& Target);
    
    UFUNCTION(BlueprintCallable)
    static bool HasUndo(UEngine* Engine);
    
    UFUNCTION(BlueprintCallable)
    static bool HasAnyPackageFlags(UPackage* Package, int32 Flags);
    
    UFUNCTION(BlueprintCallable)
    static bool HasAnyFlags(UObject* Object, int32 Flags);
    
    UFUNCTION(BlueprintCallable)
    static void HandleSeamlessTravelPlayer(AGameModeBase* GameMode, AController*& C);
    
    UFUNCTION(BlueprintCallable)
    static FBox GetWorldBounds(UWorld* InWorld);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UClass*> GetSuperClasses(UClass* InClass);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FJavscriptProperty> GetStructProperties(const FString& StructName, bool bIncludeSuper);
    
    UFUNCTION(BlueprintCallable)
    static FString GetScriptResourceName(FJavascriptProfileNode Node);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetScriptId(FJavascriptProfileNode Node);
    
    UFUNCTION(BlueprintCallable)
    static FString GetPlatformName();
    
    UFUNCTION(BlueprintCallable)
    static UObject* GetOutermost(UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    static UObject* GetOuter(UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    static void GetObjectsWithOuter(const UObject* Outer, TArray<UObject*>& Results, bool bIncludeNestedObjects, int32 ExclusionFlags, int32 ExclusionInternalFlags);
    
    UFUNCTION(BlueprintCallable)
    static void GetObjectsOfClass(UClass* ClassToLookFor, TArray<UObject*>& Results, bool bIncludeDerivedClasses, int32 ExcludeFlags, int32 ExclusionInternalFlags);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetNodeId(FJavascriptProfileNode Node);
    
    UFUNCTION(BlueprintCallable)
    static FString GetName(UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    static UModel* GetModel(UWorld* World);
    
    UFUNCTION(BlueprintCallable)
    static FString GetMetaData(UField* Field, const FString& Key);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetLineNumber(FJavascriptProfileNode Node);
    
    UFUNCTION(BlueprintCallable)
    static TArray<ULevel*> GetLevels(UWorld* World);
    
    UFUNCTION(BlueprintCallable)
    static ULevel* GetLevel(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static float GetLastRenderTime(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetHitLineCount(FJavascriptProfileNode Node);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetHitCount(FJavascriptProfileNode Node);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetFunctionParmsSize(UFunction* Function);
    
    UFUNCTION(BlueprintCallable)
    static FString GetFunctionName(FJavascriptProfileNode Node);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetFileSize(UObject* Object, const FString& Filename);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UField*> GetFields(const UObject* Object, bool bIncludeSuper);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicBlueprintBinding* GetDynamicBinding(UClass* Outer, TSubclassOf<UDynamicBlueprintBinding> BindingObjectClass);
    
    UFUNCTION(BlueprintCallable)
    static FString GetDir(UObject* Object, const FString& WhichDir);
    
    UFUNCTION(BlueprintCallable)
    static void GetDerivedClasses(UClass* ClassToLookFor, TArray<UClass*>& Results, bool bRecursive);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetDeoptInfosCount(FJavascriptProfileNode Node, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    static FString GetDeoptInfo_Stack(FJavascriptProfileNode Node, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    static FString GetDeoptInfo_Reason(FJavascriptProfileNode Node, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetCurrentProcessId();
    
    UFUNCTION(BlueprintCallable)
    static TArray<UActorComponent*> GetComponentsByClass(AActor* Actor, TSubclassOf<UActorComponent> ComponentClass);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetColumnNumber(FJavascriptProfileNode Node);
    
    UFUNCTION(BlueprintCallable)
    static FString GetClassPathName(UClass* Class);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetChildrenCount(FJavascriptProfileNode Node);
    
    UFUNCTION(BlueprintCallable)
    static FJavascriptProfileNode GetChild(FJavascriptProfileNode Node, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    static FName GetCategoryName(const FJavascriptLogCategory& Category);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetCallUid(FJavascriptProfileNode Node);
    
    UFUNCTION(BlueprintCallable)
    static UClass* GetBlueprintGeneratedClassFromPath(const FString& Path);
    
    UFUNCTION(BlueprintCallable)
    static UClass* GetBlueprintGeneratedClass(UBlueprint* Blueprint);
    
    UFUNCTION(BlueprintCallable)
    static FString GetBailoutReason(FJavascriptProfileNode Node);
    
    UFUNCTION(BlueprintCallable)
    static FString GetArchetypePathName(UObject* Object);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetAllActorsOfClassAndTagsInCurrentLevel(UObject* WorldContextObject, TSubclassOf<AActor> ActorClass, const TArray<FName>& Tags_Accept, const TArray<FName>& Tags_Deny, TArray<AActor*>& OutActors);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetAllActorsOfClassAndTags(UObject* WorldContextObject, TSubclassOf<AActor> ActorClass, const TArray<FName>& Tags_Accept, const TArray<FName>& Tags_Deny, TArray<AActor*>& OutActors);
    
    UFUNCTION(BlueprintCallable)
    static void GenerateNavigation(UWorld* InWorld, ARecastNavMesh* NavData);
    
    UFUNCTION(BlueprintCallable)
    static UPackage* FindPackage(UObject* InOuter, const FString& PackageName);
    
    UFUNCTION(BlueprintCallable)
    static UObject* FindObjectWithOuter(UObject* Outer, UClass* ClassToLookFor, FName NameToLookFor);
    
    UFUNCTION(BlueprintCallable)
    static bool FileExists(const FString& Filename);
    
    UFUNCTION(BlueprintCallable)
    static UObject* Duplicate(UObject* Object, UObject* Outer, FName Name);
    
    UFUNCTION(BlueprintCallable)
    static bool DirectoryExists(const FString& InDirectory);
    
    UFUNCTION(BlueprintCallable)
    static bool DeleteFile(const FString& Filename, bool ReadOnly);
    
    UFUNCTION(BlueprintCallable)
    static bool DeleteDirectory(const FString& Path, bool RequireExists, bool Tree);
    
    UFUNCTION(BlueprintCallable)
    static FJavascriptStreamableManager CreateStreamableManager();
    
    UFUNCTION(BlueprintCallable)
    static FJavascriptSocket CreateSocket(FName SocketType, const FString& Description, bool bForceUDP);
    
    UFUNCTION(BlueprintCallable)
    static UPackage* CreatePackage(UObject* Outer, const FString& PackageName);
    
    UFUNCTION(BlueprintCallable)
    static FJavascriptLogCategory CreateLogCategory(const FString& CategoryName, ELogVerbosity_JS InDefaultVerbosity);
    
    UFUNCTION(BlueprintCallable)
    static FJavascriptInternetAddr CreateInternetAddr();
    
    UFUNCTION(BlueprintCallable)
    static UEnum* CreateEnum(UObject* Outer, FName Name, TArray<FName> DisplayNames, const TArray<FString>& Flags);
    
    UFUNCTION(BlueprintCallable)
    static FString ConvertRelativePathToFull(UObject* Object, const FString& RelativePath);
    
    UFUNCTION(BlueprintCallable)
    static FString ClipboardPaste();
    
    UFUNCTION(BlueprintCallable)
    static void ClipboardCopy(const FString& String);
    
    UFUNCTION(BlueprintCallable)
    static void CallJS(FJavascriptFunction Function, const FJavascriptStubStruct& CustomStruct);
    
    UFUNCTION(BlueprintCallable)
    static void AddMessage_int(FJavascriptStat Stat, EJavascriptStatOperation InStatOperation, int32 Value, bool bIsCycle);
    
    UFUNCTION(BlueprintCallable)
    static void AddMessage_float(FJavascriptStat Stat, EJavascriptStatOperation InStatOperation, float Value, bool bIsCycle);
    
    UFUNCTION(BlueprintCallable)
    static void AddMessage(FJavascriptStat Stat, EJavascriptStatOperation InStatOperation);
    
    UFUNCTION(BlueprintCallable)
    static void AddDynamicBinding(UClass* Outer, UDynamicBlueprintBinding* BindingObject);
    
    UFUNCTION(BlueprintCallable)
    static UWorld* Actor_GetWorld(AActor* Actor);
    
};

