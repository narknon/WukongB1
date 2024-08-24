#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ENGSEasingFunc.h"
#include "GSEaseFunc.generated.h"

UCLASS(Blueprintable)
class UGSEaseFunc : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGSEaseFunc();

    UFUNCTION(BlueprintCallable)
    static float Sin(float Start, float End, float alpha, float Param);
    
    UFUNCTION(BlueprintCallable)
    static float Ease(ENGSEasingFunc ENGSEasingFunc, float Start, float End, float alpha, float Param, float BlendExp, int32 Steps);
    
    UFUNCTION(BlueprintCallable)
    static FColor EaseColor(ENGSEasingFunc ENGSEasingFunc, FColor Start, FColor End, float alpha, float Param, float BlendExp, int32 Steps);
    
    UFUNCTION(BlueprintCallable)
    static FVector EaseVector(ENGSEasingFunc ENGSEasingFunc, FVector Start, FVector End, float alpha, float Param, float BlendExp, int32 Steps);
    
    UFUNCTION(BlueprintCallable)
    static float BackEaseIn(float Start, float End, float alpha, float Param);
    
    UFUNCTION(BlueprintCallable)
    static FRotator EaseRotator(ENGSEasingFunc ENGSEasingFunc, FRotator Start, FRotator End, float alpha, float Param, float BlendExp, int32 Steps);
    
    UFUNCTION(BlueprintCallable)
    static float BackEaseOut(float Start, float End, float alpha, float Param);
    
    UFUNCTION(BlueprintCallable)
    static float EaseInQuart(float Start, float End, float alpha, float Param);
    
    UFUNCTION(BlueprintCallable)
    static FTransform EaseTransform(ENGSEasingFunc ENGSEasingFunc, FTransform Start, FTransform End, float alpha, float Param, float BlendExp, int32 Steps);
    
    UFUNCTION(BlueprintCallable)
    static float BackEaseInOut(float Start, float End, float alpha, float Param);
    
    UFUNCTION(BlueprintCallable)
    static float EaseInOutQuint(float Start, float End, float alpha, float Param);
    
};

