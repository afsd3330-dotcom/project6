#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RandomSpawnItem.generated.h"

UCLASS()
class PROJECT6_API ARandomSpawnItem : public AActor
{
	GENERATED_BODY()
	
public:	
	ARandomSpawnItem();

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Spawn|Area")
	USceneComponent* MeshComp;
	FVector StartLocation;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	float Amplitude = 300.f;
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "movement")
	float Speed = 10.f;

	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
};
