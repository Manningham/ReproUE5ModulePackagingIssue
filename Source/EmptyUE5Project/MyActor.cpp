#include "MyActor.h"
#include "Foo.h"

AMyActor::AMyActor() {
	PrimaryActorTick.bCanEverTick = false;
}

void AMyActor::BeginPlay() {
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("%s"), *FFoo::GetMessage());
}
