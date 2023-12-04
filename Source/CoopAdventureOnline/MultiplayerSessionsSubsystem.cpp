// Fill out your copyright notice in the Description page of Project Settings.


#include "MultiplayerSessionsSubsystem.h"

void PrintString(const FString& DebugMessage)
{
	if(GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 4.f, FColor::Cyan, DebugMessage);
	}
	
}

UMultiplayerSessionsSubsystem::UMultiplayerSessionsSubsystem()
{
	PrintString("MSS Constructor");
}

void UMultiplayerSessionsSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	//Super::Initialize(Collection);
	PrintString("MSS Initialize");
}

void UMultiplayerSessionsSubsystem::Deinitialize()
{
	UE_LOG(LogTemp, Warning, TEXT("MSS Deinitialize"));
	//Super::Deinitialize();
	
}


