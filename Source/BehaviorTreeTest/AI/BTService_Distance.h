// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Services/BTService_BlackboardBase.h"
#include "BTService_Distance.generated.h"

/**
 * 
 */
UCLASS()
class BEHAVIORTREETEST_API UBTService_Distance : public UBTService_BlackboardBase
{
	GENERATED_BODY()
	
public:
	UBTService_Distance();

	UPROPERTY(EditAnywhere, Category = "Blackboard");
	FBlackboardKeySelector DistanceKey;

	virtual void TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;

};
