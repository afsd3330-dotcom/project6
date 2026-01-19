#include "ItemUPUP2.h"


AItemUPUP2::AItemUPUP2()
{
	PrimaryActorTick.bCanEverTick = false;
	SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
	SetRootComponent(SceneRoot);

	StaticMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	StaticMeshComp->SetupAttachment(SceneRoot);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("/Game/Resources/Props/SM_Stairs.SM_Stairs"));
	if (MeshAsset.Succeeded())
	{
		StaticMeshComp->SetStaticMesh(MeshAsset.Object);
	}
}

void AItemUPUP2::BeginPlay()
{
	Super::BeginPlay();

	SetActorLocation(FVector(-9.0f, 2028.5f, 248.9f));
	SetActorRotation(FRotator(0.0f, -90.0f, 0.0f));
	SetActorScale3D(FVector(5.0f));
}
void AItemUPUP2::ResetActorPosition()
{
	SetActorLocation(FVector::ZeroVector);
}
