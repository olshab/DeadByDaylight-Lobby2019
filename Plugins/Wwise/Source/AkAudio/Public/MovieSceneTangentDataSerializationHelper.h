#pragma once

#include "CoreMinimal.h"
#include "Curves/RichCurve.h"
#include "MovieSceneTangentDataSerializationHelper.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneTangentDataSerializationHelper
{
	GENERATED_BODY()

public:
	UPROPERTY()
	float ArriveTangent;

	UPROPERTY()
	float LeaveTangent;

	UPROPERTY()
	TEnumAsByte<ERichCurveTangentWeightMode> TangentWeightMode;

	UPROPERTY()
	float ArriveTangentWeight;

	UPROPERTY()
	float LeaveTangentWeight;

public:
	AKAUDIO_API FMovieSceneTangentDataSerializationHelper();
};

FORCEINLINE uint32 GetTypeHash(const FMovieSceneTangentDataSerializationHelper) { return 0; }
