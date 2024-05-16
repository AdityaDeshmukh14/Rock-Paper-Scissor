/* Project: Rock-Paper-Scissor game
Developer: Aditya Deshmukh */

#include <iostream>
#include <random>
#include <cstdlib> 
#include <ctime>

using namespace std;

char getComputerMove(){
    srand(time(nullptr));
    int randomNumber = (std::rand() % 3) + 1;

    if (randomNumber == 1){
        return 'r';
    }
    else if (randomNumber == 2){
        return 'p';
    }
    else 
        return 's';
}

int checkWinner(char playerMove, char computerMove){
    if (playerMove == computerMove){
        return 0;
    }
    else if (playerMove == 'r' && computerMove == 'p'){
        return -1;
    }
    else if (playerMove == 'r' && computerMove == 's'){
        return 1;
    }
    else if (playerMove == 'p' && computerMove == 's'){
        return -1;
    }
    else if (playerMove == 'p' && computerMove == 'r'){
        return 1;
    }
    else if (playerMove == 's' && computerMove == 'r'){
        return -1;
    }
    else if (playerMove == 's' && computerMove == 'p'){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    // system("cls"); // Use for Windows
    system("clear"); // Use for Unix/Linux based systems
    char flag = 'y';

    while (flag == 'y' || flag == 'Y'){
        char playerMove;
        char computerMove; 

        cout << "\n";
        cout << "Let's play Rock, Paper Scissors! Enter r for Rock, p for Paper, s for Scissor." << endl;
        while(true) { 
            cout << "\nUser Input: ";
            cin >> playerMove; 
            if (playerMove == 'p' || playerMove == 'r' || playerMove == 's') { 
                break; 
            } 
            else { 
                cout << "\nInvalid Player Move!!! Please Try Again." << endl; 
            } 
        } 

        computerMove = getComputerMove();
        int winner = checkWinner(playerMove, computerMove);

        cout << "\n\n";

        if (winner == 0){
            cout << "\tGAME DRAW!" << endl;
            cout << "\n";
            cout << "Your move: " << playerMove << endl;
            cout << "Computer move: " << computerMove << endl;
            cout << "\n";
        }
        else if (winner == 1){
            cout << "\tYOU WIN!" << endl;
            cout << "\n";
            cout << "Your move: " << playerMove << endl;
            cout << "Computer move: " << computerMove << endl;
            cout << "\n";
        }
        else{
            cout << "\tCOMPUTER WINS!" << endl;
            cout << "\n";
            cout << "Your move: " << playerMove << endl;
            cout << "Computer move: " << computerMove << endl;
            cout << "\n";
        }

        cout << "\n";
        cout << "Do you want to play again? (y/n): ";
        cin >> flag;
    }
    cout << "\n";
    cout << "BYE-BYE. SEE YOU LATER, GATOR!";
    cout << "\n\n";

    return 0;
}