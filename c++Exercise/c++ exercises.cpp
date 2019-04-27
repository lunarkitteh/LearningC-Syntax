#include <iostream>
#include <fstream>
#include <ctime>
using namespace std;

// THIS HAS BECOME VERY COMPLICATED SO JUST LEAVE IT ALONE

// ITS NOT GOOD TO DECLARE VARIABLES AS PUBLIC SINCE IT MAKES YOUR PROGRAMS REALLY EASY TO MESSED UP WITH, AND YOU DECALRE ALL THE VARIABLES AS PUBLIC HERE , WHAT A BIG MISTAKE

// GLOBAL VARIABLES 
string number;
string ownerName;
string name1;
string startorStop;
string carmod;
string InstName;                                                                             
string InstType;
string InstOwner2;
string fldt;
string flda;
char YesorNo;
int PassangerNum;
int ClassNum;
int PassangersAge;
double ActualFees;
double TotalFee;
char qtoQuit;
string YourName;
char FirstTrait;
char SecondTrait;
char ThirdTrait;
char FourthTrait;
char FifthTrait;
char SixthTrait;
int UserNum;
int RandomNumber;
char CalculateOrNo;
char OptionP;
double valueOfDen;
double valueOfMass;
double valueOfVol;
string PomName;
string getPref;
int GNumberN;
//above is the components of classes below so you can use it with user's input//

// ALL THE FUNCTIONS
void aVoidFunction(int);
void PomRealAge(double);

class Fibonacci{
    public :Fibonacci (int NumberN){
        cout << "Please enter your the number sequence\n";
        NumberN = GNumberN;
        cin >> GNumberN;
        int N = 0;
        int Next = 1;
        int currentNum;
        for(int i=0;i<=GNumberN;i++){
            cout << Next << endl;
            currentNum = N+Next;
            N = Next;
            Next = currentNum;
        }
    }
};
class Car {
private:
    string numb;
    //CLASS is used when you want easier access to alot of function//
    //inside of classes you can create the blueprint (attributes and behaviors of an object that will be called in the main func//
    public : Car (number){
        numb = number;
    
        cout << "Number Plate : "<<number<<endl;
    }
    public  : void modelCar(string model){
    carmod=model;
    cout << "this car is "<< carmod << endl;
    }
    public : void startorStopEngine(string onOff){
        startorStop=onOff; // matching parameter with main code (you have to include the data type in the paramter.) therefore you have to do this //
        
        if (startorStop=="on"){
        cout << "The car is on"<<endl;
        }
        else if (startorStop=="off"){
            cout << "The car is off"<<endl;
        }
        else {
            cout << "Thank you, your data is saved\n";
        }
    }
     public  : void Owner (string name){
        ownerName = name;
        cout<< "This car belongs to "<< ownerName <<endl;
    }
};

class Instruments {
    public : Instruments (string name1){
        name1 = InstName;
        cout << "Instrument's name : " << InstName << endl; //first element of a class is usually an object initialisation (non void)//
    }
    public : void type (string type){
        type = InstType;
        cout << "Brand : "<<InstType<<endl;
    }
    public : void InstOwner(string name2){
        name2=InstOwner2;
        cout << "this "<< InstName <<" is owned by " << name2 <<endl;
    }
};

class Destination{
    public : Destination (string place){
        place = fldt;
        cout << "Your destination is "<<fldt << endl;
    }
    
    public : void Date (string When){
        When = flda;
        cout << "You are booking a flight to "<< fldt << "on " << flda << "<y/n>"<<endl;
        char yn = YesorNo;
        cin >> YesorNo;
        if (YesorNo=='y'){
        cout << "Flight confirmed\n Now please enter some required data\n";
        }
        else if (YesorNo=='n'){
            cout << "Sorry but you can edit your information please type q to go back"<<endl;
            cin >> qtoQuit;
            if(qtoQuit=='q'){
                cout << "Good Bye"<<endl;
            }
        }
    }
    
    public : void Passanger (int numOfPass){
                                                                     //may not work//
        numOfPass=PassangerNum;
        cout << "You are booking a flight for " << PassangerNum << "People\n";
        string NamePass;
        int AgePass;
        AgePass=PassangersAge;
        cout << "Please enter the name(s) and age\n";
        for (int i=1;i<=PassangerNum;i++){
            if (i<PassangerNum){
                cout << "Please enter the name of the passanger\n";
                cin >> NamePass;
                cout << "enter the age\n";
                cin >> PassangersAge;
                cout << "Continue\n";
                }
            else if(i==PassangerNum){
                cout << "Please enter the name of the passanger\n";
                cin >> NamePass;
                cout << "Please press enter and enter the age\n";
                cin >> PassangersAge;
                cout << "Your data is good to go\n";
            }
            else if (NamePass == "q")break;
            else if (NamePass == "q")break;
            else {cout << "Invalid input,Please restart this program\n";break;}
        }}
    
public: void PassClass (int PassangerClass){
    PassangerClass=ClassNum;
    cout << "You're registered\n THANK YOU FOR YOUR BOOKING(S)\n "<<endl;
}
  
    public : void Fees (double fees1){
        fees1=ActualFees;
        if((PassangersAge<=1&&ClassNum==1)||(PassangersAge<=1&&ClassNum==2)||(PassangersAge<=1&&ClassNum==3)||(PassangersAge<=1&&fldt=="United Kingdom,London:city(LYC)")||(PassangersAge<=1&&fldt=="French,Paris:Charles de Gaulle")||(PassangersAge<=1&&fldt=="Dubai,Dubai:Dubai")||(PassangersAge<=1&&fldt=="Maldives,Male:Ibrahim Nasir")||(PassangersAge<=1&&fldt=="China,Beijing:Capital")){
            ActualFees = 0.00;
            }
        else if (PassangersAge>1&&ClassNum==1&&fldt=="China,Beijing:Capital"){
            ActualFees = 600.32;
        }
        else if (PassangersAge>1&&ClassNum==2&&fldt=="China,Beijing:Capital"){
            ActualFees = 530.00;
        }
        else if (PassangersAge>1&&ClassNum==3&&fldt=="China,Beijing:Capital"){
            ActualFees = 500.00;
        }
        else if (PassangersAge>1&&ClassNum==1&&fldt=="French,Paris:Charles de Gaulle"){
            ActualFees = 630.50;
        }
        else if (PassangersAge>1&&ClassNum==2&&fldt=="French,Paris:Charles de Gaulle"){
            ActualFees = 560.00;
        }
        else if (PassangersAge>1&&ClassNum==3&&fldt=="French,Paris:Charles de Gaulle"){
            ActualFees = 530.50;
        }
        else if (PassangersAge>1&&ClassNum==1&&fldt=="Dubai,Dubai:Dubai"){
            ActualFees = 890.50;
        }
        
        else if (PassangersAge>1&&ClassNum==2&&fldt=="Dubai,Dubai:Dubai"){
            ActualFees = 860.50;
        }
        else if (PassangersAge>1&&ClassNum==3&&fldt=="Dubai,Dubai:Dubai"){
            ActualFees = 830.50;
        }
        else if (PassangersAge>1&&ClassNum==1&&fldt=="Maldives,Male:Ibrahim Nasir"){
            ActualFees = 830.50;
        }
        else if (PassangersAge>1&&ClassNum==2&&fldt=="Maldives,Male:Ibrahim Nasir"){
            ActualFees = 740.00;
        }
        else if (PassangersAge>1&&ClassNum==3&&fldt=="Maldives,Male:Ibrahim Nasir"){
            ActualFees = 700.00;
        }
        else if (PassangersAge>1&&ClassNum==1&&fldt=="United Kingdom,London:city(LYC)"){
            ActualFees = 690.50;
        }
        else if (PassangersAge>1&&ClassNum==2&&fldt=="United Kingdom,London:city(LYC)"){
            ActualFees = 620.50;
        }
        else if (PassangersAge>1&&ClassNum==3&&fldt=="United Kingdom,London:city(LYC)"){
            ActualFees = 600.32;
        
        }}
    
};

class Genetics{
public: Genetics(string YourName1){
    YourName1 = YourName;
    cout << "Enter your name\n"<<endl;
    cin >> YourName;
    cout << "Name: "<<YourName << endl;
    
}
public: void TraitOne(char FirstTrait1){
    FirstTrait1 = FirstTrait;
    for(int X=1;X<=2;X++){
    cout << "Do you have attached earlobes <y/n>\n";
    cin >> FirstTrait;
    if(FirstTrait=='y'){
        cout << "This characterisitic often appear in recessive genes\nBut further information is needed to determine your genetic (in ratio)\n";
        break;
    }
    else if(FirstTrait=='n'){
        cout << "This characterisitic often doesn't appear in dominant genes\nBut further information is needed to determine your genetic (in ratio)\n";
        break;
    }
    else if (FirstTrait!='n'||FirstTrait!='y') {
        cout << "Invalid input please enter only n or y\n";
    }}
}
public: void TraitTwo(char SecondTrait1){
    SecondTrait1 = SecondTrait;
    for(int XX=1;XX<=2;XX++){
    cout << "Do you have hairs on your fingers <y/n>\n";
    cin >> SecondTrait;
    if(SecondTrait=='y'){
        cout << "This indicates to dominant genes\n";
        break;
    }
    else if(SecondTrait=='n'){
        cout << "This indicates to recessive genes\n";
        break;
    }
    else {
        cout << "Invalid input please enter only n or y\n";
    }
    }
}
public: void TraitThree(char ThirdTrait1){
    ThirdTrait1 = ThirdTrait;
    for(int i =1;i<=2;i++){
        cout << "Do you have chin cleft <y/n>\n";
        cin >> ThirdTrait;
        if(ThirdTrait=='y'){
            cout << "This indicates to dominant genes\n";
            break;
        }
        else if(ThirdTrait=='n'){
            cout << "This indicates to recessive genes\n";
            break;
        }
        else {
          cout << "Invalid input please enter only n or y\n";
        }
    }
}
public: void TraitFour(char FourthTrait1){
    FourthTrait1 = FourthTrait;
    for(int i=1;i<=2;i++){
        cout << "Do you have bent/crooked pinky <y/n>\n ";
        cin >> FourthTrait;
        if(FourthTrait=='y'){
            cout << "This indicates to dominant genes\n";
            break;
        }
        else if(FourthTrait=='n'){
            cout << "This indicates to recessive genes\n";
            break;
        }
        else{
            cout << "Invalid input please enter only n or y\n";
        }
    }
}
public: void TraitFive(char FifthTrait1){
    FifthTrait1 = FifthTrait;
    for(int i=1;1<=2;i++){
        cout << "Do you have widow's peak <y/n>\n";
        cin >> FifthTrait;
        if(FifthTrait=='y'){
        cout << "This indicates to dominant genes\n";
            break;
        }
        else if(FifthTrait=='n'){
            cout << "This indicates to recessive genes\n";
            break;
        }
        else{
            cout << "Invalid input please enter only n or y\n";
        }
        
        
    }
}
public: void TraitSix(char SixthTrait1){
    SixthTrait1 = SixthTrait;
    for(int i=1;i<=2;i++){
        cout << "Can you roll your tougue <y/n>\n";
        cin >> SixthTrait;
        if(SixthTrait=='y'){
            cout << "This indicates to dominant genes\n";
            break;
        }
        else if(SixthTrait=='n'){
            cout << "This indicates to recessive genes\n";
            break;
        }
        else{
            cout << "Invalid input please enter only n or y\n";
        }
 
    }
}

};




class Density{
    public : Density(char CalculateOrNo1){
        CalculateOrNo1 = CalculateOrNo;
        cout << "Do you want to calculate the density of the object/element <y/n>"<<endl;
        cin >> CalculateOrNo;
        
            if(CalculateOrNo=='y'){
                cout << "Now please choose an option of calculation\n";
            }
            else if(CalculateOrNo=='n'){
                cout << "Okay\n";
            }
            else {
                cout << "Invalid Input\n";
            }
    }

    public : void AccessValues(char OptionP1){
        double valueOfDen1 = valueOfDen;
        double valueOfVol1 = valueOfVol;
        OptionP1 = OptionP;
    cout << "Do you want to calculate Mass,Volume,or Density (type 'm' for Mass\n'v' for Volume\n'p' for density\n";
    cout << "But to calculate you need to know required information (e.g.To Mass you have to know the Volume and Density\n";
    for(int i=1;i<=5;i++){
        extern char Option1;
        cin >> OptionP;
        if(OptionP=='m'||OptionP=='M'){
            cout << "You want to calculate the Mass\nPlease enter the Volume and Density\n";
            cout << "Density:\n";
            cin >> valueOfVol;
            cout << "Volume:\n";
            cin >> valueOfDen;
            double CalculateMass = valueOfDen*valueOfVol;
            cout << "The Mass of your object is "<< CalculateMass <<endl;
            break;
        }
        else if(OptionP=='v'||OptionP=='V'){
            double valueOfMass1 = valueOfMass;
            cout << "You want to calculate the Volume\nPlease enter the Mass and Density\n";
            cout << "Mass:\n";
            cin >> valueOfMass;
            cout << "Density:\n";
            cin >> valueOfDen;
            double CalculateVol = valueOfMass1/valueOfMass1;
            cout << "The Volume of your object is "<<CalculateVol<<endl;
            break;
        }
        else if(OptionP=='p'||OptionP=='P'){
            cout << "You want to calculate the Density\nPlease enter the Mass and Volume\n";
            cout << "Mass:\n";
            cin >> valueOfMass;
            cout << "Volume:\n";
            cin >> valueOfVol;
            double CalculateDen = valueOfMass/valueOfVol;
            cout << "The Density of your object is "<<CalculateDen<<endl;
            break;
        }
        else if((OptionP!='p'||OptionP!='P'||OptionP!='M'||OptionP!='m'||OptionP!='v'||OptionP!='V')&&i<=4){
            cout << "Invalid Input\n";
            }
        else{
            cout << "Invalid Input\nQuitting..\n";
            break;
        }
    }
    }
};
//       MAIN CODE MAIN CODE MAIN CODE MAIN CODE      //


int main(){
    cout<<"\n\n\n\n\n\n  ofstream: Stream class to write on files\nifstream: Stream class to read from files\nfstream: Stream class to both read and write from/to files.\n"<<endl;
    
    // OFSTREAM AND IFSTREAM EXAMPLES //
    cout << "EXAMPLE OF OFSTREAM AND IFSTREAM\n";
    cout << "Used to store data permanently in the computer's hardrive (user's computer as well)\n";
   cout << "CREATING A FILE OBJECT\n";
    
    ofstream cppFile("tuna.txt"); // creating a file object named tuna.txt//
    // also can be written as cppFile.open("tuna.txt")//
    
    // Check if the file is open //
    if(cppFile.is_open()){
        cout << "\ncppFile is open\n";
        cppFile << "This line is written in if statment\n";
    }
    else{
        cout << "The file is not open\n";
    }
    cppFile << "I love tuna and tuna loves me\n"; // this line can be written inside of the if statement ** if(cppFile.is_open()){.............}//
    cppFile.close();
    
    // ANOTHER OFSTREAM EXAMPLE //
    ofstream newTxt("myData.txt");
    if(newTxt.is_open()){
        cout << "myData is open\n";
        newTxt << "MY DATA\n\n";
        cout << "Please enter your name\n";
        string dataName;
        getline(cin,dataName); //to get input with spaces //
        cout << "Please enter your age\n";
        int dataAge;
        cin >> dataAge;
        cout << "Please enter your occupation\n";
        string occupation;
        cin >> occupation;
        cout << "Are you married <y/n>\n";
        char marriedOrNot;
        cin >> marriedOrNot;
        if(marriedOrNot=='y'){
            newTxt << "Relationship Status : Married"<<endl;
        }
        else if(marriedOrNot=='n'){
            newTxt << "Relationship Status : Not Married"<<endl;
        }
        else {
            newTxt << "Relationship Status : Undefined"<<endl;
        }
        cout << "Your data is saved in myData.txt\n";
        
        newTxt << "Name:" << dataName << endl;
        newTxt << "Age:" << dataAge << endl;
        newTxt << "Occupation:" << occupation << endl;
        newTxt.close();
    }
    else {
        cout << "something is wrong\n";
    }
    // More Ofstream //
    ofstream IAmCrazy("IAmCrazy.txt");
    if(IAmCrazy.is_open()){
        cout << "IAmCrazy is open\n";
        IAmCrazy << "This is my last ofstream trial (check out your ToDoList code (that was a good one)), Try to do something more usefull\n";
        IAmCrazy.close();
    }
    
    // IFSTREAM
    
    ifstream getData("IAmCrazy.txt");
    
    // Pointers //
    int Fish = 22;
    int *PointerOfFish = &Fish; // assigning the value of Fish to PointerOfFish.
    cout << "The memory address of variable Fish is "<<PointerOfFish << endl;
    cout << "The value of PointerOfFish is "<<&PointerOfFish<<endl;
    
    double getVal;
    cout << "Enter a number to be assign to a pointer\n";
    cin >> getVal;
    double *PointerOfgetVal = &getVal;
    cout << PointerOfgetVal;
    


    
    // LOOPS //
    cout << "Example of cin in for loop"<<endl;
    int num;
    cout << "Please enter all integers from 8 to 13\n"<<endl;
    for(int i=8;i<=13;i++){
        cin >> num;
        if(num == i && i < 13){
            cout << "what about the next number\n"<<endl;
        }
        else if (num == 13){
            cout << "Good Job\n";
            break;
        }
              else{
            cout << "WRONG, the next number was "<<i;
            break;
        }
    }

    cout << "Please enter 5 cities you would like to visit\n";
    
    // here i is 0 to give default value, otherwise it will show error//
    for(int i=0;i<=4;i++){
        string cities;
        cin >> cities;
        if(i<=3){cout << "Nice choice"<<endl;}
        else if(i==4){cout << "I wish you have a good trip there\n";
        break;
        }
    }
    cout << "Please enter your name\n";
    string name;
    cin >> name;
    cout << "same as the previous exercise but using while loop"<<endl;
    cout << "Please enter all integers from 8 to 13\n"<<endl;
    int i = 8; //declare that the starting number of the loop is 8//
    while(i<=13){
        cin >> num;
        if (num==i&&i<=12){
            cout << "continue\n";i++;} // increment in while loop is declared here //
        else if (num==13){
            cout << "good job "<<name<<endl;
            break;
        }
        else {
            cout << "WRONG, the next number was "<< i << endl; // 'i' will automatically prints out the value of next number //
        }
        // always remember to use break otherwise the loop will be infinte and the result may be different from your expectation//
    }

    cout << "write a program that asks user to type 10 integers and writes the sum of the integers"<<endl;
    cout << "enter 10 integers (whole numbers)\n";
    int sum = 0; // default value //
    int x = 0;
    for(i=0;i<=9;i++){
        cin >> x; // Automaticaly initialize i as x //
        sum += x;
    } // Calculating the sum of x //
    cout << "The sum of the integers you've entered is "<<sum<<endl;
    // you can assign different variable name to the for loop || and 0 is used to give default value for example in the sum and x above//
    
    
    //CALLING CLASS CAR (myCar Object)//
    Car myCar = Car(number="J98756"); //first attribute of the object//
    myCar.Owner(ownerName = "Calista");
    myCar.modelCar("bmw 6");
    cout << "Do you want to turn on/off your car <on/off>\n";
    cin >> startorStop;
    myCar.startorStopEngine(startorStop); //in the class method cin is declared so you can't give it a value here//
    
    
    // Class Car (Mclaren object)//
    cout << "Please enter your car's plate number\n";
    cin >> number;
    Car Mclaren = Car(number); // object must be declared first || if you dont put arguments on the first place (first intialisation in the class) you only need to type ((Car Mclaren)(class object))//
    cout << "Please enter your name\n";
    getline(cin,ownerName); // to enable user to use spacing when entering inputs //
    Mclaren.Owner(ownerName);
    cout << "Please enter your car's model\n";
    getline(cin,carmod);
    Mclaren.modelCar(carmod);
    cout << "Do you want to turn on/off your car's engine <on/off>\n";
    Mclaren.startorStopEngine(startorStop); // cin inside of the function is not recommended because its only can be used once || in this line is not working//
    
    //calling Instruments class (violin object)//
    Instruments violin = Instruments(InstName="violin"); //declaring the first attribute//
    violin.type(InstType="hoffner violin");
    violin.InstOwner(InstOwner2="Calista");
    
    //Class Instruments your instruments//
    cout << "What is your instrument (eg.Piano)\n";
    cin >> InstName;
    Instruments YourInst = Instruments(InstName);
    cout << "What is your instrument type (eg. Samick Piano)\n";
    cin >> InstType;
    YourInst.type(InstType);
    cout << "Who owns this instruments (if its yours then type yor name) eg.Henry\n";
    cin >> InstOwner2;
    YourInst.InstOwner(InstOwner2);
    
    
    
    cout << "TRIANGLE AREA\n";
    // new topics//
    string RadiusorLenght;
    double OneOverThree;
    double height,base,lenght,radius;
    double cone;
    cout << "Can you enter the height?\n";
    cin >> height;
    cout << "Can you enter the base?\n";
    cin >> base;
    double TriangleArea = 0.5 * base * height;
    cout << "The total area of your triange is " << TriangleArea<<endl;
    
    cout << "CONE VOLUME\n";
    OneOverThree = 0.33;
    cout << "Enter the height of the cone\n";
    cin >> height;
    cout << "Do you want to enter the radius or full lenght of the base?\n";
    cin >> RadiusorLenght;
    if (RadiusorLenght == "radius"){
        cout << "Please enter the radius of the base\n";
        cin >> radius;
        cone = OneOverThree*3.14*(radius*radius)*height;
        cout << "The volume of your cone is around "<<cone<<endl;
        }
    else if (RadiusorLenght == "lenght"){
        cout << "Please enter the lenght of the base\n";
        cin >> lenght;
        double calculateRadius = lenght/2; // calculate radius //
        cone = OneOverThree*3.14*(calculateRadius*calculateRadius)*height;
        cout << "The volume of your cone is "<<cone<<endl;

    }
    // Genetics class //
     cout << "\n\nThere are 2 genetical traits : recessive and dominant ,\nThis traits are found in human being\nYou can fill some information to know what are you\n";
    Genetics yourGene = Genetics(YourName);
    yourGene.TraitOne(FirstTrait);
    yourGene.TraitTwo(SecondTrait);
    yourGene.TraitThree(ThirdTrait);
    yourGene.TraitFour(FourthTrait);
    yourGene.TraitFive(FifthTrait);
    yourGene.TraitSix(SixthTrait);
    cout << "The number of trait you have for each category determines wheter your gene is dominant or recessive\n";
    if(FirstTrait=='y'&&SecondTrait=='y'&&ThirdTrait=='y'&&FourthTrait=='y'&&FifthTrait=='y'&&SixthTrait=='y'){
        cout << "You are mostly dominant, you need 2 copies of gene from your parents to be dominant\n";
    }
    else if(FirstTrait=='n'&&SecondTrait=='n'&&ThirdTrait=='n'&&FourthTrait=='n'&&FifthTrait=='n'&&SixthTrait=='n'){
        cout << "You are mostly recessive. Reccesive gene has fewer percentage than dominant gene\n";
    }
    else{
        cout << "Please count the total of your dominant and reccesive gene.If you have more dominant than you're mostly have dominant gene and vice versa\n";
    }
    
    // aVoidFunction //
    aVoidFunction(UserNum); // guessing number //
    
    // calling Fibonacci class
    class Fibonacci Obj1 = Fibonacci(GNumberN); // FIX FIX FIX!!!!!!!!!

    
    cout << "Do you have a pomeranian dog <y/n>\n";
    char HaveOrNo;
    cin >> HaveOrNo;
    bool Pomeranian;
    if(HaveOrNo=='y'){
      Pomeranian = true;
    }
    else{
        cout << ".....\n"; //indicates boolean Pomeranian is false //
    }
    int iP;
    while(iP<=5&&Pomeranian==true){
        double PomAge;
        cout << "How many Pomeranians do you have?\n";
        int PomNum;
        cin >> PomNum;
        for(int i=1;i<=PomNum;i++){
            if(i<PomNum){
            cout << "What is his/her name?\n";
            cin >> PomName;
                i++;
            }
            else if(i==PomNum){
                cout << "What is his/her Name?\n";
                cin >> PomName;
                break;
            }
            else{
                cout << "An error has occured\n";
                break;
            }
        }
        cout << "What is "<<PomName<<" gender <f/m>\nOr type q to quit\n";
        char femaleOrMale;
        cin >> femaleOrMale;
        if(femaleOrMale=='m'){
            cout << PomName << " Is a boy\n";
            PomRealAge(PomAge);
            i++;
        }
        else if(femaleOrMale=='f'){
            cout << PomName << " Is a girl\n";
            PomRealAge(PomAge);
            i++;
        }
        else if(femaleOrMale=='q'){
            break;
        }
        else{
            cout << PomName << " gender's is undefined\n";
            PomRealAge(PomAge);
            break;
        }
        
    }
    
    // calling density class //
    Density yourDense = Density(CalculateOrNo);
    yourDense.AccessValues(OptionP);
    // DENSITY CLASS //

    
    //LOOP THAT ASK USER TO BOOK A FLIGHT//
    cout << "\n\n   ***** WELCOME TO EL TRAZS AIRLINE ***** \n\n\n\n";
    cout << "AVAILABLE DESTINATIONS : \n ##United Kingdom,London : City(LYC)\n ##Dubai,Dubai : International Airport of Dubai\n ##China,Beijing : Beijing Capital International Airport\n ##French,Paris : Charles de Gaulle International Airport \n ## Maldives,Male : Ibrahim Nasir International Airport\n";
    cout << "You can book your flight here by typing 's' or type 'q' to quit"<<endl;
    char bookOrIns;
    cin >> bookOrIns;
        cout << "** INSTRUCTION ** \n 1.Choose your destination by typing (((eg.French,Paris:Charles de Gaulle))) ***just write the name of the airport\nDont forget about uppercase letter\n (((eg.Dubai when the written airport name is International Airport of Dubai)))\n 2.Choose the date of your flight DD/MM/YY (eg.22/10/2002)\n 3.How many people are you going to resgister and his/her name & age||(eg.Frank\n 67)\n *Babies under 1 year old is free\n 4.What class do you want (available class :\n# 1 = Economy\n# 2 = Business\n# 3 = VIP\n 5.Type q to quit\n\n\n";

        while(bookOrIns=='s'){
        cout << "\n\n ** BOOKING PAGE ** \n\n\n"<<endl;
        cout << "## Please choose destination (please write your destination as written in the instructions above otherwise there will be an error"<<endl;
        cin >> fldt;
        Destination elTrazs = Destination(fldt);
        cout << "## Please choose the date of your flight"<<endl;
        cin >> flda;
        elTrazs.Date(flda);
        cout << "## Please enter the requiered information of the passanger(s) that you want to register || PLEASE READ THE INSTRUCTION||"<<endl;
        cin >> PassangerNum;
        elTrazs.Passanger(PassangerNum);
        cout << "## Please enter the class you want (options are written in the instructions || ** please read the instruction above (enter on of the number) )"<<endl;
        cin >> ClassNum;
        elTrazs.PassClass(ClassNum);
        elTrazs.Fees(ActualFees);
            TotalFee = ActualFees*PassangerNum;
            cout << "The fee of your flight is $"<< TotalFee <<endl;
        cout << "*** YOUR BOOKING IS DONE *** \n\n do you want to confirm this <y/n>\n";
        char ConfirmorNo;
        cin >> ConfirmorNo;
        switch (ConfirmorNo){
                case 'y': cout << "Thank you\n";
                break;
              case 'n': cout << "Please type q to quit\n";
                cin >> qtoQuit;
                break;
              default : cout << "Invalid"<<endl;
            break;}
            if (qtoQuit=='q')break;
        
    }
    
    if (bookOrIns!='s'||bookOrIns!='q'){
        cout << "Please type s to start or q to quit \n";
    }
    else if (bookOrIns=='q'){cout << "Thank You "<<endl;
    }
cout << "********** THANK YOU **********"<<endl;
  // GO BEFORE THIS SECTION TO CONTINUE EXERCISE //
return 0;


}

void aVoidFunction(int numberGuesses){
    numberGuesses = UserNum;
    char ContinueorNot;

    srand(time(NULL));
    RandomNumber=rand()%10+1;
    cout << "YOU HAVE 7 ATTEMPS\n";
    for(int i=1;i<=7;i++){
        cout << "Please guess a number between 1-10\n";
        cin >> UserNum;
        if (UserNum==RandomNumber&&i<=5){
            cout << "You guessed the number correctly!"<<endl;
            cout << "Type q to quit or t to continue\n";
            cin >> ContinueorNot;
            if (ContinueorNot=='t'){
                cout << "START\n";
            }
            else if (ContinueorNot=='q'){
                cout  << "good bye\n";
                break;
            }
            else{
                cout << "Invlaid input please enter q to quit or t to start again\n";
                cin >> ContinueorNot;
                if(ContinueorNot=='q')break;
                else if(ContinueorNot=='t'){
                    cout << "START\n";
                }
            }
            
        }
        else if(UserNum!=RandomNumber&&i==6){
            cout << "You have 1 more attemp left\n";
        }
        else if(UserNum!=RandomNumber&&i==7){
            cout << "You Lose, try again next time\n";
            break;
        }
        else if(UserNum!=RandomNumber&&i<=5){
            cout << "Wrong\nTry again\n\n";
        }
    }
}

void PomRealAge(double PomAge){
    cout << "What is your dog's age?\n";
    cin>>PomAge;
    double RealAge = PomAge*7;
    cout << "In human age your dog's age is "<<RealAge<<" years old\n";
}







