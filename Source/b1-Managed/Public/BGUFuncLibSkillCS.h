#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BGUFuncLibSkillCS.generated.h"

class AActor;
class ACharacter;

UCLASS(Blueprintable)
class UBGUFuncLibSkillCS : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBGUFuncLibSkillCS();

    UFUNCTION(BlueprintCallable)
    static int32 BGUGetLastSkillID(AActor* Unit);
    
    UFUNCTION(BlueprintCallable)
    static int32 BGUGetCastingSkillID(ACharacter* Unit);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float BGUGetLastSkillCastTime(AActor* Unit, int32 SkillID);
    
    UFUNCTION(BlueprintCallable)
    static FVector BGUCalcSkillMontageScaleRate(ACharacter* Unit, FVector TargetPos, float NotifyBeginTime, float NotifyEndTime, float AMScaleMinRate, float AMScaleMaxRate, float AMScaleMoveOffset, float AMScaleMoveOffsetZ, bool EnableDebug);
    
};

