// Fill out your copyright notice in the Description page of Project Settings.


#include "BTService_Distance.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"

UBTService_Distance::UBTService_Distance()
{
	NodeName = TEXT("Update Distance");
	Interval = 0.2f;
	RandomDeviation = 0.f;

	bNotifyTick = true;

}

void UBTService_Distance::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);

	AAIController* AICon = OwnerComp.GetAIOwner();
	if (!AICon)
	{
		UE_LOG(LogTemp, Warning, TEXT("[DistanceService] No AIController"));
		return;
	}

	APawn* AIPawn = AICon->GetPawn();
	if (!AIPawn)
	{
		UE_LOG(LogTemp, Warning, TEXT("[DistanceService] No AIPawn"));
		return;
	}

	UBlackboardComponent* BB = OwnerComp.GetBlackboardComponent();
	if (!BB)
	{
		UE_LOG(LogTemp, Warning, TEXT("[DistanceService] No Blackboard"));
		return;
	}

	UObject* RawValue = BB->GetValueAsObject(BlackboardKey.SelectedKeyName);
	if (!RawValue)
	{
		UE_LOG(LogTemp, Warning, TEXT("[DistanceService] Blackboard value is NULL"));
		return;
	}

	AActor* Target = Cast<AActor>(RawValue);
	if (!Target)
	{
		UE_LOG(LogTemp, Warning, TEXT(
			"[DistanceService] Blackboard value is not Actor (%s)"),
			*RawValue->GetClass()->GetName()
		);
		return;
	}


	float Distance = FVector::Dist(
		AIPawn->GetActorLocation(),
		Target->GetActorLocation()
	);

	UE_LOG(LogTemp, Warning, TEXT(
		"[DistanceService] %s <-> %s = %.2f"),
		*AIPawn->GetName(),
		*Target->GetName(),
		Distance
	);

	BB->SetValueAsFloat(DistanceKey.SelectedKeyName, Distance);

}
