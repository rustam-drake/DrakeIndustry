// Fill out your copyright notice in the Description page of Project Settings.

#include "DrakeIndustry.h"
#include "MaleAnimInstance.h"


void UMaleAnimInstance::UpdateAnimationProperties()
{
	APawn* Pawn = TryGetPawnOwner();


	if (Pawn)
	{
		MovementSpeed = Pawn->GetVelocity().Size();
		//FVector v = Pawn->GetVelocity();
		//FRotator r = Pawn->GetActorRotation();
		//MovementDirection = r.UnrotateVector(v).Size() ;
	}
}

