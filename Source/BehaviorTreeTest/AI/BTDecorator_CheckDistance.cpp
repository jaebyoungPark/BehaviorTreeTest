// Fill out your copyright notice in the Description page of Project Settings.


#include "BTDecorator_CheckDistance.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "AIController.h"

UBTDecorator_CheckDistance::UBTDecorator_CheckDistance()
{

}

bool UBTDecorator_CheckDistance::CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const
{
	Super::CalculateRawConditionValue(OwnerComp, NodeMemory);

	UBlackboardComponent* BlackboardComp = OwnerComp.GetBlackboardComponent();
	if (!BlackboardComp)
	{
		return false;
	}

	const float Distance =BlackboardComp->GetValueAsFloat(TEXT("Distance"));

	return Distance <= 500.f;
}
