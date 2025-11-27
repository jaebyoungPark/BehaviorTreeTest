// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTaskNode_ChangeValue2.generated.h"

/**
 * 
 */
UCLASS()
class BEHAVIORTREETEST_API UBTTaskNode_ChangeValue2 : public UBTTaskNode
{
	GENERATED_BODY()
	
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

	int32 TestVar;

	UPROPERTY(EditAnywhere, Category = "Target")
	TSubclassOf<AActor> TargetActorClass;
};
