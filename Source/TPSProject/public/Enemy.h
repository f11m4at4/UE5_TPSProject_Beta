#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Enemy.generated.h"

UCLASS()
class TPSPROJECT_API AEnemy : public ACharacter
{
	GENERATED_BODY()

public:
	AEnemy();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

public:
	// �� AI ���� ������Ʈ Ŭ����
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=FSMComponent)
	class UEnemyFSM* fsm;

};
