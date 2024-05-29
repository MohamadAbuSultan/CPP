#include <iostream>

using namespace std;

int ReadPositiveNumber(string message) {
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

struct Round {
    string playerChoice;   
    string computerChoice; 
    string winner;         
};

struct GameResults {
    int numRounds;         
    int playerWins;        
    int computerWins;      
    int draws;              
    string winner;    
};

enum enChoice { Paper = 1, stone = 2, scissors = 3 };

enChoice UserChoice() {
    int userChoice = ReadPositiveNumber("\nEnter Your Choice : ");
    return (enChoice)userChoice;
}

enChoice ComputerChoice() {
    int computerChoice = GenerateRandomNumber(1,3);
    return (enChoice)computerChoice;
}

int main()
{

}