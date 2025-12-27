// Fill out your copyright notice in the Description page of Project Settings.


#include "BTDecorator_BlueprintBaseTest.h"

UBTDecorator_BlueprintBaseTest::UBTDecorator_BlueprintBaseTest()
{
	Num = 0;
}

bool UBTDecorator_BlueprintBaseTest::CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const
{
	Num += 1;

	UE_LOG(LogTemp, Warning, TEXT("UBTDecorator_BlueprintBaseTest::CalculateRawConditionValue : %d"), Num);

	return Super::CalculateRawConditionValue(OwnerComp, NodeMemory);




}
