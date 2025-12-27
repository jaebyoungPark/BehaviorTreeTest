// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTaskNode_PrintNum.generated.h"

/**
 * 
 */
UCLASS()
class BEHAVIORTREETEST_API UBTTaskNode_PrintNum : public UBTTaskNode
{
	GENERATED_BODY()
	
public:
	UBTTaskNode_PrintNum();

	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	
	int32 TestVar;

	UPROPERTY(EditAnywhere, Category = "Print")
	int32 NumToSet;

	UPROPERTY(EditAnywhere)
	TEnumAsByte<EBTNodeResult::Type> ReturnType = EBTNodeResult::Failed;
};
