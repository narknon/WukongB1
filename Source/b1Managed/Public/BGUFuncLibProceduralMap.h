#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MapCatFlag.h"
#include "MapProceduralInfo.h"
#include "BGUFuncLibProceduralMap.generated.h"

class UBGWCustomLightConfigDataAsset;
class UBGWProceduralMapBlockMappingDataAsset;
class UBGWProceduralMapConfigDataAsset;

UCLASS(Blueprintable)
class UBGUFuncLibProceduralMap : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBGUFuncLibProceduralMap();

    UFUNCTION(BlueprintCallable)
    static bool BuildDemoMapInfo(UPARAM(Ref) FMapProceduralInfo& MapInfo);
    
    UFUNCTION(BlueprintCallable)
    static void MapConnectAllPoints(UPARAM(Ref) FMapProceduralInfo& MapInfo, MapCatFlag AllowedGeneralCatDir, MapCatFlag AllowedEntranceOutCatDir, MapCatFlag AllowedExitInCatDir);
    
    UFUNCTION(BlueprintCallable)
    static void MapPopulateWithPoints(UPARAM(Ref) FMapProceduralInfo& MapInfo);
    
    UFUNCTION(BlueprintCallable)
    static void InitProceduralMapConfig(UPARAM(Ref) UBGWProceduralMapConfigDataAsset*& MapConfigDataAsset, UPARAM(Ref) UBGWProceduralMapBlockMappingDataAsset*& MapBlockMappingInfo, UPARAM(Ref) UBGWCustomLightConfigDataAsset*& MapLightInfo, FMapProceduralInfo& MapInfo);
    
    UFUNCTION(BlueprintCallable)
    static bool BuildWildernessLinearInfo(UPARAM(Ref) FMapProceduralInfo& MapInfo);
    
    UFUNCTION(BlueprintCallable)
    static bool GenerateProceduralMapData(UPARAM(Ref) FMapProceduralInfo& MapInfo);
    
    UFUNCTION(BlueprintCallable)
    static bool BuildProceduralDungeonsInfo(UPARAM(Ref) FMapProceduralInfo& MapInfo);
    
};

