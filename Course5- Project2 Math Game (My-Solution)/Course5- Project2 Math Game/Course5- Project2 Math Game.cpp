#include <iostream>

using namespace std;

short ReadPositiveNumber(string message)
{
	int number;
	do
	{
		cout << message << " ";
		cin >> number;
	} while (number <= 0);
	return number;
}

int GenerateRandomNumber(int from, int to) {
	return rand() % (to - from + 1) + from;
}

enum enQuestionLevel { Easy = 1 , Mid = 2, Hard = 3 , Mix = 4 };
enum enOperationType { Add = 1, Sub = 2, Multi = 3, Div = 4, Mix2 = 5};

struct stMathRoundInfo
{
	int RoundNumber;
	enOperationType opType;
	int number1;
	int number2;
	bool isWrong = false;
};

struct stMathGameInfo
{
	int numOfQuestions;
	enQuestionLevel qsLevel;
	enOperationType opType;
	int rightAns;
	int wrongAns;
	bool finalResult = true;
};

enQuestionLevel SelectQuestionLevel() {
	int level = ReadPositiveNumber("Select Question Level (1: Easy, 2: Mid, 3: Hard, 4: Mix): ");

	switch (level)
	{
	case 1:
		return enQuestionLevel::Easy;
		break;
	case 2:
		return enQuestionLevel::Mid;
		break;
	case 3:
		return enQuestionLevel::Hard;
		break;
	case 4:
		return enQuestionLevel::Mix;
		break;
	default:
		break;
	}
}

enOperationType SelectOperationType() {
	int op = ReadPositiveNumber("Select Operation Type (1: Add, 2: Sub, 3: Multi, 4: Div, 5: Mix): ");

	switch (op) {
	case 1:
		return enOperationType::Add;
	case 2:
		return enOperationType::Sub;
	case 3:
		return enOperationType::Multi;
	case 4:
		return enOperationType::Div;
	case 5:
		return enOperationType::Mix2;
	}
}

void PrintQuestion(stMathRoundInfo roundInfo) {
	cout << "What is " << roundInfo.number1 << " ";
	switch (roundInfo.opType) {
	case Add:
		cout << "+";
		break;
	case Sub:
		cout << "-";
		break;
	case Multi:
		cout << "*";
		break;
	case Div:
		cout << "/";
		break;
	case Mix2:
		break;
	}
	cout << " " << roundInfo.number2 << "? ";
}

void AskQuestion(stMathRoundInfo& roundInfo, int& userAnswer) {
	cout << "Question " << roundInfo.RoundNumber << ":" << endl;
	PrintQuestion(roundInfo);
	cin >> userAnswer;
}

bool CheckAnswer(int userAnswer, int correctAnswer) {
	return userAnswer == correctAnswer;
}

stMathGameInfo UpdateGameInfo(stMathGameInfo& gameInfo, bool isCorrect) {
	return isCorrect ? (++gameInfo.rightAns, gameInfo) : (++gameInfo.wrongAns, gameInfo); 
}


void PlayMathGame(stMathGameInfo& gameInfo) {
	for (int i = 0; i < gameInfo.numOfQuestions; ++i) {
		stMathRoundInfo roundInfo;
		roundInfo.RoundNumber = i + 1;
		roundInfo.opType = gameInfo.opType;
		roundInfo.number1 = GenerateRandomNumber(1, 100);
		roundInfo.number2 = GenerateRandomNumber(1, 100);

		int userAnswer;
		AskQuestion(roundInfo, userAnswer);

		int correctAnswer = 0;
		switch (roundInfo.opType) {
		case Add:
			correctAnswer = roundInfo.number1 + roundInfo.number2;
			break;
		case Sub:
			correctAnswer = roundInfo.number1 - roundInfo.number2;
			break;
		case Multi:
			correctAnswer = roundInfo.number1 * roundInfo.number2;
			break;
		case Div:
			correctAnswer = roundInfo.number1 / roundInfo.number2;
			break;
		case Mix2:
			break;
		}

		bool isCorrect = CheckAnswer(userAnswer, correctAnswer);
		UpdateGameInfo(gameInfo, isCorrect);
	}
}

void StartGame() {
	stMathGameInfo gameInfo;
	gameInfo.numOfQuestions = ReadPositiveNumber("Enter the number of questions: ");
	gameInfo.qsLevel = SelectQuestionLevel();
	gameInfo.opType = SelectOperationType();
	gameInfo.rightAns = 0;
	gameInfo.wrongAns = 0;

	PlayMathGame(gameInfo);

	cout << "Game Over!" << endl;
	cout << "Total Correct Answers: " << gameInfo.rightAns << endl;
	cout << "Total Wrong Answers: " << gameInfo.wrongAns << endl;
}


int main()
{
	srand((unsigned)time(NULL));

	StartGame();
}