// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTaskNode_Print4.h"

EBTNodeResult::Type UBTTaskNode_Print4::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	TestVar += 1;
	UE_LOG(LogTemp, Warning, TEXT("Print Task4 : %d."), TestVar);

	return EBTNodeResult::Failed;
}
