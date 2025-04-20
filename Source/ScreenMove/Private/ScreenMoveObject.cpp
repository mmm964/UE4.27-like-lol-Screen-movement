// Fill out your copyright notice in the Description page of Project Settings.


#include "ScreenMoveObject.h"
#include "Camera/CameraComponent.h"
#include "Runtime/Engine/Classes/Engine/LocalPlayer.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
#include "Runtime/Engine/Classes/GameFramework/Pawn.h"


UScreenMoveObject::UScreenMoveObject():MouseinInActiveArea(false)
{
}

bool UScreenMoveObject::IsCameraContinuouslyMoving()
{
	return true;
}

void UScreenMoveObject::Excention(APlayerController* InController)
{
	ListenScreenMove(InController);
}


void UScreenMoveObject::ListenScreenMove(APlayerController* InController)
{
	if(InController)
	{
		
		ULocalPlayer*Play=Cast<ULocalPlayer>(InController->Player);
		if(Play)
		{
			FVector2D MousePosition;
			FVector2D ViewSize;
			Play->ViewportClient->GetMousePosition(MousePosition);
			Play->ViewportClient->GetViewportSize(ViewSize);
			if(ViewSize.X<=MousePosition.X+50||ViewSize.Y<=MousePosition.Y+50||MousePosition.X<=50||MousePosition.Y<=50)
			{
				APawn*Pawn=InController->GetPawn();
				if(Pawn)
				{
					
					float X=MousePosition.X-ViewSize.X/2;
					float Y=MousePosition.Y-ViewSize.Y/2;
					float UX=abs(X)/X;
					//float UY=abs(Y)/Y;
					
					float XY=X*X+Y*Y;//取总差长。
					float SXY=sqrt(XY);//
					
					UCameraComponent*Camare=Pawn->FindComponentByClass<UCameraComponent>();
					FVector Location=Camare->GetComponentLocation()+FVector(80*(-1)*Y/SXY,80*X/SXY,0.f);//利用三角函数来获取到方向
					if(IsCameraContinuouslyMoving())
					{
						Camare->SetWorldLocation(Location);
					}
					else//不一直就要鼠标不在移动区域才可以。
						{
						if(!MouseinInActiveArea)
						{
							MouseinInActiveArea=true;
							Camare->SetWorldLocation(Location);
						}
						}
				}
			}
			else
			{
				MouseinInActiveArea=false;
			}
		}
	}
}
