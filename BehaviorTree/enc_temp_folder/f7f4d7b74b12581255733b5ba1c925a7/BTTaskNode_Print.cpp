// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTaskNode_Print.h"

EBTNodeResult::Type UBTTaskNode_Print::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	TestVar += 1;
	UE_LOG(LogTemp, Warning, TEXT("Print Task : %d."), TestVar);


	return EBTNodeResult::Failed;
}
