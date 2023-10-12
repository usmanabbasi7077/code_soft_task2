#include <iostream>
using namespace std;
 char tikcross[10] = { 'o', '1', '2', '3', '4', '5', '6', '7', '8', '9' };

 void display(){

     cout<<"\n \t \t Tic Tac Toe \n \n \n";
     cout<<" \t Player1 (X)  -  player2 (O) \n \n";



     cout<<"       |       |     \n";
    cout<<"  "<<tikcross[1]   <<"    |"<<"  "<<tikcross[2]  <<"    |"<<"  "<<tikcross[3]   <<"    \n";
    cout<<"_______|_______|_______\n";
    cout<<"       |       |     \n";
    cout<<"       |       |     \n";
    cout<<"  "<<tikcross[4]   <<"    |"<<"  "<<tikcross[5]  <<"    |"<<"  "<<tikcross[6]   <<"    \n";
    cout<<"_______|_______|_______\n";
    cout<<"       |       |     \n";
    cout<<"       |       |     \n";
    cout<<"  "<<tikcross[7]   <<"    |"<<"  "<<tikcross[8]  <<"    |"<<"  "<<tikcross[9]   <<"    \n";
    cout<<"       |       |     \n";
     }

 int findwinner(char grid[])
{
    if (grid[1] == grid[2] && grid[2] == grid[3])
        return 1;

    else if (tikcross[4] == tikcross[5] && tikcross[5] == tikcross[6])
        return 1;

    else if (tikcross[7] == tikcross[8] && tikcross[8] == tikcross[9])
        return 1;

    else if (tikcross[1] == tikcross[4] && tikcross[4] == tikcross[7])
        return 1;

    else if (tikcross[2] == tikcross[5] && tikcross[5] == tikcross[8])
        return 1;

    else if (tikcross[3] == tikcross[6] && tikcross[6] == tikcross[9])
        return 1;

    else if (tikcross[1] == tikcross[5] && tikcross[5] == tikcross[9])
        return 1;

    else if (tikcross[3] == tikcross[5] && tikcross[5] == tikcross[7])
        return 1;

    else if (tikcross[1] != '1' && tikcross[2] != '2' && tikcross[3] != '3' &&
        tikcross[4] != '4' && tikcross[5] != '5' && tikcross[6] != '6' && tikcross[7]
        != '7' && tikcross[8] != '8' && tikcross[9] != '9')


        return 0;
    else
        return  - 1;
}


 int main(){


     int player = 1, check, wish;
     char spot;


    do
    {
        display();
        player = (player % 2) ? 1 : 2;


        cout<<" Player"<<player<<" enter a digit ";
        cin>>wish;


        spot = (player == 1) ? 'X' : 'O';


       if (wish == 1 && tikcross[1] == '1')
            tikcross[1] = spot;

        else if (wish == 2 && tikcross[2] == '2')
            tikcross[2] = spot;

        else if (wish == 3 && tikcross[3] == '3')
            tikcross[3] = spot;

        else if (wish == 4 && tikcross[4] == '4')
            tikcross[4] = spot;

        else if (wish == 5 && tikcross[5] == '5')
            tikcross[5] = spot;

        else if (wish == 6 && tikcross[6] == '6')
            tikcross[6] = spot;

        else if (wish == 7 && tikcross[7] == '7')
            tikcross[7] = spot;

        else if (wish == 8 && tikcross[8] == '8')
            tikcross[8] = spot;

        else if (wish == 9 && tikcross[9] == '9')
            tikcross[9] = spot;

        else
        {
            cout<<"Invalid move by the player";


            player--;

        }
        check = findwinner(tikcross);


        player++;
    }while (check ==  - 1);

    display();

    if (check == 1)
        cout<<"==>\aPlayer"<< -- player<<" win. Congratulations!";
    else
        cout<<"==>\aGame draw! Better luck next time!";

    return 0;

 }
