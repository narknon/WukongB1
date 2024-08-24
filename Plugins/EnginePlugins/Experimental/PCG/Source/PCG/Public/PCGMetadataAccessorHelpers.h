#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PCGPoint.h"
#include "PCGMetadataAccessorHelpers.generated.h"

class UObject;
class UPCGMetadata;

UCLASS(Blueprintable)
class PCG_API UPCGMetadataAccessorHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UPCGMetadataAccessorHelpers();

    UFUNCTION(BlueprintCallable)
    static void SetVectorAttributeByMetadataKey(UPARAM(Ref) int64& Key, UPCGMetadata* MetaData, FName AttributeName, const FVector& Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetVectorAttribute(UPARAM(Ref) FPCGPoint& Point, UPCGMetadata* MetaData, FName AttributeName, const FVector& Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetVector4AttributeByMetadataKey(UPARAM(Ref) int64& Key, UPCGMetadata* MetaData, FName AttributeName, const FVector4& Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetVector4Attribute(UPARAM(Ref) FPCGPoint& Point, UPCGMetadata* MetaData, FName AttributeName, const FVector4& Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetVector2AttributeByMetadataKey(UPARAM(Ref) int64& Key, UPCGMetadata* MetaData, FName AttributeName, const FVector2D& Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetVector2Attribute(UPARAM(Ref) FPCGPoint& Point, UPCGMetadata* MetaData, FName AttributeName, const FVector2D& Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetTransformAttributeByMetadataKey(UPARAM(Ref) int64& Key, UPCGMetadata* MetaData, FName AttributeName, const FTransform& Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetTransformAttribute(UPARAM(Ref) FPCGPoint& Point, UPCGMetadata* MetaData, FName AttributeName, const FTransform& Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetStringAttributeByMetadataKey(UPARAM(Ref) int64& Key, UPCGMetadata* MetaData, FName AttributeName, const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetStringAttribute(UPARAM(Ref) FPCGPoint& Point, UPCGMetadata* MetaData, FName AttributeName, const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetRotatorAttributeByMetadataKey(UPARAM(Ref) int64& Key, UPCGMetadata* MetaData, FName AttributeName, const FRotator& Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetRotatorAttribute(UPARAM(Ref) FPCGPoint& Point, UPCGMetadata* MetaData, FName AttributeName, const FRotator& Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetQuatAttributeByMetadataKey(UPARAM(Ref) int64& Key, UPCGMetadata* MetaData, FName AttributeName, const FQuat& Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetQuatAttribute(UPARAM(Ref) FPCGPoint& Point, UPCGMetadata* MetaData, FName AttributeName, const FQuat& Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetNameAttribute(UPARAM(Ref) FPCGPoint& Point, UPCGMetadata* MetaData, FName AttributeName, const FName& Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetInteger64AttributeByMetadataKey(UPARAM(Ref) int64& Key, UPCGMetadata* MetaData, FName AttributeName, int64 Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetInteger64Attribute(UPARAM(Ref) FPCGPoint& Point, UPCGMetadata* MetaData, FName AttributeName, int64 Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetInteger32AttributeByMetadataKey(UPARAM(Ref) int64& Key, UPCGMetadata* MetaData, FName AttributeName, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetInteger32Attribute(UPARAM(Ref) FPCGPoint& Point, UPCGMetadata* MetaData, FName AttributeName, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetFloatAttributeByMetadataKey(UPARAM(Ref) int64& Key, UPCGMetadata* MetaData, FName AttributeName, float Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetFloatAttribute(UPARAM(Ref) FPCGPoint& Point, UPCGMetadata* MetaData, FName AttributeName, float Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetDoubleAttributeByMetadataKey(UPARAM(Ref) int64& Key, UPCGMetadata* MetaData, FName AttributeName, double Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetDoubleAttribute(UPARAM(Ref) FPCGPoint& Point, UPCGMetadata* MetaData, FName AttributeName, double Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetBoolAttributeByMetadataKey(UPARAM(Ref) int64& Key, UPCGMetadata* MetaData, FName AttributeName, bool Value);
    
    UFUNCTION(BlueprintCallable)
    static void SetBoolAttribute(UPARAM(Ref) FPCGPoint& Point, UPCGMetadata* MetaData, FName AttributeName, bool Value);
    
    UFUNCTION(BlueprintCallable)
    static bool SetAttributeFromPropertyByMetadataKey(UPARAM(Ref) int64& Key, UPCGMetadata* MetaData, FName AttributeName, const UObject* Object, FName PropertyName);
    
    UFUNCTION(BlueprintCallable)
    static void InitializeMetadata(UPARAM(Ref) FPCGPoint& Point, UPCGMetadata* MetaData, const FPCGPoint& ParentPoint, const UPCGMetadata* ParentMetadata);
    
    UFUNCTION(BlueprintCallable)
    static bool HasAttributeSetByMetadataKey(int64 Key, const UPCGMetadata* MetaData, FName AttributeName);
    
    UFUNCTION(BlueprintCallable)
    static bool HasAttributeSet(const FPCGPoint& Point, const UPCGMetadata* MetaData, FName AttributeName);
    
    UFUNCTION(BlueprintCallable)
    static FVector GetVectorAttributeByMetadataKey(int64 Key, const UPCGMetadata* MetaData, FName AttributeName);
    
    UFUNCTION(BlueprintCallable)
    static FVector GetVectorAttribute(const FPCGPoint& Point, const UPCGMetadata* MetaData, FName AttributeName);
    
    UFUNCTION(BlueprintCallable)
    static FVector4 GetVector4AttributeByMetadataKey(int64 Key, const UPCGMetadata* MetaData, FName AttributeName);
    
    UFUNCTION(BlueprintCallable)
    static FVector4 GetVector4Attribute(const FPCGPoint& Point, const UPCGMetadata* MetaData, FName AttributeName);
    
    UFUNCTION(BlueprintCallable)
    static FVector2D GetVector2AttributeByMetadataKey(int64 Key, const UPCGMetadata* MetaData, FName AttributeName);
    
    UFUNCTION(BlueprintCallable)
    static FVector2D GetVector2Attribute(const FPCGPoint& Point, const UPCGMetadata* MetaData, FName AttributeName);
    
    UFUNCTION(BlueprintCallable)
    static FTransform GetTransformAttributeByMetadataKey(int64 Key, const UPCGMetadata* MetaData, FName AttributeName);
    
    UFUNCTION(BlueprintCallable)
    static FTransform GetTransformAttribute(const FPCGPoint& Point, const UPCGMetadata* MetaData, FName AttributeName);
    
    UFUNCTION(BlueprintCallable)
    static FString GetStringAttributeByMetadataKey(int64 Key, const UPCGMetadata* MetaData, FName AttributeName);
    
    UFUNCTION(BlueprintCallable)
    static FString GetStringAttribute(const FPCGPoint& Point, const UPCGMetadata* MetaData, FName AttributeName);
    
    UFUNCTION(BlueprintCallable)
    static FRotator GetRotatorAttributeByMetadataKey(int64 Key, const UPCGMetadata* MetaData, FName AttributeName);
    
    UFUNCTION(BlueprintCallable)
    static FRotator GetRotatorAttribute(const FPCGPoint& Point, const UPCGMetadata* MetaData, FName AttributeName);
    
    UFUNCTION(BlueprintCallable)
    static FQuat GetQuatAttributeByMetadataKey(int64 Key, const UPCGMetadata* MetaData, FName AttributeName);
    
    UFUNCTION(BlueprintCallable)
    static FQuat GetQuatAttribute(const FPCGPoint& Point, const UPCGMetadata* MetaData, FName AttributeName);
    
    UFUNCTION(BlueprintCallable)
    static FName GetNameAttribute(const FPCGPoint& Point, const UPCGMetadata* MetaData, FName AttributeName);
    
    UFUNCTION(BlueprintCallable)
    static int64 GetInteger64AttributeByMetadataKey(int64 Key, const UPCGMetadata* MetaData, FName AttributeName);
    
    UFUNCTION(BlueprintCallable)
    static int64 GetInteger64Attribute(const FPCGPoint& Point, const UPCGMetadata* MetaData, FName AttributeName);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetInteger32AttributeByMetadataKey(int64 Key, const UPCGMetadata* MetaData, FName AttributeName);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetInteger32Attribute(const FPCGPoint& Point, const UPCGMetadata* MetaData, FName AttributeName);
    
    UFUNCTION(BlueprintCallable)
    static float GetFloatAttributeByMetadataKey(int64 Key, const UPCGMetadata* MetaData, FName AttributeName);
    
    UFUNCTION(BlueprintCallable)
    static float GetFloatAttribute(const FPCGPoint& Point, const UPCGMetadata* MetaData, FName AttributeName);
    
    UFUNCTION(BlueprintCallable)
    static double GetDoubleAttributeByMetadataKey(int64 Key, const UPCGMetadata* MetaData, FName AttributeName);
    
    UFUNCTION(BlueprintCallable)
    static double GetDoubleAttribute(const FPCGPoint& Point, const UPCGMetadata* MetaData, FName AttributeName);
    
    UFUNCTION(BlueprintCallable)
    static bool GetBoolAttributeByMetadataKey(int64 Key, const UPCGMetadata* MetaData, FName AttributeName);
    
    UFUNCTION(BlueprintCallable)
    static bool GetBoolAttribute(const FPCGPoint& Point, const UPCGMetadata* MetaData, FName AttributeName);
    
    UFUNCTION(BlueprintCallable)
    static void CopyPoint(const FPCGPoint& InPoint, FPCGPoint& OutPoint, bool bCopyMetadata, const UPCGMetadata* InMetaData, UPCGMetadata* OutMetadata);
    
};

