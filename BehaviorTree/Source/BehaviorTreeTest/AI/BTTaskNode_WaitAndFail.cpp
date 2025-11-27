// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTaskNode_WaitAndFail.h"

UBTTaskNode_WaitAndFail::UBTTaskNode_WaitAndFail()
{
	bNotifyTick = true;   // TickTask를 사용하겠다는 의미
	ElapsedTime = 0.0f;
}

EBTNodeResult::Type UBTTaskNode_WaitAndFail::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	ElapsedTime = 0.0f;
	return EBTNodeResult::InProgress; // TickTask를 계속 호출하게 함
}

void UBTTaskNode_WaitAndFail::TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	ElapsedTime += DeltaSeconds;

	if (ElapsedTime >= 2.0f)
	{
		
		FinishLatentTask(OwnerComp, EBTNodeResult::Failed);
	}
}
