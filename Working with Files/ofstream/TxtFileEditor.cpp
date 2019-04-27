#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;
int main(){
    cout << "########## TXT FILE EDITOR ##########"<<endl;
    cout << "File name : ";
    string fileName;
    cin >> fileName;
    ofstream edit(fileName);
    while(edit.is_open()){
        
    }
}