#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ESubstanceGenerationMode.h"
#include "SubstanceInstanceFactory.generated.h"

class USubstanceGraphInstance;

UCLASS(Blueprintable)
class SUBSTANCECORE_API USubstanceInstanceFactory : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USubstanceGraphInstance*> mGraphInstances;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RelativeSourceFilePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AbsoluteSourceFilePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SourceFileTimestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ESubstanceGenerationMode> GenerationMode;
    
    USubstanceInstanceFactory();

};

