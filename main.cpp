#include <iostream>
#include <string>
#include <array>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <sstream>

using namespace std;

//Make a dice
int dice(){
    int dices;
    dices = (rand()%6) + 1;
    cout << "Rolling the Dice ... " << endl;
    cout << "The number is " << dices << endl;
    return dices;
}
//Print Winner Statement, after Checking Conditions
void winner(int x, int y, int counter, int w, int z, int choice){
    if(choice = 4){
        if(x == 39 || y == 39 || w == 39 || z == 39){
            if(x == 39){
                cout << "Good Game, Player1, you have won" << endl;
                cout << "Sorry Player2, Player3, and Player4, You have lost" << endl;
                cout << "This game took " << counter << " turns." << endl;
            }
            else if(y == 39){
                cout << "Good Game, Player2, you have won" << endl;
                cout << "Sorry Player1, Player3, and Player4, You have lost" << endl;
                cout << "This game took " << counter << " turns." << endl;
            }
            else if(w == 39){
                cout << "Good Game, Player3, you have won" << endl;
                cout << "Sorry Player1, Player2, and Player4 You have lost" << endl;
                cout << "This game took " << counter << " turns." << endl;
            }
            else if(z == 39){
                cout << "Good Game, Player4, you have won" << endl;
                cout << "Sorry Player1, Player2, and Player3 You have lost" << endl;
                cout << "This game took " << counter << " turns." << endl;
            }
        }
    }
    else if(choice = 3){
        if(x == 39 || y == 39 || w == 39){
            if(x == 39){
                cout << "Good Game, Player1, you have won" << endl;
                cout << "Sorry Player2, and Player3, You have lost" << endl;
                cout << "This game took " << counter << " turns." << endl;
            }
            else if(y == 39){
                cout << "Good Game, Player2, you have won" << endl;
                cout << "Sorry Player1, and Player3, You have lost" << endl;
                cout << "This game took " << counter << " turns." << endl;
            }
            else if(w == 39){
                cout << "Good Game, Player3, you have won" << endl;
                cout << "Sorry Player1, and Player2, You have lost" << endl;
                cout << "This game took " << counter << " turns." << endl;
            }
        }
    }
    else if(choice = 2){
        if(x == 39 || y == 39){
            if(x == 99){
                cout << "Good Game, Player1, you have won" << endl;
                cout << "Sorry Player2, You have lost" << endl;
                cout << "This game took " << counter << " turns." << endl;
            }
            else if(y == 39){
                cout << "Good Game, Player2, you have won" << endl;
                cout << "Sorry Player1, You have lost" << endl;
                cout << "This game took " << counter << " turns." << endl;
            }
        }
    }
    
}
//Input Statements
void enter(int input){
    cout << "Enter (1 - 9) to continue. Any (non-integer) value will skip to the end of the game" << endl;
    cin >> input;
}
//Snakes and Ladders checkers
void check(int x, int y, int w, int z, string alert){
    switch(x, y, w, z)
    {
        case 9:
        x = 7;
        cout << "OOPS... You ran into a SNAKE!" << endl;
        break;

        case 18:
        x = 14;
        cout << "OOPS... You ran into a SNAKE!" << endl;
        break;

        case 27:
        x = 10;
        cout << "OOPS... You ran into a SNAKE!" << endl;
        break;

        case 33:
        x = 16;
        cout << "OOPS... You ran into a SNAKE!" << endl;
        break;
            
        case 38:
        x = 21;
        cout << "OOPS... You ran into a SNAKE!" << endl;
        break;

        case 1:
        x = 37;
        cout << "YAY! you climbed a ladder!!!" << endl;
        break;

        case 28:
        x = 34;
        cout << "YAY! you climbed a ladder!!!" << endl;
        break;

        case 11:
        x = 19;
        cout << "YAY! you climbed a ladder!!!" << endl;
        break;

        case 15:
        x = 17;
        cout << "YAY! you climbed a ladder!!!" << endl;
        break;

        case 22:
        x = 24;
        cout << "YAY! you climbed a ladder!!!" << endl;
        break;
            
        case 26:
        x = 37;
        cout << "YAY! you climbed a ladder!!!" << endl;
        break;

        default:
        alert = "";
    }
}
//Function to draw board
void drawBoard(string br[40], int x, int y, int w, int z, int choice){
    //Making String Board
    string bor[40];
    //Converts Ints to Strings for all ints in board
    for(int i = 0; i < 40; i++)
    {
        int a = i + 1;
        stringstream ss;
        ss << a;
        string str = ss.str();
        bor[i] = str;
    }
    //Snake Placement
    bor[9] = "S1B";
    bor[7] = "S1E";
    bor[18] = "S2B";
    bor[14] = "S2E";
    bor[27] = "S3B";
    bor[10] = "S3E";
    bor[33] = "S4B";
    bor[16] = "S4E";
    bor[38] = "S5B";
    bor[21] = "S5E";
    //Ladder Placement
    bor[3] = "L1B";
    bor[12] = "L1E";
    bor[11] = "L2B";
    bor[19] = "L2E";
    bor[15] = "L3B";
    bor[17] = "L3E";
    bor[22] = "L4B";
    bor[24] = "L4E";
    bor[26] = "L5B";
    bor[37] = "L5E";
    bor[28] = "L6B";
    bor[34] = "L6E";
    //Printing X and Y onto the board
    if(choice == 2){
        if(x == y){
        bor[x] = " XY ";
        }
        else{
        bor[x] = " X ";
        bor[y] = " Y ";
        }
    }
    if(choice == 3){
        if(x == y && y == w){
            bor[x] = " Triple ";
        }
        else if(x == y){
            bor[x] = " XY ";
            bor[w] = " W ";
        }
        else if(x == w){
            bor[x] = " XW ";
            bor[y] = " Y ";
        }
        else if(y == w){
            bor[y] = " YW ";
            bor[x] = " X ";
        }
        else{
        bor[x] = " X ";
        bor[y] = " Y ";
        bor[w] = " W ";
        }
    }
    if(choice == 4){
        if(x == y && x == w && x == z){
            bor[x] = " All ";
        }
        else if((x == y && y == w) || (x == y && y == z) || (w == y && y == z)){
            bor[x] = " Triple ";
        }
        else if(x == y){
            bor[x] = " XY ";
            bor[z] = " Z ";
            bor[w] = " W ";
        }
        else if(x == w){
            bor[x] = " XW ";
            bor[z] = " Z ";
            bor[y] = " Y ";
        }
        else if(y == w){
            bor[y] = " YW ";
            bor[z] = " Z ";
            bor[x] = " X ";
        }
        if(x == z){
            bor[x] = " XZ ";
            bor[y] = " Y ";
            bor[w] = " W ";
        }
        else if(y == z){
            bor[y] = " YZ ";
            bor[x] = " X ";
            bor[w] = " W ";
        }
        else if(w == z){
            bor[w] = " WZ ";
            bor[x] = " X ";
            bor[y] = " Y ";
        }
        else{
        bor[x] = " X ";
        bor[y] = " Y ";
        bor[w] = " W ";
        bor[z] = " Z ";
        }
    }
    //Making board using for loops
    for(int i = 39; i >= 30; i--){
        cout << "|  " << bor[i] << " | ";
        if(i == 30){
            cout << endl;
        }
    }
    //Making board using for loops
    for(int i = 20; i <= 29; i++){
        cout << "|  " << bor[i] << " | ";
        if(i == 29){
            cout << endl;
        }
    }
    //Making board using for loops
    for(int i = 19; i >= 10; i--){
        cout << "|  " << bor[i] << " | ";
        if(i == 10){
            cout << endl;
        }
    }
    //Making board using for loops
    for(int i = 0; i <= 9; i++){
        cout << "|  " << bor[i] << "  | ";
        if(i == 9){
            cout << endl;
        }
    }
}
//Int Main() Function
int main(){
    //Seed Random
    srand(time(0));
    //Making variable
    string bor[40], alert = "";
    // user input variables
    int x = 0,y = 0, playerChoice, player1, player2, xRoll, yRoll, input, counter, w = 0, z = 0, choice, wRoll, zRoll;
    //Input: Opening Dialog, Choosing either player1 or player 2
    cout << "Lets Play Snakes and Ladders" << endl;
    cout << "If you land on snakes you go down, if you land on ladder you go up" << endl;
    cout << "Who ever gets to 100 first wins" << endl;
    cout << "Player1 is X, Player2 is Y, (Optional) - Player3 is W, and Player4 is Z" << endl;
    cout << "Please pick a number 2 trough 4 for how many players there are" << endl;
    cin >> choice;
    
    //Running the whole game
    if(choice == 2){
        while(x < 39 || y < 39){
            //When winner is decided
            if(x == 39 || y == 39){
                break;
            }
            //Counting amount of turns for game
            counter = counter + 1;
            //Using Enter Function
            enter(input);
            //X and Y rolls
            xRoll = dice();
            yRoll = dice();
            
            //Adding to X and Y
            if((x + xRoll) > 39){
                x = x;
            }
            else{
                x = x + xRoll;
            }
            if((y + yRoll) > 39){
                y = y;
            }
            else{
                y = y + yRoll;
            }
            //Running Check Function
            check(x, y, w, z, alert);
            //Draws the Board
            drawBoard(bor, x, y, w, z, choice);
        }
        //Dialog for Winning Players, and Letters
        winner(x, y, counter, w, z, choice);
    }
    else if(choice == 3){
        while(x < 39 || y < 39 || w < 39){
            //When winner is decided
            if(x == 39 || y == 39 || w == 39){
                break;
            }
            //Counting amount of turns for game
            counter = counter + 1;
            //Using Enter Function
            enter(input);
            //X and Y rolls
            xRoll = dice();
            yRoll = dice();
            wRoll = dice();
            
            //Adding to X and Y
            if((x + xRoll) > 39){
                x = x;
            }
            else{
                x = x + xRoll;
            }
            if((y + yRoll) > 39){
                y = y;
            }
            else{
                y = y + yRoll;
            }
            if((w + wRoll) > 39){
                w = w;
            }
            else{
                w = w + wRoll;
            }
            //Running Check Function
            check(x, y, w, z, alert);
            //Draws the Board
            drawBoard(bor, x, y, w, z, choice);
        }
        //Dialog for Winning Players, and Letters
        winner(x, y, counter, w, z, choice);
    }
    else if(choice == 4){
        while(x < 39 || y < 39 || w < 39 || z < 39){
            //When winner is decided
            if(x == 39 || y == 39 || w == 39 || z == 39){
                break;
            }
            //Counting amount of turns for game
            counter = counter + 1;
            //Using Enter Function
            enter(input);
            //X and Y rolls
            xRoll = dice();
            yRoll = dice();
            wRoll = dice();
            zRoll = dice();
            
            //Adding to X and Y
            if((x + xRoll) > 39){
                x = x;
            }
            else{
                x = x + xRoll;
            }
            if((y + yRoll) > 39){
                y = y;
            }
            else{
                y = y + yRoll;
            }
            if((w + wRoll) > 39){
                w = w;
            }
            else{
                w = w + wRoll;
            }
            if((z + zRoll) > 39){
                w = w;
            }
            else{
                z = z + zRoll;
            }
            //Running Check Function
            check(x, y, w, z, alert);
            //Draws the Board
            drawBoard(bor, x, y, w, z, choice);
        }
        //Dialog for Winning Players, and Letters
        winner(x, y, counter, w, z, choice);
    }
}
