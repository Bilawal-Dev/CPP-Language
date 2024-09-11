#include<iostream>
using namespace std;

char inputs[3][3] = {{'1' , '2' , '3'} , {'4' , '5' , '6'} , {'7' , '8' , '9'}};

char playerCount = 'X';

bool gameResult = true;

void displayFn(){
    system("cls");
    cout<<"----------------------------------------------------  Welcome To The Tic Tac Toe Game  ----------------------------------------------------";
    cout<<"\n\n\n->   Player 1 : X";
    cout<<"\n->   Player 2 : O";
    cout<<"\n\n\t\t\t\t\t\t\t       |         | ";
    cout<<"\n\t\t\t\t\t\t\t   "<<inputs[0][0]<<"   |    "<<inputs[0][1]<<"    |   "<<inputs[0][2]<<"";
    cout<<"\n\t\t\t\t\t\t\t_______|_________|________";
    cout<<"\n\t\t\t\t\t\t\t       |         | ";
    cout<<"\n\t\t\t\t\t\t\t   "<<inputs[1][0]<<"   |    "<<inputs[1][1]<<"    |   "<<inputs[1][2]<<"";
    cout<<"\n\t\t\t\t\t\t\t_______|_________|________";
    cout<<"\n\t\t\t\t\t\t\t       |         |   ";
    cout<<"\n\t\t\t\t\t\t\t   "<<inputs[2][0]<<"   |    "<<inputs[2][1]<<"    |   "<<inputs[2][2]<<"";
}

void setFn(char choice , char playerCount){

    for(int i = 0 ; i < 3 ; i++)
    {
        for(int j = 0 ; j < 3 ; j++)
        {
            if(choice == inputs[i][j])
            {
                inputs[i][j] = playerCount;
            }
        }
    }
    
}

void playerTurnFn(){

    char player_choice;

    if(playerCount == 'X'){
        cout<<"\n\nPlayer 1 Turn :\nEnter Your Position :               ";
        cin>>player_choice;
        setFn(player_choice , playerCount);
        playerCount = 'O';
    }
    else if(playerCount == 'O'){
        cout<<"\n\nPlayer 2 Turn :\nEnter Your Position :               ";
        cin>>player_choice;
        setFn(player_choice , playerCount);
        playerCount = 'X';
    }
}

void winnerFn(){

    gameResult = false;
    
    if(playerCount == 'X'){
        playerCount = 'O';
    }
    else if(playerCount == 'O'){
        playerCount = 'X';
    }

    if(playerCount == 'X'){
        cout<<"\n\n\n   Winner :     Player 1";
        cout<<"\n\n\n   Loser  :     Player 2";
    }
    else if(playerCount == 'O'){
        cout<<"\n\n\n   Winner :     Player 2";
        cout<<"\n\n\n   Loser  :     Player 1";
    }
}

void gameResultFn(){

    for(int i = 0 ; i < 3 ; i++)
    {
        if(inputs[i][0] == inputs[i][1] && inputs[i][0] == inputs[i][2]){
            displayFn();
            winnerFn();
        }
        else if(inputs[0][i] == inputs[1][i] && inputs[0][i] == inputs[2][i]){
            displayFn();
            winnerFn();
        }
    }

    if(inputs[0][0] == inputs[1][1] && inputs[0][0] == inputs[2][2]){
        displayFn();
        winnerFn();
    }
    else if(inputs[0][2] == inputs[1][1] && inputs[0][2] == inputs[2][0]){
        displayFn();
        winnerFn();
    }
}

int main(){

    while(gameResult){
        displayFn();
        playerTurnFn();
        gameResultFn();
    }
}