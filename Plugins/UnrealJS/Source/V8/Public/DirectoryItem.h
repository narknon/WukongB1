#pragma once
#include "CoreMinimal.h"
#include "DirectoryItem.generated.h"

USTRUCT(BlueprintType)
struct V8_API FDirectoryItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDirectory;
    
    FDirectoryItem();
};

