// BullCowGame.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "BullCowGame.h"
#include <string>

FBullCowGame::FBullCowGame() { Reset(); }

int32 FBullCowGame::GetMaxTries() const { return MyMaxTries; }
int32 FBullCowGame::GetCurrentTry() const { return MyCurrentTry; }

void FBullCowGame::Reset()
{
	constexpr int32 MAX_TRIES = 8;
	MyMaxTries = MAX_TRIES;

	const FString HIDDEN_WORD = "planet";
	MyHiddenWord = HIDDEN_WORD;
	MyCurrentTry = 1;

	return;
}

bool FBullCowGame::IsGameWon() const
{
	return false;
}

bool FBullCowGame::CheckGuessValidity(FString)
{
	return false;
}

BullCowCount FBullCowGame::SubmitGuess(FString)
{
	MyCurrentTry++;

	BullCowCount BullCowCount;

	return BullCowCount;
}
