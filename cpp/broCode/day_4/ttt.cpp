#include <iostream>
#include <ctime> 
#include <stdlib.h>
using namespace std;

void drawBoar(char *spaces);
void playerMove(char *spaces, char player); 
void computerMove(char *spaces, char computer); 
bool checkWinner(char *spaces, char player, char computer); 
bool checkTie(char *spaces); 

int main() { 
    char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    char player = 'X';

    char computer = 'O';
    bool running = true;

    drawBoar(spaces);

    while (running)
    {
        playerMove(spaces, player);
        drawBoar(spaces);
        if (checkWinner(spaces, player, computer)) { 
            running = false;
            // drawBoar(spaces);
            break;
        }
       
        computerMove(spaces, computer);
        drawBoar(spaces);
        if (checkWinner(spaces, player, computer)) { 
            running = false; 
            // drawBoar(spaces);
            break;
        } 
    }
    
}

void drawBoar(char *spaces) { 
    cout << endl; 
    cout << spaces[0] << "    | " << spaces[1] << "   | " << spaces[2] << endl;
    cout << "_____|_____|_____" << endl; 
    cout << spaces[3] << "    | " << spaces[4] << "   | " << spaces[5] << endl;
    cout << "_____|_____|_____" << endl; 
    cout << spaces[6] << "    | " << spaces[7] << "   | " << spaces[8] << endl;
    cout << "     |     |     " << endl; 
    cout << endl;


}
void playerMove(char *spaces, char player) { 
    int number;

    do { 
        cout << "Enter a spot to place a marker (1-9): ";
        cin >> number; 
        number--;

        if (spaces[number] == ' ') { 
            spaces[number] = player;
            break;
        } else { 
            cout << "This is alreay taken. " << endl;;
        }

    } while ( !number > 0 || !number < 8);

}
void computerMove(char *spaces, char computer) { 
    int number; 
    srand(time(0));

    while(true){ 
        number = rand() % 9;

        if (spaces[number] == ' ') { 
            spaces[number] = computer;
            break;
        }
    }

}
bool checkWinner(char *spaces, char player, char computer) { 

    bool playerWinCase1 = ((spaces[0] != ' ') && (spaces[0] == spaces[1] && spaces[1] == spaces[2]));
    bool playerWinCase2 = ((spaces[3] != ' ') && (spaces[3] == spaces[4] && spaces[4] == spaces[5]));
    bool playerWinCase3 = ((spaces[6] != ' ') && (spaces[6] == spaces[7] && spaces[7] == spaces[8]));
    bool playerWinCase4 = ((spaces[0] != ' ') && (spaces[0] == spaces[3] && spaces[3] == spaces[6]));
    bool playerWinCase5 = ((spaces[1] != ' ') && (spaces[1] == spaces[4] && spaces[4] == spaces[7]));
    bool playerWinCase6 = ((spaces[2] != ' ') && (spaces[2] == spaces[5] && spaces[5] == spaces[8]));
    bool playerWinCase7 = ((spaces[0] != ' ') && (spaces[0] == spaces[4] && spaces[4] == spaces[8]));
    bool playerWinCase8 = ((spaces[2] != ' ') && (spaces[2] == spaces[4] && spaces[4] == spaces[6]));

    string result;
// rows
    if (playerWinCase1) { 
        result = spaces[0] == player ? "You win" : "You lose";
        cout << result << endl;
    } else if (playerWinCase2) { 
        result = spaces[3] == player ? "You win" : "You lose";
        cout << result << endl;
    } else if (playerWinCase3) { 
        result = spaces[6] == player ? "You win" : "You lose";
        cout << result << endl;
    } 
    // columns
    else if (playerWinCase4) { 
        result = spaces[0] == player ? "You win" : "You lose";
        cout << result << endl;
    } else if (playerWinCase5) { 
        result = spaces[1] == player ? "You win" : "You lose";
        cout << result << endl;
    } else if (playerWinCase6) { 
        result = spaces[2] == player ? "You win" : "You lose";
        cout << result << endl;
    }
    // first dioganal
    else if (playerWinCase7) { 
        result = spaces[0] == player ? "You win" : "You lose";
        cout << result << endl;
    } 
    //  seconf dioganal.
    else if (playerWinCase8) { 
       result = spaces[2] == player ? "You win" : "You lose";
        cout << result << endl;
    } else { 
        return false;
    }

    return true;
}

bool checkTie(char *spaces) { 
    return 1;
}
