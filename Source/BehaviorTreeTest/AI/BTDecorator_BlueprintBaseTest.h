// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Decorators/BTDecorator_BlueprintBase.h"
#include "BTDecorator_BlueprintBaseTest.generated.h"

/**
 * 
 */
UCLASS()
class BEHAVIORTREETEST_API UBTDecorator_BlueprintBaseTest : public UBTDecorator_BlueprintBase
{
	GENERATED_BODY()
	
public:
	UBTDecorator_BlueprintBaseTest();

	virtual bool CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const override;

	mutable int32 Num;


};
