#include <iostream>
#include <string>

using namespace std;

void PrintIntro();
void PlayGame();
string GetaGuess();
bool AskToPlayAgain();

//the entry point for our application
int main()
{

PrintIntro();
PlayGame();
AskToPlayAgain();

return 0;// exit the application
}


//introduce the game

void PrintIntro()
{

	constexpr int Word_Length = 9;
	cout << "Welcome to BullCow Game" << endl;
	cout << "Can you guess the" << " " << Word_Length;
	cout << " letter Isogram I am thinking of" << endl;
	cout << endl;
	return;
}


  //Play Game
void PlayGame()
{
	//loop for the number of terms asking for guesses
	constexpr int Word_Length = 5;
	for (int x = 1; x <= Word_Length; x++) {
		GetaGuess();
		cout << endl;
	}
}






// Get a Guess from the player and print it back

string GetaGuess()
{

	//get a guess from the player 
	cout << "Enter Your Guess:";
	string Guess = "";
	getline(cin, Guess);

	// print the guess back to them 
	cout<< "Your Guess was:" << Guess << endl;
	return Guess;
}

bool AskToPlayAgain()
{
	cout << "Do you want to play again";
	string Response = "";
	getline(cin,Response);
	return (Response[0] == 'y') || (Response[0] == 'Y');


	return false;
}
  







