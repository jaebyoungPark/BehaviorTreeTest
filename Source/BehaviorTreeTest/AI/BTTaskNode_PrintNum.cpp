// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTaskNode_PrintNum.h"

UBTTaskNode_PrintNum::UBTTaskNode_PrintNum()
{
	NodeName = TEXT("Print ");
	bNotifyTick = true;   // TickTask를 사용하겠다는 의미
	ElapsedTime = 0.0f;
}

EBTNodeResult::Type UBTTaskNode_PrintNum::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{

	TestVar += 1;
	UE_LOG(LogTemp, Warning, TEXT("Print%d : %d."), NumToPrint, TestVar);

	ElapsedTime = 0.0f;
	return EBTNodeResult::InProgress; // TickTask를 계속 호출하게 함

}

void UBTTaskNode_PrintNum::TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	ElapsedTime += DeltaSeconds;

	if (ElapsedTime >= WaitTime)
	{

		FinishLatentTask(OwnerComp, ReturnType);
	}
}
