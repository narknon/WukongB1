#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MovieSceneFwd.h"
#include "MovieSceneObjectBindingID.h"
#include "SequenceBindingIDInCS.h"
#include "GSE_SequencerFuncLib.generated.h"

class AActor;
class ALevelSequenceActor;
class ULevel;
class ULevelSequence;
class UMovieSceneSequencePlayer;
class UObject;

UCLASS(Blueprintable)
class UNREALEXTENT_API UGSE_SequencerFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGSE_SequencerFuncLib();

    UFUNCTION(BlueprintCallable)
    static bool SequenceSetClockSource(UMovieSceneSequencePlayer* SequencePlayer, EUpdateClockSource ClockSource);
    
    UFUNCTION(BlueprintCallable)
    static int32 SequenceMasterAutoBind(ALevelSequenceActor* SequenceActor, AActor* MasterActor);
    
    UFUNCTION(BlueprintCallable)
    static bool SequenceActorSetBindingByName(ALevelSequenceActor* SequenceActor, const FName& TargetName, const TArray<AActor*>& Actors, bool bUseDisplayName);
    
    UFUNCTION(BlueprintCallable)
    static void SequenceActorInitPlayerCS(ALevelSequenceActor* SeqActor, ULevel* Lvl, ULevelSequence* LevelSeq);
    
    UFUNCTION(BlueprintCallable)
    static void SequenceActorAddBindingCS(ALevelSequenceActor* SeqActor, const FSequenceBindingIDInCS& BindingID, AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void LevelSequenceUnbindPossessableObjectCS(ULevelSequence* LevelSequence, const FSequenceBindingIDInCS& BindingID);
    
    UFUNCTION(BlueprintCallable)
    static void LevelSequenceBindPossessableObjectCS(ULevelSequence* LevelSequence, const FSequenceBindingIDInCS& BindingID, UObject* BindObj, UObject* Ctx);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsMovieSceneObjectBindingIDValidCS(const FSequenceBindingIDInCS& BindID);
    
    UFUNCTION(BlueprintCallable)
    static FSequenceBindingIDInCS GetLevelSequenceBindingIDByNameCS(ULevelSequence* LevelSequence, const FName& TargetName);
    
    UFUNCTION(BlueprintCallable)
    static FMovieSceneObjectBindingID GetLevelSequenceBindingIDByName(ULevelSequence* LevelSequence, const FName& TargetName);
    
    UFUNCTION(BlueprintCallable)
    static FMovieSceneObjectBindingID GetLevelSequenceBindingIDByDisplayName(ULevelSequence* LevelSequence, const FName& TargetName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float FQualifiedTimeAsSeconds(const FQualifiedFrameTime& FrameTime);
    
};

