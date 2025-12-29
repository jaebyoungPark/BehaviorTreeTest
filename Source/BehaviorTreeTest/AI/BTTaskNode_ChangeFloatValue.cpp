// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTaskNode_ChangeFloatValue.h"
#include "BehaviorTree/BlackboardComponent.h"

EBTNodeResult::Type UBTTaskNode_ChangeFloatValue::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	OwnerComp.GetBlackboardComponent()->SetValueAsFloat(TEXT("TargetFloat"), FloatValue);

	return EBTNodeResult::Failed;
}
