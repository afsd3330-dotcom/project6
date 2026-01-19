#include "Item.h"

AItem::AItem()
{
	SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
	SetRootComponent(SceneRoot);

	StaticMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	StaticMeshComp->SetupAttachment(SceneRoot);

	RotationSpeed = 25.0f;
	PrimaryActorTick.bCanEverTick = true;


}




void AItem::BeginPlay()
{
	Super::BeginPlay();

		SetActorLocation(FVector(58.0f, 512.0f, 503.0f));
		SetActorRotation(FRotator(0.0f, 90.0f, 0.0f));
		SetActorScale3D(FVector(6.0f));
}

void AItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!FMath::IsNearlyZero(RotationSpeed))
	{
		AddActorLocalRotation(FRotator(0.0f, RotationSpeed, 0.0f));
		
	}
}

void AItem::ResetActorPosition()
{
	SetActorLocation(FVector::ZeroVector);
}
float AItem::GetRotationSpeed() const
{
	return RotationSpeed;
}