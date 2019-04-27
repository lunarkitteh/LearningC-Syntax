#include <iostream>
using namespace std;
int main(){
int x = 100;
int y = 50;
int temporary = null;
cout << "Initial form:"<<endl;
cout << "x = "<<x<<endl;
cout << "y = "<<y<<endl;
cout << "temporary = "<<temporary<<endl;

if(y<x){
    cout << "First Method : (temporary = y, y = x, x = temporary) "<<endl;
    temporary+=y;  // assign y before it's value is changed into x
    y = x;
    x = temporary; // assign temporary which has the value of y
    cout << "temporary = "<<temporary<<endl;
    cout << "x = "<<x<<endl;
    cout << "y = "<<y<<endl;
}

  cout << "Wrong Method : (y1=x1, x1=y1)"<<endl;
  int y1 = 10;
  int x1 = 15;
  cout << "Initial form:"<<endl;
  cout << "x1 = "<<x1<<endl;
  cout << "y1 = "<<y1<<endl;
  y1=x1;
  x1=y1;
  cout << "x1 = "<<x1<<endl;
  cout << "y1 = "<<y1<<endl;
}