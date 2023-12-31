#pragma once

#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "DrawRoomComponent.generated.h"

UCLASS(MinimalAPI, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UDrawRoomComponent : public UPrimitiveComponent
{
	GENERATED_BODY()

public:
	UDrawRoomComponent();
};

FORCEINLINE uint32 GetTypeHash(const UDrawRoomComponent) { return 0; }
