// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GateStruct.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct FGateStruct
{
	GENERATED_BODY()

public:
	FORCEINLINE FGateStruct();

	explicit FORCEINLINE FGateStruct(bool bStartClosed);

	FORCEINLINE void Open() { bGateOpen = true; }

	FORCEINLINE void Closed() { bGateOpen = false; }

	FORCEINLINE void Toggle() { bGateOpen = !bGateOpen; }

	FORCEINLINE bool IsOpen()const { return bGateOpen; }

private:
	UPROPERTY(VisibleAnywhere)
	bool bGateOpen;
};

FORCEINLINE FGateStruct::FGateStruct(): bGateOpen(false) {

}

FORCEINLINE FGateStruct::FGateStruct(const bool bStartClosed) : bGateOpen(!bStartClosed) {

}
