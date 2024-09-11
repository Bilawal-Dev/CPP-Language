#include<iostream>

using namespace::std;

int main()
{
//Declaring The Variables:
    int answer = 3;   //Variable Having The Correct Answer.

    int num;          //Variable To Take Input From User.

    int attempts;     //Variable To Track Attempts(1-3) Made By User.

    int condition = false;  //Variable To Check If User Won Or Fail. 'false' = lose And 'true' = win.

    int score = 0;    //Variable To Calculate Score Of User.

    char decision = 'Y';    //Variable To Take Character From User If He Want To Play Again Or Not.

//Loop To Keep Running The Game If User Enters 'Y':
    while(decision == 'y' || decision == 'Y')
    {
        system("cls"); //Clearing The Screen.

        //Printing Header Line:
        for(int i = 0 ; i <= 68 ; i++)
        {
            cout<<"__";
        }

        //Welcoming Statement:
        cout<<"\n\n\t\t\t\t\t\tHey! Welcome To Our Guess Number !!!\n\n";

        //Instructions Of The Game:
        cout<<"Instructions!\n=============\n\n=>You Haved To Guess The Corret Number From 1-10 In Just 3 Tries To Win The Game.\n\n=>You Can Guess The Number Between Zero(0) And Ten(10) Only.\n\n\n\n";

        //Loop For Taking Guess Number From The User For 3 Tries Only:
        for(int i = 1 ; i <= 3 ; i++)
        {
            cout<<"Enter Your "<<i<<" Guess Number :                  ";
            cin>>num;
            attempts++;
            
            //Error Handling If The User Entered Number Less Than 0 Or Greater Than 10:
            if(num > 10 || num < 0)
            {
                condition = true;
                cout<<"\n\n\nError You Violated The Instructions.!\nPlease Only Enter Number From 0 To 10.\n\n\n\n";
                break;

            }

            //If User Guessed The Number Then:
            if(num == answer)
            {
                condition = true;
                cout<<"\n\nCongratulations Buddy! You Guessed Correct Number In "<<i<<" Attempts.\n";

                //Calculating The Score Based On , On Which Attempt User Guessed Correctly:
                score = 0;

                if(i == 1)
                {
                    score = score + 10;
                }
                else if(i == 2 )
                {
                    score = score + 5;
                }
                else if(i == 3)
                {
                    score = score + 3;
                }

                cout<<"SCORE =  "<<score<<"\n\n\n\n\n";

                break;
            }

            cout<<"\n";
        }

        //Playing Again If The User Fails:
        if(condition == false)
        {
            cout<<"\n\n\n\nOops, You Failed To Guess The Correct Number!\n\nDon't Worry You Can Play And Try Your Luck Again!\n\n\n\nWanna Play Again(Y / N)! Press 'Y' To Play Again And 'N' To Quit!!\n\n";
            cin>>decision;
        }

        //Playing Again If The User Wins Or An Error Occured Becauser User Enterd Number > 10 or Number < 0:
        else if(condition == true)
        {
            cout<<"You Can Play The Game Again And Have Fun!!\n\n\nWanna Play Again(Y / N)!? Press 'Y' To Play Again And 'N' To Quit!!\n\n";
            cin>>decision;
        }

        //Printing Footer Line:
        for(int i = 0 ; i <= 68 ; i++)
        {
            cout<<"__";
        }
    }

    return 0;
}