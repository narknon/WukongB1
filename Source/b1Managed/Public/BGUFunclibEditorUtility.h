#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "LevelSkeletalMeshCheckInfoHelper.h"
#include "BGUFunclibEditorUtility.generated.h"

class AActor;
class ULevel;

UCLASS(Blueprintable)
class UBGUFunclibEditorUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBGUFunclibEditorUtility();

    UFUNCTION(BlueprintCallable)
    static void PrintStringsToCSV(TArray<FString> Infos, const FString& CSVPath);
    
    UFUNCTION(BlueprintCallable)
    static TArray<int32> GetSkillIDByAMPath(const FString& AMPath);
    
    UFUNCTION(BlueprintCallable)
    static FString GetAMPathBySkillID(int32 SkillID);
    
    UFUNCTION(BlueprintCallable)
    static void SwitchDebugWidgetState(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static TArray<AActor*> GetAllSkeletalActorInLevel(ULevel* Level);
    
    UFUNCTION(BlueprintCallable)
    static bool CheckIsActorInactiveManaged(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void PrintSkeletalMeshPerfInfoCSV(TArray<FLevelSkeletalMeshCheckInfoHelper> LevelSkeletalMeshInfo, const FString& CSVPath);
    
    UFUNCTION(BlueprintCallable)
    static void SetupSkeletalActorInactiveInfo(AActor* InActor);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FLevelSkeletalMeshCheckInfoHelper> GetAllSkeletalActorWithoutPerfFromSelected(TArray<FString> SelectedLevels);
    
};

