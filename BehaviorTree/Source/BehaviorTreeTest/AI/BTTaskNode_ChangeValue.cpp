// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTaskNode_ChangeValue.h"
#include "Kismet/GameplayStatics.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "GameFramework/Character.h" 

EBTNodeResult::Type UBTTaskNode_ChangeValue::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{

	OwnerComp.GetBlackboardComponent()->SetValueAsObject(TEXT("TargetActor"), TargetActorClass);


	return EBTNodeResult::Failed;
}
