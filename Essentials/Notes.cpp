#include <iostream>
using namespace std;

// prototypes
void passArray(int theArray[],int length);
void PassByValue(int x);
void PassByReference(int *x);

//  !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!  //
//  MESSY CODES                                          //
//  CONTENTS:                                            //
//  1.ARRAYS                                             //
//  2.VECTOR                                             //
//  3.PREFIX AND POSTFIX                                 //
//  4.PASS BY REFERENCE AND BY VALUE                     //
//  5.POINTERS                                           //
//                                                       //
//  !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!  //



int main(){
    
    cout << "*********** Reminder ***********\n\n";
    cout << "The difference between x++ and ++x : \n";
    cout << "x++ return the value and then increment/decrement it\n";
    cout << "++x return increment/decrement it first and then return the value\n";
    cout << "For example: x=2\n";
    int x = 2;
    for(int i=1;i<=5;i++){
        cout << "After prefix (++x) incrementation 'x' is : "<<++x<<endl;
        if(i==5){
            break;
        }
    }
    for(int i=1;i<=5;i++){
        cout << "After postfix (x++) incrementation 'y' is : "<<x++<<endl;
    }
    cout << "Another example : "<<endl<<"after postfix incrementation (x++) = "<<x++<<endl;
    cout << "after prefix inrementation (++x) = "<<++x<<endl;
    
    
    cout << "*********** Playing With Array ***********\n\n";
    cout << "Sum of Array's Elements\n\n";
    cout << "example 1: "<<endl;
    int Sum = 0;
    int ArrayX[] = {1,2,3,4,5};
    cout << "Size of ArrayX : "<<sizeof(ArrayX)<<endl;
    cout << "When you use sizeof() it will return how many bytes the variable type takes\n";
    cout << "For example if you use sizeof for an array of 5 integer it will return 20, which is (5*4)\n";
    cout << "# integer takes 4 bytes\n";
    cout << "# double takes 8 bytes\n";
    cout << "# etc.\n";
    cout << "The more detailed a variable type is, the more memory it will allocates\n";
    cout << "\n\n";
    cout << "To return the number of elements in an array,\n";
    cout << "you just simply devide the size of memory the array takes and size of memory of one element takes\n";
    cout << "For example : (sizeof(Arr)/sizeof(Arr[0])) where 0 is just a general random number\n";
    for(int i=0;i<5;i++){
        Sum+=ArrayX[i];
        cout << "sum : "<<Sum<<endl;
    }
    cout << "\n\n";
    cout << "example 2: "<<endl;
    char Calista[] = {'C','a','l','i','s','t','a'};
    cout << "Element ------ Value"<<endl;
    for(int i=0;i<=6;i++){
        cout << i <<" ----- "<< Calista[i]<<endl;
    }
    cout << "\n\nCreating string from an array \n";
    
    /* Always assign 0 to loop variable when passing an array
     because array Always start from 0;
     */
    
    for(int i=0;i<(sizeof(Calista)/sizeof(Calista[0]));i++){
        char myName = Calista[i];
        cout << myName;   // works like a charm
    }
    
    cout << "\n\nPassing An Array To A Function\n";
    
    cout << "Example 1 : sum of array's elements\n";
    int weirdArray[] = {22,299,2746,1029};
    int lengthArr = (sizeof(weirdArray)/sizeof(weirdArray[0]));
    passArray(weirdArray,lengthArr);
    
    // Note : when passing an array variable as a parameter (such as in loops) you just need the variable's NAME.
    
    cout << "Example 2 : " << endl;
    cout << "Multidimensional Array\n";
    cout << "Printing all elements in Bucky array\n";
    int Bucky[2][3] = {{1,2,3},{8,9,10}};
    for(int row = 0;row<2;row++){
        for(int collumn = 0;collumn<3;collumn++){
            cout << Bucky[row][collumn] << " "; //Note this!!
            // Don't put endl in the collumn loop, beacuse we want the loop to
            // get to the next line after it has finished printing all the elements from a collumn
        }
        cout << endl;
    }
    
    cout << "**************** Fibonacci Number Generator ***************\n";
    cout << "How many number terms will the sequence be?\n";
    int Last;
    cin >> Last;
    int First = 0;
    int Second = 1;
    int NextNum;
    for(int i=0;i<=Last;i++){
        NextNum=First+Second;
        First=Second;
        Second=NextNum;
        cout << NextNum << ",";
    }
    cout << endl;
    
    cout << "**************** POINTERS *************\n";
    int XX = 23;
    cout << "XX has a value of "<<XX<<endl;
    cout << "Integer XX takes " << sizeof(XX) << "bytes\n";
    cout << "Address of XX = "<<&XX<<endl;
    int *XY = &XX;  // assigning address of XX to pointer XY;
    cout << "Now XX is assigned to the pointer XY\n";
    cout << "Pointer XY contains : "<<XY<<endl;
    cout << "The value of the pointer XY is : "<<*XY<<endl;
    cout << "\n\n";
    
        cout << "******************** Pass by Value *******************\n";
        cout << "Passing by value means we can modify the COPY of the variable in the parameter NOT the actual variable\n";
        cout << "For example:\n";
        // calling PassByValue and assign 10 to the copy of variable x
    int ActualX = 10;
    int ActualX2 = 20;
    int *AddressX2 = &ActualX2;   // pass this to the parameter of PassByReference and you will change the Actual value of x in the function itself
        PassByValue(ActualX);
        cout << "x is now " << ActualX <<endl;
        cout << "******************** Pass by Reference *******************\n";
        cout << "Now passing by reference means we modify the ACTUAL variable inside the function\n";
        cout << "In other words if you assign the address of something into a function that already have a value\n";
        cout << "You change the address of that pointer or value asssigned to it\n";
        cout << "For example:\n";
    PassByReference(&ActualX2);
        cout << "*x has a value of :"<<ActualX2<<endl;
        cout << "By assigning the address of another pointer you can change the actual value,\n";
    PassByReference(AddressX2);
    cout << "*x now has a value of : "<<ActualX2<<endl;
        cout << "******************* Linked List Implementation ***************\n";
        cout << "Linked list is generally used when you have a really big or uncertain elements of arrays\n";
        cout << "Each linked list elements contains 2 values which are:\n1.The value itself\n2.The address of the next element\n";
        
    
        
        
        
}//closing main

void passArray(int theArray[],int length){
    int Sum=0;
    for(int i=0;i<length;i++){
        Sum+=theArray[i];
    }
         cout << Sum <<endl;
}

// Pass by value
void PassByValue(int x){
    x=100;   // we can modify the "Copy" of variable x NOT the actual x which has a value of 100!
    cout << "In PassByValue function x is 100\n";
}

void PassByReference(int *x){
    *x = 100;    // assign 100 to the pointer y not an address.
    cout << "In PassByReference function *x has a value of 100\n";
}
