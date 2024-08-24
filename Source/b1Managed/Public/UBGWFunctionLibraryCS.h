#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UBGWFunctionLibraryCS.generated.h"

class AActor;
class UGSMapAreaBaseData;
class UGSMapAreaDetailData;
class UMediaPlayer;
class UMediaSource;
class UObject;

UCLASS(Blueprintable)
class UUBGWFunctionLibraryCS : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUBGWFunctionLibraryCS();

    UFUNCTION(BlueprintCallable)
    static void TestPlayMedia(UMediaPlayer* MediaPlayerStop, UMediaPlayer* MediaPlayerOpen, UMediaSource* MediaSource);
    
    UFUNCTION(BlueprintCallable)
    static void WoodTmpTestGC();
    
    UFUNCTION(BlueprintCallable)
    static int32 TestCalcPosToMapAreaID(FVector2D Pos, UGSMapAreaBaseData* MapAreaBaseData, UGSMapAreaDetailData* MapAreaDetailData);
    
    UFUNCTION(BlueprintCallable)
    static bool HasSequenceAlreadyPlayed(AActor* WorldCtx, int32 SeqID);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static int32 TestCalcPosToMapAreaIDInGame(int32 MapId, FVector2D Pos, UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable)
    static int32 SetMapAreaColorDataForEditorUtil(int32 MapId, UGSMapAreaBaseData* TargetBaseData, FString& ErrMsg);
    
};

