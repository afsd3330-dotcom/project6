#include "RandomSpawnItem.h"
#include "Components/StaticMeshComponent.h"

ARandomSpawnItem::ARandomSpawnItem()
{
    PrimaryActorTick.bCanEverTick = true;

    MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
    RootComponent = MeshComp;
}

void ARandomSpawnItem::BeginPlay()
{
    Super::BeginPlay();
    StartLocation = GetActorLocation();
}

void ARandomSpawnItem::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    float Time = GetWorld()->GetTimeSeconds();
    float Offset = FMath::Sin(Time * Speed) * Amplitude;

    FVector NewLocation = StartLocation;
    NewLocation.X += Offset; 
    SetActorLocation(NewLocation);
}
