// Fill out your copyright notice in the Description page of Project Settings.


#include "BTDecorator_BlackboardTest.h"

UBTDecorator_BlackboardTest::UBTDecorator_BlackboardTest()
{
	Num = 0;
}

bool UBTDecorator_BlackboardTest::CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const
{
	Num += 1;

	UE_LOG(LogTemp, Warning, TEXT("UBTDecorator_BlackboardTest::CalculateRawConditionValue : %d"), Num);

	return Super::CalculateRawConditionValue(OwnerComp, NodeMemory);
}
