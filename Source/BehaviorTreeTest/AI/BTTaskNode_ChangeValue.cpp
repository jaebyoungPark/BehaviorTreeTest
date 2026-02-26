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

    UBlackboardComponent* BBComp = OwnerComp.GetBlackboardComponent();

    if (Found.Num() > 0)
    {
        BBComp->SetValueAsObject(TEXT("TargetActor"), Found[0]);
    }
    else
    {
        BBComp->SetValueAsObject(TEXT("TargetActor"), nullptr);
    }

    return ReturnType;
}
