#include <iostream>
using namespace std;
char y,n;


int main(){
    char In_1, In_2;
    do{
        cout << "Type your move Player 1\n"<<" R-Rock, P-Paper, S-scissor" << endl;
        cin >> In_1;
        cout << "Type your move Player 2\n"<<" R-Rock, P-Paper, S-scissor" << endl;
        cin >> In_2;
        
        if (In_1=='R'|| In_1=='r' && In_2=='R' || In_2=='r'){
            cout << "Draw" << endl;
            cout << "Do you want to continue ?";
            cin >> y;
        }else if (In_1=='P'|| In_1=='p' && In_2=='P' || In_2=='p'){
            cout << "Draw" << endl;
            cout << "Do you want to continue ?";
            cin >> y;
            }else if(In_1=='R'|| In_1=='r' && In_2=='P' || In_2=='p'){
            cout << "Player 2 won" << endl;
            cout << "Do you want to continue ?";
            cin >> y;
        }else if(In_1=='R'|| In_1=='r' && In_2=='S' || In_2=='s'){
            cout << "Player 1 won" << endl;
            cout << "Do you want to continue ?";
            cin >> y;
        }else if(In_1=='P'|| In_1=='p' && In_2=='R' || In_2=='r'){
            cout << "Player 1 won" << endl;
            cout << "Do you want to continue ?";
            cin >> y;
        }else if (In_1=='P'|| In_1=='p' && In_2=='S' || In_2=='s'){
            cout << "Player 2" << endl;
            cout << "Do you want to continue ?";
            cin >> y;
        }else if (In_1=='S'|| In_1=='s' && In_2=='R' || In_2=='r'){
            cout << "Player 2 won"<< endl;
            cout << "Do you want to continue ?";
            cin >> y;
        }else if (In_1=='S'|| In_1=='s' && In_2=='P' || In_2=='p'){
            cout << "Player 1 won" << endl;
            cout << "Do you want to continue ?";
            cin >> y;
        }else{
            cout << "Draw" << endl;
            cout << "Do you want to continue ?";
            cin >> y;
        }}while(y=='y' || y=='Y');
    return 0;
}