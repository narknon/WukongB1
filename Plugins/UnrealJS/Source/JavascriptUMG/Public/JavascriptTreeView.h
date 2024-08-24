#pragma once
#include "CoreMinimal.h"
#include "Framework/Views/ITypedTableView.h"
#include "Types/SlateEnums.h"
#include "Styling/SlateTypes.h"
#include "Styling/SlateTypes.h"
#include "Styling/SlateTypes.h"
#include "Components/ListViewBase.h"
#include "JavascriptColumn.h"
#include "JavascriptTreeView.generated.h"

class UJavascriptContext;
class UJavascriptTreeView;
class UObject;
class UWidget;

UCLASS(Blueprintable)
class JAVASCRIPTUMG_API UJavascriptTreeView : public UListViewBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnGetChildrenUObject, UObject*, Item, UJavascriptTreeView*, Instance);
    DECLARE_DYNAMIC_DELEGATE_RetVal_ThreeParams(UWidget*, FOnGenerateRow, UObject*, Object, FName, ID, UJavascriptTreeView*, Instance);
    DECLARE_DYNAMIC_DELEGATE_ThreeParams(FOnExpansionChanged, UObject*, Item, bool, bExpanded, UJavascriptTreeView*, Instance);
    DECLARE_DYNAMIC_DELEGATE_RetVal_OneParam(UWidget*, FOnContextMenuOpening, UJavascriptTreeView*, Instance);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGenerateRow OnGenerateRowEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnExpansionChanged OnExpansionChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnContextMenuOpening OnContextMenuOpening;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGetChildrenUObject OnGetChildren;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UJavascriptContext* JavascriptContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHeaderRowStyle HeaderRowStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTableRowStyle TableRowStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScrollBarStyle ScrollBarStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ESelectionMode::Type> SelectionMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UObject*> Children;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FJavascriptColumn> Columns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UWidget*> ColumnWidgets;
    
    UJavascriptTreeView();

    UFUNCTION(BlueprintCallable)
    void SetSingleExpandedItem(UObject* InItem);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetSelection(UObject* SoleSelectedItem);
    
    UFUNCTION(BlueprintCallable)
    void SetItemExpansion(UObject* InItem, bool InShouldExpandItem);
    
    UFUNCTION(BlueprintCallable)
    void SetDoubleClickSelection(UObject* SelectedItem);
    
    UFUNCTION(BlueprintCallable)
    void RequestTreeRefresh();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSelectionChanged(UObject* Object, TEnumAsByte<ESelectInfo::Type> Type);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDoubleClick(UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    bool IsItemExpanded(UObject* InItem);
    
    UFUNCTION(BlueprintCallable)
    bool IsDoubleClickSelection(UObject* SelectedItem);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetSelectedItems(TArray<UObject*>& OutItems);
    
    UFUNCTION(BlueprintCallable)
    void GetDoubleClickedItems(TArray<UObject*>& OutItems);
    
    UFUNCTION(BlueprintCallable)
    void ClearDoubleClickSelection();
    
};

