// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CoreUserWidget.generated.h"

/**
 * 
 */
UCLASS()
class TEMPCAPSTONEPROJECT_API UCoreUserWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Custome User Widget")
	FString NewWidgetName;

	void SetWidgetName(FString NewWidgetName);

	FString GetWidgetName() { return NewWidgetName; }
};
