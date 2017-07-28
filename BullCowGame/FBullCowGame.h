#pragma once
#include <string>

using FString = std::string;
using int32 = int;

//All values initialized to zero
struct FBullCowCount
{
	int32 Bulls = 0;
	int32 Cows = 0;
};

class FBullCowGame
{
public:
	FBullCowGame(); //Constuctor

	void Reset(); //TODO make a more rich return value.
	int32 GetMaxTries() const;
	int32 GetCurrentTry() const;
	bool IsGameWon() const;
	bool CheckGuessValidity(FString); //TODO make a more rich return value.

	//counts bulls & cows and increases turn # assuming valid guess.
	FBullCowCount SubmitGuess(FString);


//Please try and ignore this and focus on the interface above ^^
private:
	//see constructor for initialisation
	int32 MyCurrentTry ;
	int32 MyMaxTries;
	FString MyHiddenWord;
};