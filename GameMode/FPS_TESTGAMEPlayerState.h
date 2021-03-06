// This code was written by 康子秋

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "FPS_TESTGAMEPlayerState.generated.h"

/**
 * 
 */
UCLASS()
class FPS_TESTGAME_API AFPS_TESTGAMEPlayerState : public APlayerState
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable,Category = "PlayerState")
	void AddScore(float ScoreDelta);
	
};
