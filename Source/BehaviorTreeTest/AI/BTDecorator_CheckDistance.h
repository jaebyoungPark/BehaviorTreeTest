// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTDecorator_CheckDistance.generated.h"

/**
 * 
 */
UCLASS()
class BEHAVIORTREETEST_API UBTDecorator_CheckDistance : public UBTDecorator
{
	GENERATED_BODY()
	
public:
	UBTDecorator_CheckDistance();


	//CalculateRawConditionValue 유무와 상관없이 Observer aborts 는 에디터에 보이고 설정되도록 보이지만 실제로 작동 안하고 Notify Observer 가 보이지 않음. 따라서 
	//진입 테스트는 CalculateRawConditionValue 를 통해 검사할수 있지만, 진입 후 중단할 방법이 없음.
	//UBTDecorator_BlackboardBase 도 Notify Observer 가 보이지 않음.
	//UBTDecorator_Blackboard 는 드디어 존재함.
protected:
	virtual bool CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const override;
};
