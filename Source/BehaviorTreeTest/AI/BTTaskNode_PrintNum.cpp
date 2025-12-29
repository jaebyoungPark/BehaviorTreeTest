// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTaskNode_PrintNum.h"

UBTTaskNode_PrintNum::UBTTaskNode_PrintNum()
{
	NodeName = TEXT("Print ");

	bNotifyTick = true;
	ElapsedTime = 0.0f;
	WaitTime = 2.f;

}

EBTNodeResult::Type UBTTaskNode_PrintNum::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	TestVar += 1;
	UE_LOG(LogTemp, Warning, TEXT("Print%d : %d."), NumToSet, TestVar);

	ElapsedTime = 0.0f;
	return EBTNodeResult::InProgress;
}

void UBTTaskNode_PrintNum::TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	ElapsedTime += DeltaSeconds;

	if (ElapsedTime >= WaitTime)
	{
		/*	UE_LOG(LogTemp, Warning, TEXT("ElapsedTime : %.2f"), ElapsedTime);*/
		FinishLatentTask(OwnerComp, ReturnType);
	}
}
