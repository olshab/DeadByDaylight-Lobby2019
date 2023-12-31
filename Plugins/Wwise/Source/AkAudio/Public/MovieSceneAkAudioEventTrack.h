#pragma once

#include "CoreMinimal.h"
#include "MovieSceneAkTrack.h"
#include "MovieSceneAkAudioEventTrack.generated.h"

UCLASS(MinimalAPI)
class UMovieSceneAkAudioEventTrack : public UMovieSceneAkTrack
{
	GENERATED_BODY()

public:
	UMovieSceneAkAudioEventTrack();
};

FORCEINLINE uint32 GetTypeHash(const UMovieSceneAkAudioEventTrack) { return 0; }
