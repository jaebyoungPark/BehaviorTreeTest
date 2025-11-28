// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTaskNode_Print5.h"

EBTNodeResult::Type UBTTaskNode_Print5::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	TestVar += 1;
	UE_LOG(LogTemp, Warning, TEXT("Print Task5 : %d."), TestVar);

	return EBTNodeResult::Failed;
}
