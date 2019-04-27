#include <iostream>
#include <cmath>
using namespace std;

double result(double XX,char calCulate,double XY){
    double Result;
    if(calCulate=='+'){result = (XX += XY);}
    else if(calCulate=='-'){Result = (XX -= XY);}
    else if(calCulate=='/'){Result =(XX /= XY);}
    else if (calCulate=='*'){Result( XX *= XY);}
    else{
        cout << "Invalid Input (if an error has occured please quit the program\n";
    }
    return Result;
}


int main(){
    char userInput;
    cout << "*************** Calculator ****************\n";
    cout << "AVAILABLE CALCULATIONS =\n + (addition)\n";
    cout<< "-(substraction)\n";
    cout << "/(division) \n";
    cout << "*(multification)\n\n";
    cout << "please type c to start new calculation and q to exit\n\n\n ## Please note that you can only enter 2 values " << endl;
    cout<<"Please type c to start or Any other key to quit"<<endl;
    char Starter;
    cin >> Starter;
    bool StartOrNo;
    if(Starter=='c'){
        StartOrNo=true;
    }
    else{
        StartOrNo=false;
    }
     while(StartOrNo){
            for (int i=0;i<=99;i++){
                double XX;
                double XY;
            char calCulate;
            if(i<=98){
                cout << "Please enter the equation (e.g.1+1)"<<endl;
                cin >> XX;
                cin >> calCulate;
                cin >> XY;
                cout << "="<< result(XX,calCulate,XY)<<endl;
                cout << "Type c to start new calculate or q to quit\n";
                cin >> userInput;
                if(userInput=='q'){
                    break;
                }
                else if(userInput=='c')i++;
                else{
                    cout << "Invalid input\n";
                    break;
                }
            }
            else if(i==99){
                cout << "Too much input\n\n"<<endl;
                break;
            }
            
            }
         cout << "GOODBYE\n";
         return 0;
     }
    while(!StartOrNo){
    
        cout << "***GOODBYE***\n";
        break;
    }
    
};






        



