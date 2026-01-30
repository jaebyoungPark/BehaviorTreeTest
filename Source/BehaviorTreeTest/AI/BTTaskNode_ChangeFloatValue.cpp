// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTaskNode_ChangeFloatValue.h"
#include "BehaviorTree/BlackboardComponent.h"

UBTTaskNode_ChangeFloatValue::UBTTaskNode_ChangeFloatValue()
{
	NodeName = TEXT("Set ");
}

EBTNodeResult::Type UBTTaskNode_ChangeFloatValue::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	OwnerComp.GetBlackboardComponent()->SetValueAsFloat(TEXT("Distance"), FloatValue);

	return ReturnType;
}
