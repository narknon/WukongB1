#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "BGUPlacedEditorUtilityBase.h"
#include "DispLibCollisionProfileNames.h"
#include "DisoLib_EditorSGDTool.generated.h"

class AActor;
class UStaticMesh;

UCLASS(Blueprintable)
class ADisoLib_EditorSGDTool : public ABGUPlacedEditorUtilityBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> BoneNameList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* SGDActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 AutoCompilingSaveAfterClean: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UStaticMesh*> DelectObjectsArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UStaticMesh*> RetainObjectsArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AddTagToBoneChildComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    DispLibCollisionProfileNames CollisionPresetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Override_CollisionEnable: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECollisionEnabled::Type CollisionEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Override_CollisionObjectType: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECollisionChannel CollisionObjectType;
    
    ADisoLib_EditorSGDTool(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void CreateBoneComp();
    
    UFUNCTION(BlueprintCallable)
    void CreateSubMeshComp();
    
    UFUNCTION(BlueprintCallable)
    void CleanAllSubMeshComp();
    
    UFUNCTION(BlueprintCallable)
    void AddTagToBoneChildComps();
    
    UFUNCTION(BlueprintCallable)
    void CleanOneBoneSubMeshComp();
    
    UFUNCTION(BlueprintCallable)
    void CreateOneBoneSubMeshComp();
    
    UFUNCTION(BlueprintCallable)
    void CreateLevelActorFromUnit();
    
    UFUNCTION(BlueprintCallable)
    void ToggleSubMeshCompVisable();
    
    UFUNCTION(BlueprintCallable)
    void LogBoneChildCompsCPDData();
    
    UFUNCTION(BlueprintCallable)
    void ToggleBoneChildCompsHidenInGame();
    
    UFUNCTION(BlueprintCallable)
    void SetBoneChildCompsCollisionSetting();
    
    UFUNCTION(BlueprintCallable)
    void CleanOneBoneSubMeshCompByDelectObjectsArray();
    
    UFUNCTION(BlueprintCallable)
    void CleanOneBoneSubMeshCompByRetainObjectsArray();
    
};

