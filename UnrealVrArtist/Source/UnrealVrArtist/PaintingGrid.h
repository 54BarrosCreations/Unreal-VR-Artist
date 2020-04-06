// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/UniformGridPanel.h"

#include "PaintingGridCard.h"

#include "PaintingGrid.generated.h"

/**
 *
 */
UCLASS()
class UNREALVRARTIST_API UPaintingGrid : public UUserWidget
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	void AddPainting(int32 PaintingIndex, FString PaintingName);
	void ClearPaintings();

protected:
	UPROPERTY(BlueprintReadonly, VisibleAnywhere, meta = (BindWidget))
	UUniformGridPanel* PaintingGrid;

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UPaintingGridCard> GridCardClass;

};