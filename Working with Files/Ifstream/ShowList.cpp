#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;

// Prototypes
int getWhatTheyWant();
void displayItems(int x);
// Main Function
int main(){
int whatTheyWant;
whatTheyWant = getWhatTheyWant();
while(whatTheyWant!=4){
    switch(whatTheyWant){
        case 1:
        displayItems(1);  
        cin.clear();
        break;
        case 2:
        displayItems(2);
        cin.clear();
        break;
        case 3:
        displayItems(3);
        cin.clear();
        break;
        default:
        cout << "Your choice is unavialable, plase try again\n";
    }
    whatTheyWant = getWhatTheyWant();
    }
    return 0;
}


// Functions:

// getMainChoices (getWhatTheyWant)
int getWhatTheyWant(){
    int choice;
    cout << "\n1 - just plain items"<<endl;
    cout << "2 - helpful items"<<endl;
    cout << "3 - harmful items"<<endl;
    cout << "4 - quit\n"<<endl;
    cin >> choice;
    return choice;
}

// Display Items
void displayItems(int x){
ifstream itemListOb("ItemsList.txt");  // istream is used to read files
string name;
double power;
if(x==1){
    while(itemListOb>>name>>power){
        if(power==0){
            cout << name << " : "<< power<<endl;
        }
    }
}
else if(x==2){
    while(itemListOb>>name>>power){
        if(power>0){
            cout << name << " : "<< power<<endl;
        }
    }
}
else if(x==3){
    while(itemListOb>>name>>power){
        if(power<0){
            cout << name << " : "<< power<<endl;
        }
    }
}
}