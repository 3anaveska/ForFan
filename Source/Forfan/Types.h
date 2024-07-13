// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/DataTable.h"

#include "Types.generated.h"


UENUM(BlueprintType)
enum class EMovementState : uint8 {
	AimState UMETA(Display Name = "Aim State"),
	WalkState UMETA(Display Name = "Walk State"),
	RunState UMETA(Display Name = "Run State"),
	SprintRunState UMETA(Display Name = "Sprint Run State"),
	AimWalkState UMETA(Display Name = "Aim Walk State")
};

USTRUCT(BlueprintType)
struct FCharacterSpeed {
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	float AimSpeed = 300.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	float WalkSpeed = 400.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	float RunSpeed = 600.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	float AimWalkSpeed = 350.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	float SprintRunSpeed = 1000.0f;
};


UCLASS()
class FORFAN_API UTypes : public UBlueprintFunctionLibrary {
	GENERATED_BODY()
};