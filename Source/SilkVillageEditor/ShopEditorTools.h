#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ShopEditorTools.generated.h"
UCLASS()
class SILKVILLAGEEDITOR_API UShopEditorTools : public UBlueprintFunctionLibrary {
 GENERATED_BODY()
public:
 UFUNCTION(BlueprintCallable,Category="Shop Editor") static void StartShopPIE();
 UFUNCTION(BlueprintCallable,Category="Shop Editor") static FString InspectBlueprint(const FString& AssetPath);
 UFUNCTION(BlueprintCallable,Category="Shop Editor") static FString ApplyShopUpgrade();
 UFUNCTION(BlueprintCallable,Category="Shop Editor") static FString RunShopTests();
};
