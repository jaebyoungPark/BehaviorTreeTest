// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTaskNode_ChangeValue.h"
#include "Kismet/GameplayStatics.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "GameFramework/Character.h" 

UBTTaskNode_ChangeValue::UBTTaskNode_ChangeValue()
{
	NodeName = TEXT("Set ");
}

EBTNodeResult::Type UBTTaskNode_ChangeValue::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{

	TArray<AActor*> Found;
	UGameplayStatics::GetAllActorsOfClass(
		GetWorld(),
		TargetActorClass,
		Found
	);

	OwnerComp.GetBlackboardComponent()->SetValueAsObject(TEXT("TargetActor"), Found[0]);

	return ReturnType;
}
