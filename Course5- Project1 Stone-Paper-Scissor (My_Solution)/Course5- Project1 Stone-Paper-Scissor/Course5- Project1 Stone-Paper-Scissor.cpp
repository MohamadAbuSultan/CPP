#include <iostream>
#include <windows.h>

using namespace std;

int ReadPositiveNumber(string message) {
	int number;
	
	do
	{
		cout << message;
		cin >> number;
	} while (number <= 0);

	return number;
}

int GenerateRandomNumbers(int from, int to) {
	return rand() % (to - from + 1) + from;
}

enum enChoice {
	stone = 1,
	paper = 2,
	scissors = 3
};

enChoice MakeDecision(bool isUser) {
	int choice;

	if (isUser) {
		cout << "Your Choice: [1]:Stone, [2]:Paper, [3]:Scissor ";
		cin >> choice;
	}
	else 
		choice = GenerateRandomNumbers(1, 3);

	return enChoice(choice);
}

void PrintChoice(enChoice choice) {
	switch (choice) {
		case stone: cout << "Stone\n"; break;
		case paper: cout << "Paper\n"; break;
		case scissors: cout << "Scissors\n"; break;
	}
}

void PrintRoundResult(enChoice user, enChoice ai, int& userWins, int& aiWins, int& draw) {
	cout << "Your choice: ";
	PrintChoice(user);

	cout << "AI's choice: ";
	PrintChoice(ai);

	if (user == ai) {
		cout << "It's a draw!\n";
		++draw;
	}
	else if ((user == stone && ai == scissors) ||
		(user == paper && ai == stone) ||
		(user == scissors && ai == paper)) {
		cout << "You win!\n";
		++userWins;
	}
	else {
		cout << "AI wins!\n";
		++aiWins;
	}
}

void PlayRound(int roundNumber, int& userWins, int& aiWins, int& draw) {
	cout << "\n\nRound---------------" << roundNumber << "---------------begins:\n";
	enChoice user = MakeDecision(true);
	enChoice ai = MakeDecision(false);

	cout << "Your choice: ";
	PrintChoice(user);

	cout << "AI's choice: ";
	PrintChoice(ai);

	if (user == ai) {
		cout << "It's a draw!\n";
		system("COLOR 4F");
		++draw;
	}
	else if ((user == stone && ai == scissors) ||
		(user == paper && ai == stone) ||
		(user == scissors && ai == paper)) {
		cout << "Round Winner [User]\n";
		system("COLOR 2F");
		++userWins;
	}
	else {
		cout << "Round Winner [Computer]\n";
		system("COLOR 6E");
		++aiWins;
	}
	// Beep(500, 500);
}

char AskUserToPlayAgain() {
	char playAgain;
	cout << "Do you want to play again? (Y/N): ";
	cin >> playAgain;
	return playAgain == 'y';
}

void ResetScreen()
{
	system("cls");
	system("color 0F");
}

void PlayGame() {
	char playAgain;
	do {
		ResetScreen();

		int arrLength;
		arrLength = ReadPositiveNumber("How Many Rounds Do You Want To Play? 1 to 10:\n");

		int userWins = 0, aiWins = 0, draw = 0;

		for (int i = 1; i <= arrLength; i++) {
			PlayRound(i, userWins, aiWins, draw);
		}

		cout << "\nResults:\n";
		cout << "User Wins: " << userWins << endl;
		cout << "AI Wins: " << aiWins << endl;
		cout << "draw: " << draw << endl;

		cout << "Do you want to play again? (Y/N): ";
		cin >> playAgain;
	
	} while (playAgain == 'y' || playAgain == 'Y');
}

int main()
{
	srand((unsigned)time(NULL));

	PlayGame();

	return 0;
}