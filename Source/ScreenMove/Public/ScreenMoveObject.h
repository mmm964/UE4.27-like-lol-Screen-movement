// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ScreenMoveObject.generated.h"

/**
 * 
 */
UCLASS()
class SCREENMOVE_API UScreenMoveObject : public UObject
{
	GENERATED_BODY()
public:
	
	UScreenMoveObject();
	//Defaults to true, moving continuously
	virtual bool IsCameraContinuouslyMoving();
virtual  void Excention(APlayerController *InController);
protected:
	void ListenScreenMove(APlayerController *InController);
private:
	bool MouseinInActiveArea;
	
};
