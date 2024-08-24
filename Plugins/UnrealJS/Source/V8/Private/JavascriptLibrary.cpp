#include "JavascriptLibrary.h"
#include "Templates/SubclassOf.h"

UJavascriptLibrary::UJavascriptLibrary() {
}

bool UJavascriptLibrary::WriteStringToFile(UObject* Object, const FString& Filename, const FString& Data, TEnumAsByte<EJavascriptEncodingOptions::Type> EncodingOptions) {
    return false;
}

bool UJavascriptLibrary::WriteFile(UObject* Object, const FString& Filename) {
    return false;
}

void UJavascriptLibrary::V8_SetIdleTaskBudget(float BudgetInSeconds) {
}

void UJavascriptLibrary::V8_SetFlagsFromString(const FString& V8Flags) {
}

void UJavascriptLibrary::UnregisterComponent(UActorComponent* ActorComponent) {
}

void UJavascriptLibrary::Unload(const FJavascriptStreamableManager& Manager, const FSoftObjectPath& Target) {
}

UObject* UJavascriptLibrary::TryLoadByPath(const FString& Path) {
    return NULL;
}

void UJavascriptLibrary::SimpleAsyncLoad(const FJavascriptStreamableManager& Manager, const FSoftObjectPath& Target, int32 Priority) {
}

void UJavascriptLibrary::SetRootComponent(AActor* Actor, USceneComponent* Component) {
}

void UJavascriptLibrary::SetPort(FJavascriptInternetAddr& Addr, int32 Port) {
}

void UJavascriptLibrary::SetObjectFlags(UObject* Obj, int32 Flags) {
}

void UJavascriptLibrary::SetMobility(USceneComponent* SceneComponent, TEnumAsByte<EComponentMobility::Type> Type) {
}

void UJavascriptLibrary::SetMobile(USceneComponent* SceneComponent) {
}

void UJavascriptLibrary::SetIp(FJavascriptInternetAddr& Addr, const FString& ResolvedAddress, bool& bValid) {
}

void UJavascriptLibrary::SetClientTravel(UEngine* Engine, UWorld* InWorld, const FString& NextURL, TEnumAsByte<ETravelType> InTravelType) {
}

void UJavascriptLibrary::SetActorFlags(AActor* Actor, int32 Flags) {
}

bool UJavascriptLibrary::SendMemoryTo(FJavascriptSocket& Socket, const FJavascriptInternetAddr& ToAddr, int32 NumBytes, int32& BytesSent) {
    return false;
}

bool UJavascriptLibrary::SegmentIntersection2D(const FVector& SegmentStartA, const FVector& SegmentEndA, const FVector& SegmentStartB, const FVector& SegmentEndB, FVector& IntersectionPoint) {
    return false;
}

bool UJavascriptLibrary::ResolveIp(const FString& HostName, FString& OutIp) {
    return false;
}

void UJavascriptLibrary::ReregisterComponent(UActorComponent* ActorComponent) {
}

void UJavascriptLibrary::ReregisterAllComponents(AActor* Actor) {
}

void UJavascriptLibrary::RequestAsyncLoad(const FJavascriptStreamableManager& Manager, const TArray<FSoftObjectPath>& TargetsToStream, FJavascriptFunction DelegateToCall, int32 Priority) {
}

void UJavascriptLibrary::RegisterComponent(UActorComponent* ActorComponent) {
}

FReadStringFromFileHandle UJavascriptLibrary::ReadStringFromFileAsync(UObject* Object, const FString& Filename, FJavascriptFunction Function) {
    return FReadStringFromFileHandle{};
}

FString UJavascriptLibrary::ReadStringFromFile(UObject* Object, const FString& Filename) {
    return TEXT("");
}

bool UJavascriptLibrary::ReadFile(UObject* Object, const FString& Filename) {
    return false;
}

bool UJavascriptLibrary::ReadDirectory(UObject* Object, const FString& Directory, TArray<FDirectoryItem>& OutItems) {
    return false;
}

FJavascriptStat UJavascriptLibrary::NewStat(FName InStatName, const FString& InStatDesc, FName InGroupName, FName InGroupCategory, const FString& InGroupDesc, bool bDefaultEnable, bool bShouldClearEveryFrame, EJavascriptStatDataType InStatType, bool bCycleStat, bool bSortByName) {
    return FJavascriptStat{};
}

void UJavascriptLibrary::MarkRenderStateDirty(UActorComponent* Component) {
}

bool UJavascriptLibrary::MakeDirectory(const FString& Path, bool Tree) {
    return false;
}

void UJavascriptLibrary::Log(const FJavascriptLogCategory& Category, ELogVerbosity_JS Verbosity, const FString& Message, const FString& Filename, int32 LineNumber) {
}

UPackage* UJavascriptLibrary::LoadPackage(UPackage* InOuter, const FString& PackageName) {
    return NULL;
}

bool UJavascriptLibrary::IsSuppressed(const FJavascriptLogCategory& Category, ELogVerbosity_JS Verbosity) {
    return false;
}

bool UJavascriptLibrary::IsRegistered(UActorComponent* ActorComponent) {
    return false;
}

bool UJavascriptLibrary::IsPlayInPreview(UWorld* World) {
    return false;
}

bool UJavascriptLibrary::IsPlayInEditor(UWorld* World) {
    return false;
}

bool UJavascriptLibrary::IsPendingKill(AActor* InActor) {
    return false;
}

bool UJavascriptLibrary::IsGeneratedByBlueprint(UClass* InClass) {
    return false;
}

bool UJavascriptLibrary::IsGameWorld(UWorld* World) {
    return false;
}

bool UJavascriptLibrary::IsAsyncLoadComplete(const FJavascriptStreamableManager& Manager, const FSoftObjectPath& Target) {
    return false;
}

bool UJavascriptLibrary::HasUndo(UEngine* Engine) {
    return false;
}

bool UJavascriptLibrary::HasAnyPackageFlags(UPackage* Package, int32 Flags) {
    return false;
}

bool UJavascriptLibrary::HasAnyFlags(UObject* Object, int32 Flags) {
    return false;
}

void UJavascriptLibrary::HandleSeamlessTravelPlayer(AGameModeBase* GameMode, AController*& C) {
}

FBox UJavascriptLibrary::GetWorldBounds(UWorld* InWorld) {
    return FBox{};
}

TArray<UClass*> UJavascriptLibrary::GetSuperClasses(UClass* InClass) {
    return TArray<UClass*>();
}

TArray<FJavscriptProperty> UJavascriptLibrary::GetStructProperties(const FString& StructName, bool bIncludeSuper) {
    return TArray<FJavscriptProperty>();
}

FString UJavascriptLibrary::GetScriptResourceName(FJavascriptProfileNode Node) {
    return TEXT("");
}

int32 UJavascriptLibrary::GetScriptId(FJavascriptProfileNode Node) {
    return 0;
}

FString UJavascriptLibrary::GetPlatformName() {
    return TEXT("");
}

UObject* UJavascriptLibrary::GetOutermost(UObject* Object) {
    return NULL;
}

UObject* UJavascriptLibrary::GetOuter(UObject* Object) {
    return NULL;
}

void UJavascriptLibrary::GetObjectsWithOuter(const UObject* Outer, TArray<UObject*>& Results, bool bIncludeNestedObjects, int32 ExclusionFlags, int32 ExclusionInternalFlags) {
}

void UJavascriptLibrary::GetObjectsOfClass(UClass* ClassToLookFor, TArray<UObject*>& Results, bool bIncludeDerivedClasses, int32 ExcludeFlags, int32 ExclusionInternalFlags) {
}

int32 UJavascriptLibrary::GetNodeId(FJavascriptProfileNode Node) {
    return 0;
}

FString UJavascriptLibrary::GetName(UObject* Object) {
    return TEXT("");
}

UModel* UJavascriptLibrary::GetModel(UWorld* World) {
    return NULL;
}

FString UJavascriptLibrary::GetMetaData(UField* Field, const FString& Key) {
    return TEXT("");
}

int32 UJavascriptLibrary::GetLineNumber(FJavascriptProfileNode Node) {
    return 0;
}

TArray<ULevel*> UJavascriptLibrary::GetLevels(UWorld* World) {
    return TArray<ULevel*>();
}

ULevel* UJavascriptLibrary::GetLevel(AActor* Actor) {
    return NULL;
}

float UJavascriptLibrary::GetLastRenderTime(AActor* Actor) {
    return 0.0f;
}

int32 UJavascriptLibrary::GetHitLineCount(FJavascriptProfileNode Node) {
    return 0;
}

int32 UJavascriptLibrary::GetHitCount(FJavascriptProfileNode Node) {
    return 0;
}

int32 UJavascriptLibrary::GetFunctionParmsSize(UFunction* Function) {
    return 0;
}

FString UJavascriptLibrary::GetFunctionName(FJavascriptProfileNode Node) {
    return TEXT("");
}

int32 UJavascriptLibrary::GetFileSize(UObject* Object, const FString& Filename) {
    return 0;
}

TArray<UField*> UJavascriptLibrary::GetFields(const UObject* Object, bool bIncludeSuper) {
    return TArray<UField*>();
}

UDynamicBlueprintBinding* UJavascriptLibrary::GetDynamicBinding(UClass* Outer, TSubclassOf<UDynamicBlueprintBinding> BindingObjectClass) {
    return NULL;
}

FString UJavascriptLibrary::GetDir(UObject* Object, const FString& WhichDir) {
    return TEXT("");
}

void UJavascriptLibrary::GetDerivedClasses(UClass* ClassToLookFor, TArray<UClass*>& Results, bool bRecursive) {
}

int32 UJavascriptLibrary::GetDeoptInfosCount(FJavascriptProfileNode Node, int32 Index) {
    return 0;
}

FString UJavascriptLibrary::GetDeoptInfo_Stack(FJavascriptProfileNode Node, int32 Index) {
    return TEXT("");
}

FString UJavascriptLibrary::GetDeoptInfo_Reason(FJavascriptProfileNode Node, int32 Index) {
    return TEXT("");
}

int32 UJavascriptLibrary::GetCurrentProcessId() {
    return 0;
}

TArray<UActorComponent*> UJavascriptLibrary::GetComponentsByClass(AActor* Actor, TSubclassOf<UActorComponent> ComponentClass) {
    return TArray<UActorComponent*>();
}

int32 UJavascriptLibrary::GetColumnNumber(FJavascriptProfileNode Node) {
    return 0;
}

FString UJavascriptLibrary::GetClassPathName(UClass* Class) {
    return TEXT("");
}

int32 UJavascriptLibrary::GetChildrenCount(FJavascriptProfileNode Node) {
    return 0;
}

FJavascriptProfileNode UJavascriptLibrary::GetChild(FJavascriptProfileNode Node, int32 Index) {
    return FJavascriptProfileNode{};
}

FName UJavascriptLibrary::GetCategoryName(const FJavascriptLogCategory& Category) {
    return NAME_None;
}

int32 UJavascriptLibrary::GetCallUid(FJavascriptProfileNode Node) {
    return 0;
}

UClass* UJavascriptLibrary::GetBlueprintGeneratedClassFromPath(const FString& Path) {
    return NULL;
}

UClass* UJavascriptLibrary::GetBlueprintGeneratedClass(UBlueprint* Blueprint) {
    return NULL;
}

FString UJavascriptLibrary::GetBailoutReason(FJavascriptProfileNode Node) {
    return TEXT("");
}

FString UJavascriptLibrary::GetArchetypePathName(UObject* Object) {
    return TEXT("");
}

void UJavascriptLibrary::GetAllActorsOfClassAndTagsInCurrentLevel(UObject* WorldContextObject, TSubclassOf<AActor> ActorClass, const TArray<FName>& Tags_Accept, const TArray<FName>& Tags_Deny, TArray<AActor*>& OutActors) {
}

void UJavascriptLibrary::GetAllActorsOfClassAndTags(UObject* WorldContextObject, TSubclassOf<AActor> ActorClass, const TArray<FName>& Tags_Accept, const TArray<FName>& Tags_Deny, TArray<AActor*>& OutActors) {
}

void UJavascriptLibrary::GenerateNavigation(UWorld* InWorld, ARecastNavMesh* NavData) {
}

UPackage* UJavascriptLibrary::FindPackage(UObject* InOuter, const FString& PackageName) {
    return NULL;
}

UObject* UJavascriptLibrary::FindObjectWithOuter(UObject* Outer, UClass* ClassToLookFor, FName NameToLookFor) {
    return NULL;
}

bool UJavascriptLibrary::FileExists(const FString& Filename) {
    return false;
}

UObject* UJavascriptLibrary::Duplicate(UObject* Object, UObject* Outer, FName Name) {
    return NULL;
}

bool UJavascriptLibrary::DirectoryExists(const FString& InDirectory) {
    return false;
}

bool UJavascriptLibrary::DeleteFile(const FString& Filename, bool ReadOnly) {
    return false;
}

bool UJavascriptLibrary::DeleteDirectory(const FString& Path, bool RequireExists, bool Tree) {
    return false;
}

FJavascriptStreamableManager UJavascriptLibrary::CreateStreamableManager() {
    return FJavascriptStreamableManager{};
}

FJavascriptSocket UJavascriptLibrary::CreateSocket(FName SocketType, const FString& Description, bool bForceUDP) {
    return FJavascriptSocket{};
}

UPackage* UJavascriptLibrary::CreatePackage(UObject* Outer, const FString& PackageName) {
    return NULL;
}

FJavascriptLogCategory UJavascriptLibrary::CreateLogCategory(const FString& CategoryName, ELogVerbosity_JS InDefaultVerbosity) {
    return FJavascriptLogCategory{};
}

FJavascriptInternetAddr UJavascriptLibrary::CreateInternetAddr() {
    return FJavascriptInternetAddr{};
}

UEnum* UJavascriptLibrary::CreateEnum(UObject* Outer, FName Name, TArray<FName> DisplayNames, const TArray<FString>& Flags) {
    return NULL;
}

FString UJavascriptLibrary::ConvertRelativePathToFull(UObject* Object, const FString& RelativePath) {
    return TEXT("");
}

FString UJavascriptLibrary::ClipboardPaste() {
    return TEXT("");
}

void UJavascriptLibrary::ClipboardCopy(const FString& String) {
}

void UJavascriptLibrary::CallJS(FJavascriptFunction Function, const FJavascriptStubStruct& CustomStruct) {
}

void UJavascriptLibrary::AddMessage_int(FJavascriptStat Stat, EJavascriptStatOperation InStatOperation, int32 Value, bool bIsCycle) {
}

void UJavascriptLibrary::AddMessage_float(FJavascriptStat Stat, EJavascriptStatOperation InStatOperation, float Value, bool bIsCycle) {
}

void UJavascriptLibrary::AddMessage(FJavascriptStat Stat, EJavascriptStatOperation InStatOperation) {
}

void UJavascriptLibrary::AddDynamicBinding(UClass* Outer, UDynamicBlueprintBinding* BindingObject) {
}

UWorld* UJavascriptLibrary::Actor_GetWorld(AActor* Actor) {
    return NULL;
}


