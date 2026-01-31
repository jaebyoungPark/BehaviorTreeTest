// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Decorators/BTDecorator_Blackboard.h"
#include "BTDecorator_CheckDistance_BB.generated.h"

/**
 * 
 */
UCLASS()
class BEHAVIORTREETEST_API UBTDecorator_CheckDistance_BB : public UBTDecorator_Blackboard
{
	GENERATED_BODY()
	
public:
	UBTDecorator_CheckDistance_BB();

protected:
	virtual bool CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const override;
};
