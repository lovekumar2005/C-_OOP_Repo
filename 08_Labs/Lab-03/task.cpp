/***********************************
    Lab:    03
    Task:   01
    Developer:
        Roll #: F24BB046
        Name:   Love Kumar        
***********************************/
#include <iostream>
using namespace std;

struct Player {
    string name;
    int number;
    int score;
};

int main() {
    Player data[12];
    int total = 0;
    int maxScore;
    string maxName;
    int maxNumber;

    cin.ignore();  
    for (int i = 0; i < 12; i++) {
        cout << "Enter name for Player " << i + 1 << ": ";
        getline(cin, data[i].name);

        cout << "Enter number for Player " << i + 1 << ": ";
        cin >> data[i].number;

        cout << "Enter score for Player " << i + 1 << ": ";
        cin >> data[i].score;
        cin.ignore(); 
    }

    cout << "\n---- Players Information ----\n";

    maxScore = data[0].score;
    maxName = data[0].name;
    maxNumber = data[0].number;

    for (int i = 0; i < 12; i++) {
        cout << "Player Name: " << data[i].name << endl;
        cout << "Player Number: " << data[i].number << endl;
        cout << "Player Score: " << data[i].score << endl << endl;

        total += data[i].score;

        if (data[i].score > maxScore) {
            maxScore = data[i].score;
            maxName = data[i].name;
            maxNumber = data[i].number;
        }
    }

    cout << "Total points earned by the team: " << total << endl;
    cout << "Top scorer: " << maxName << " (Number: " << maxNumber << ") with " << maxScore << " points." << endl;

    return 0;
}

