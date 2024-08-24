#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BAIS_Base.h"
#include "EscapeWay.h"
#include "BAIS_SurroundObstacleTick.generated.h"

class ABGUCharacter;
class UEnvQuery;

UCLASS(Blueprintable)
class UBAIS_SurroundObstacleTick : public UBAIS_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* CheckObstacleEQSTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CheckDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CheckPointNum;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector2D> CheckPointsWeightList;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EscapeWay EscapeWay;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABGUCharacter* OwnerCharacter;
    
public:
    UBAIS_SurroundObstacleTick();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPropertyChanged(const FString& MemberName, const FString& PropertyName);
    
};

