// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Decorators/BTDecorator_Blackboard.h"
#include "BTDecorator_BlackboardTest.generated.h"

/**
 * 
 */
UCLASS()
class BEHAVIORTREETEST_API UBTDecorator_BlackboardTest : public UBTDecorator_Blackboard
{
	GENERATED_BODY()
	
public:
	UBTDecorator_BlackboardTest();

	virtual bool CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const override;

	mutable int32 Num;
};
