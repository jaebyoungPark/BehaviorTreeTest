// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTaskNode_ChangeFloatValue.generated.h"

/**
 * 
 */
UCLASS()
class BEHAVIORTREETEST_API UBTTaskNode_ChangeFloatValue : public UBTTaskNode
{
	GENERATED_BODY()
	
public:
	UBTTaskNode_ChangeFloatValue(); 

	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

	UPROPERTY(EditAnywhere, Category = "FloatValue")
	float FloatValue;

	UPROPERTY(EditAnyWhere)
	TEnumAsByte<EBTNodeResult::Type> ReturnType = EBTNodeResult::Succeeded;
};
