#pragma once
#include "CoreMinimal.h"
#include "BGWDataAsset.h"
#include "CharacterSpawnerLibInfo.h"
#include "BGWProceduralSpawnCharacterLibDataAsset.generated.h"

UCLASS(Blueprintable)
class UBGWProceduralSpawnCharacterLibDataAsset : public UBGWDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharacterSpawnerLibInfo> CharacterInfoList;
    
    UBGWProceduralSpawnCharacterLibDataAsset();

};

