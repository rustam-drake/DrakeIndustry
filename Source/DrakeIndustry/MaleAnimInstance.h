// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Animation/AnimInstance.h"
#include "MaleAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class DRAKEINDUSTRY_API UMaleAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
	
	
public:

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float MovementSpeed;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float MovementDirection;
	
	UFUNCTION(BlueprintCallable, Category = "Animations")
	virtual void UpdateAnimationProperties();
};
