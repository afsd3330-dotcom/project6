#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ItemUPUP.generated.h"

UCLASS()
class PROJECT6_API AItemUPUP : public AActor
{
	GENERATED_BODY()
	
public:	
	AItemUPUP();

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Item|Component")
	USceneComponent* SceneRoot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item|Component")
	UStaticMeshComponent* StaticMeshComp;

	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable, Category = "Item|Actions")
	void ResetActorPosition();
};
