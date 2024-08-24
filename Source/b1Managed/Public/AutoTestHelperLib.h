#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ETriggerEvent.h"
#include "SpellType.h"
#include "Templates/SubclassOf.h"
#include "AutoTestHelperLib.generated.h"

class AActor;
class ABGUCharacterCS;
class UObject;
class UWidget;
class UWorld;

UCLASS(Blueprintable)
class UAutoTestHelperLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAutoTestHelperLib();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void Jump(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void Dodge(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void OpenBag(UObject* WorldContext, bool IsOpen);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void TestCode(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static bool FindText(UObject* WorldContext, const FString& Text, bool bNeedClick);
    
    UFUNCTION(BlueprintCallable)
    static void GenActor(UPARAM(Ref) UWorld*& World, TSubclassOf<AActor> ActorClass);
    
    UFUNCTION(BlueprintCallable)
    static void SetMaxHp(AActor* Unit);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static bool HasSpell(UObject* WorldContext, int32 SpellID);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static bool Interact(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void CastSpell(UObject* WorldContext, SpellType SkillType);
    
    UFUNCTION(BlueprintCallable)
    static void QAPauseBT(AActor* Unit, bool Status);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void KillEnemy(UObject* WorldContext, UPARAM(Ref) AActor*& KillTarget);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static bool RunToEnemy(UObject* WorldContext, ABGUCharacterCS* Enemy, int32 ReachRadius);
    
    UFUNCTION(BlueprintCallable)
    static void ClickButton(UWidget* Btn);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void LightAttack(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void HeavyAttack(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void MouseGoBack(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable)
    static void SetCurrentHp(AActor* Unit, int32 Hp);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void RemoveGroupAI(UObject* WorldContext, AActor* OwnerActor);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static bool RunToPosition(UObject* WorldContext, FVector TargetLocation, int32 ReachRadius);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static int32 HasItemNumber(UObject* WorldContext, int32 ItemId);
    
    UFUNCTION(BlueprintCallable)
    static FString ReadDataTable(int32 ID);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static bool FindNearbyUnit(UObject* WorldContext, int32 AttackRadius, ABGUCharacterCS*& EnemyUnit, const FString& UnitBP);
    
    UFUNCTION(BlueprintCallable)
    static bool IsUnitInBattle(AActor* Unit);
    
    UFUNCTION(BlueprintCallable)
    static void GenShiXianFeng(UPARAM(Ref) UWorld*& World);
    
    UFUNCTION(BlueprintCallable)
    static bool CanUnitBeTarget(ABGUCharacterCS* Enemy);
    
    UFUNCTION(BlueprintCallable)
    static void SetPlayerAttack(AActor* Unit, int32 AttackNum);
    
    UFUNCTION(BlueprintCallable)
    static void QADrawSkillRange(AActor* Unit, int32 SkillID, float Duration);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void CameraLockTarget(UObject* WorldContext, AActor* LockTarget);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void AutoMoveComplete(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static bool IsEquippingSpell(UObject* WorldContext, int32 SpellID);
    
    UFUNCTION(BlueprintCallable)
    static TArray<int32> GetUnitAllSkillID(AActor* Unit);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FString> QAStringArraySort(TArray<FString> StringList);
    
    UFUNCTION(BlueprintCallable)
    static FString QAGetCurrentAMName(AActor* Target);
    
    UFUNCTION(BlueprintCallable)
    static bool JudgeWidgetVisible(UWidget* Widget);
    
    UFUNCTION(BlueprintCallable)
    static FString QAGetCurrentSkillID(AActor* Target);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void GetTamerInViewCount(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static ABGUCharacterCS* GetPlayerTargetActor(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static bool GetPlayingSequenceID(UObject* WorldContext, int32& SequenceID);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static bool IsPlayingCameraMovie(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static bool GetActorLocationByName(UObject* WorldContext, const FString& ActorName, FVector& ActorLocation);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void QAUploadPerformanceData(UObject* WorldContext, const FString& Catelog, const FString& Summary, TArray<FString> FileList);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static bool RebirthPointChoiceClick(UObject* WorldContext, const FString& Choice);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void AutoTestInjectInputEvent(UObject* WorldContext, const FString& ActionName, ETriggerEvent TriggerEvent);
    
};

