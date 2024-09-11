#include<iostream>
using namespace std;

class QuizApp{
    private :
        int score;
        int option;
    public  :
        QuizApp() : score(0) {}

        void displayQuiz(){
            cout<<"\n\nQuestion 1) Current Chief Of Army Staff Of Pakistan Army Is :"<<endl<<endl;
            cout<<"(1)       General Qamar Jawed Bajwa"<<endl;
            cout<<"(2)       General Asim Muneer"<<endl;
            cout<<"(3)       General Sahir Samshad"<<endl;
            cout<<"(4)       General Raheel Shariff"<<endl<<endl;

            cout<<"Enter The Correct Answer(1 , 2 , 3 , 4)  :   ";
            cin>>option;

            if(option == 2)
                score++;

            cout<<"\n\nQuestion 2) National Fruit Of Pakistan Is :"<<endl<<endl;
            cout<<"(1)       Orange"<<endl;
            cout<<"(2)       Apple"<<endl;
            cout<<"(3)       Banana"<<endl;
            cout<<"(4)       Mango"<<endl<<endl;

            cout<<"Enter The Correct Answer(1 , 2 , 3 , 4)  :   ";
            cin>>option;

            if(option == 4)
                score++;

            cout<<"\n\nQuestion 3) Which Is Shooting Game :"<<endl<<endl;
            cout<<"(1)       PUBG"<<endl;
            cout<<"(2)       Call Of Duty"<<endl;
            cout<<"(3)       Free Fire"<<endl;
            cout<<"(4)       All Of The Above"<<endl<<endl;

            cout<<"Enter The Correct Answer(1 , 2 , 3 , 4)  :   ";
            cin>>option;

            if(option == 4)
                score++;

            cout<<"\n\nQuestion 4) Which Of The Following Is A Horror Game :"<<endl<<endl;
            cout<<"(1)       PUBG"<<endl;
            cout<<"(2)       GTA"<<endl;
            cout<<"(3)       Outlast"<<endl;
            cout<<"(4)       Far-Cry"<<endl<<endl;

            cout<<"Enter The Correct Answer(1 , 2 , 3 , 4)  :   ";
            cin>>option;

            if(option == 3)
                score++;

            cout<<"\n\nQuestion 5) The Player Who Has Best Performance In Football Is Called :"<<endl<<endl;
            cout<<"(1)       Captain"<<endl;
            cout<<"(2)       Man Of The Match"<<endl;
            cout<<"(3)       Coach"<<endl;
            cout<<"(4)       Goal-Keeper"<<endl<<endl;

            cout<<"Enter The Correct Answer(1 , 2 , 3 , 4)  :   ";
            cin>>option;

            if(option == 2)
                score++;
        }

        void displayScore(){
            cout<<"\n\n\n\n\n";
            if(score == 5)
                cout<<"->       Excellent! Your All The Answers Were Right."<<endl;
            else if(score == 4)
                cout<<"->       Very Good! Your All The Answers Were Right Except One."<<endl;
            else if(score == 3 || score == 2)
                cout<<"->       Satisfactory! Your "<<score<<" Answer Were Correct. You Need To Work Hard!"<<endl;
            else if(score == 1 || score == 0)
                cout<<"->       Poor! Your All The Answers Were Wrong. Time To Brush Up Your Knowledge!"<<endl;
        }
};

int main(){
    QuizApp Isa;
    Isa.displayQuiz();
    Isa.displayScore();
}