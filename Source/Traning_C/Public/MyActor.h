// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Components/SphereComponent.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"

UCLASS()
class TRANING_C_API AMyActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditDefaultsOnly)
		UStaticMeshComponent* mesh=nullptr;
	UPROPERTY(EditAnywhere)
		USphereComponent* tungpm;
	UPROPERTY(VisibleAnywhere)
		float a;
	UPROPERTY(BlueprintReadOnly)
		float b;
	UPROPERTY(BlueprintReadWrite)
		float c;
};
