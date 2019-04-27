#include <iostream>
using namespace std;
int main(){
int Number = 10;
int *Pointer = &Number;  // *Pointer point to the address of Number
*Pointer = 15;   // declare the value of *Pointer as 15 which automaticaly changes Number from 10 to 15  (pass by reference)
cout << "&Number = "<<&Number<<endl;
cout << "*Pointer = "<<*Pointer<<endl;
cout << "Pointer = "<<Pointer << endl;
cout << "Number = "<<Number << endl;
}