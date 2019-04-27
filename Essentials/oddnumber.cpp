

#include <iostream>
using namespace std;
int number;
int main(){
    // Embarrasing, you can't even solve this question because you didn't remember about the usage of module (%) operator
    for(int i=1;i<=20;i++){
        if(i%2 != 0){
            cout << "Odd number: "<< i << endl;
        }
        else if(i%2 == 0){
            cout << "Even number: "<< i << endl;
        }
        else{
            cout << "error"<<endl;
        }
    }
}