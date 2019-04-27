#include <iostream>
using namespace std;

// Method 2 - recursion : range can be changed by input instead of editting the source code
int Iteration(int x){
    if(x==1){
        return 1;
    }
    else{
        int Result = x*Iteration(x-1);
        return Result;
        
    }
}

int main(){
//Method 1 - without user input.
int i=1;
int i2=1;
while(i<=9){
i2 = i2*(i);
    i++;
    cout << i2 <<endl;
    if(i==9){
        break;
    }
}

    
    // Calling Method 2 function.
    int Input;
    cout << "Number : ";
    cin >> Input;
    cout << Iteration(Input);
}


