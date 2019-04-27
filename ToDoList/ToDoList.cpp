#include <iostream>
#include <cstdlib>
#include <cmath>
#include <fstream>
using namespace std;
string Activity;
string Time;
bool cont = true;
int main(){

    ofstream moreCpp("ToDoList.txt");
    moreCpp<<"************** THINGS YOU CAN DO TODAY *************\n";
    while ((moreCpp.is_open()&&(cont==true))){
        cout << "Activity : ";
        getline(cin,Activity);
        if(cin.fail()){
            cin.clear();
        }
        cout << endl;
        cout << "Time : ";
        getline(cin,Time);
        cout << endl;
        moreCpp <<"# "<< Activity << "......................................"<<Time<<endl;
        cout << "Do you want to add more activity <y/n>\n";
        char *YorN;
        char ContYorN;
        cin >> ContYorN;
        cin.ignore(1000,'\n');
        YorN = &ContYorN;
        if(cin.fail()){
            cin.clear();
            break;
        }
        /*  IMPORTANT: ALWAYS USE THIS WHEN USING cin >> x,
         It takes out 10000 characters from the buffer 
         but stops if it encounters a newline (\n). The 10000 is just a generic large value.*/
        
        else if(*YorN=='y'){
            cont=true;
        }
        else if(*YorN!='y'){
            cont=false;
            break;
        }
    }
        if(cont==false){
        srand(time(NULL));
        int randNum = rand()%5;
        if(randNum==1){
            moreCpp << "People who are crazy enough to think that they can change the world are the one who do - Steve Jobs\n";
        }
        else if(randNum==2){
            moreCpp << "To persevere is important for everybody\nDont give up, Dont give in, There's always an answer for everything - Louis Zamperini\n";
        }
        else if(randNum==3){
            moreCpp << "When you're hating somenone,\n";
            moreCpp << "You're not hating the ones you hate but yourself - Louis Zamperini\n";
        }
        else if(randNum==4){
            moreCpp << "The Pro goes to work.Doesn't matter if you're sick, doesn't mater if you have kids.You are a Pro and you go to work\n";
        }
        else if(randNum==5){
            moreCpp << "Dreams always whisper never shout, So you have everyday of your life\n";
            moreCpp << "Be ready to hear what whispers in your ears,\n";
        }
        else{
            cout << "No quotes for today.\n";
        }
        }
    moreCpp.close();
    return 0;
};
