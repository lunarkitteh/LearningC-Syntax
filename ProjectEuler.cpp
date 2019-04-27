#include <iostream>
using namespace std;

// function prototypes
int multipleOf3and5();
int evenFibonacci();

// main function
int main(){
    cout << "############### PROJECT EULER ###############"<<endl;
    return 0;
}


// solution functions
int multipleOf3and5(){
int i = 1,sum = 0;
    while(i<1000){
        if((i%3==0)||(i%5==0)){
            sum+=i;
        }
        i++;
    }
    return sum;
}

int evenFibonacci(){
    int sum = 0;
    int first = 0;
    int second = 1;
    int next;
    while(next<=4000000){
    next = first+second;
    if(next%2==0){
        sum+=next;
    }
    first = second;
    second = next;
    }
    cout << evenFibonacci << endl;
    return sum;
}