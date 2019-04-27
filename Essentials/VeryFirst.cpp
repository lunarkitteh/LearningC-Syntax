//
//  main.cpp
//  hahahahaha
//
//  Created by calista on 5/11/16.
//  Copyright © 2016 Calista Lee. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>
#include<fstream>
#include <ctime>
using namespace std;// is used to get rid of std:: before declaring a code//
void printGrade(int);// functions need to be declared above and below int main() first and inside the main code you can recall it//
void computerChoice(int);
void userChoice(char);
int addNumbers (int firstNumber, int secondNumber = 0){
          int combinedValue=firstNumber+secondNumber;
          return combinedValue;}
// 0 above (in the parameter) give default value to the functions//


// CONSTANT//
const double PI = 3.14159;

//get positive integer from user//
int getPosInt(string msg){
    int num=0;
    do{
        cout<<msg<<endl;
        cin>>num;}
    while(num<=0);
    return num;
}


//are of circle//
double areaOfCircle(int r){
    return PI *pow(r,2);
    //pow means a quadratic expression, first you need to declare the variable than the number of powers//
}

//volume of sphere//
double volOfSphere(int r){
    return 4/3.0 * PI * pow(r,3);
}




int addition(int a,int b){
    int r = a+b;
    return r;
}
int main()
{
          // all of your main code is here//
          
          
cout << "hello \n";
          
// TWO SLASH INDICATE COMMENT, AND ITS IGNORED BY THE PROGRAM//
          
    /* THIS IS CALLED MULTILINE
       COMMENT SO YOU HAVE TO USE THIS KIND OF SYMBOL */
          
// MOVING ON TO VARIABLES //
          
    //some examples;//

    int x,yN; // DONT FORGET TO PUT 'int', ITS THE VARIABLE TYPE AND YOU HAVE TO DECLARE IT AT LEASE ONCE//
    x = 20;
    yN = 30;
    int sum = x+yN;
    cout << "sum =" << sum << endl;
    
    /*   some symbols=
        == means equal
        + means plus
        - means minus
        / means division
        * means multiplication
        <= means smaller and equal to ....
        >= means larger and equal to ....
        < or > means larger or smaller than but not equal
        % means reminder
        ++ means plus 1   */
    
    // ABOUT 'cin'//
    // cin is used to ask user to enter certain variable(s), heres how to do it//
          int NuMber,NUMber;
          cout << "please enter a number"<<endl;
          cin>> NuMber;
          cout << "please enter another numebr"<<endl;
          cin>> NUMber;
          sum = NUMber+NuMber;
          cout << "the sum of the numbers you entered is "<<sum<<endl;
    
          
    // THE IF STATEMENT//
    int f;
    f = 99;
    cin >> f;
    if ( f == 99) { cout << "true";}// SYNTAX EXAMPLE//
    // ANOTHER EXAMPLE//
    int age;
    age = 20; // this code here is an example if someones age is 20 , its not asking user to input their aga//
    if (age <= 17) {cout << "underage";}
    else {cout << "adult";} // else statement is used when you have declared the possibilities and theres only 1 left//
    
    
    // LETS CREATE A CONDITIONAL STATEMENTS WITH CIN//
    cout << "please enter a NUMber";
    int NNM;
    cin >> NNM;
    if ( NNM <=50) {cout << "welcome"<< endl;}
    else {cout << "bye" << endl;}
    
    
    // the while loop statements//
    int g;
    g = 1;
    while ( g<=10) {cout << "g=" << g++ << endl;}  // put the increment as shown in this example//
    // the loop will stop when it reach 10//
    
    /* the for statementc
       syntax = for (init;condition;increment) {statement(s)}
     
      ^^ a for loop is a repetition control structure that allows you to efficiently write a loop that executes a specific number if time and the loop will only stop when the condition becomes false^^
     HERES SOME EXAMPLE= */
    
    for (int x = 1;x<=10;x+=2) {cout<< "x=" << x<< endl;} // the syntax for this type of increment is x=+2//
    
    // USING THE WHILE LOOP WITH 'CIN'//
          
    //example//
    int num = 1;
    while ( num >6){cout << "number="<< num <<endl; num++;
    }// no 'smaller than' sign before incrments after endl but semicolons are must//
          
          
    // another example//
          
    cout << "please enter a number 10 times" << endl;
    num =1;
    int number;
    while ( num <=10) {cin >> number; num++;}
          //this code allows user enter a number using cin and store it in number variable 10 times//
          
          
    /* total syntax 
     - now lets modify the code above to calculate the sum of the numbers the user has entered*/
    num = 1;
    int Number;
    int total = 0;
    while (num <=5) {cin >> Number; total+= Number;num++;}
    cout << total << endl;
          // this code adds the number entered by user tot the total variable of each loop iteration//
    //NOTE ## THE VARIABLE TOTAL HAS AN INITIAL VALUE OF 0 //
    
    /* MOVE ON TO THE 'DO... WHILE LOOP,
      UNLIKE 'FOR'AND WHILE LOOPS, WHICH SET TEST THE LOOP CONDITION AT THE TOP OF THE LOOP,
     
      THE DO... WHILE LOOP CHECKS ITS CONDITION AT THE BOTTOM OF THE LOOP
     
     
     ## SYNTAX## do {statement (s) }; 
                 while (condition);}       */
    
    // HERES SOME EXAMPLES//
    
    int a=0;
    do { cout << a << endl; a++;} while (a<=5); // the output is the same as while loop statements//
    
    // LETS MODIFY THE CODE ABOVE TO ALLOW USER TO ENTER NUMBER USING DO... WHILE STATEMENT//
    cout << "please enter a number statrting from one\n";
    a=1;
    do {cin >> a; a+=2;} while (a <= 5); // this allows user to enter a number and get the loop +2 until 5 times//
    
    // LETS COMBINE THE VARIABLE TOTAL & VARIABLE WITH THE DO... WHILE STATEMENT//
    
    int DD = 1;
    total = 0;
    int NUmber;
    do { cin >> NUmber ; total += NUmber ; DD++;} while (num <=5);
        cout << total << endl; // this code's output is the sum of each contents of loop that the user has entered//
    
    // THE SWITCH STATEMENT//
    
    /* sometimes there is a need to test a variable for equality againts multiple values that can be achived by multiple if statements 
        for example :
     
        int age =42;
        if (age == 16) {cout << "too young";}
        if (age == 42) {cout << "adult";}
        if (age == 70) {cout << "senior";}
     
     ## THE SWITCH STATEMENT IS A MORE ELEGANT SOLUTION IN THIS SCENARIO##  */
    // NOTE = THE VARIABLE 'CASE' CANT BE USED FOR <= SIGN OR == OR >= SO THESE SIGNS CAN BE USED IN IF STATEMENTS//
    
    age = 42;
    switch (age)
    {case 16:cout << "too young";
            break;
        case  50: cout << "adult";
            break;
        case 70: cout << "senior";
        break;}
    // the code above is the same as 3 if statements//
    
    // LETS USE VARIABLE 'CIN' AND SWITCH STATEMENT//
    
    int CC;
    cin >> CC;
    switch (CC) {case 2: cout << "its 2";
    break;
        default: cout << "this is default case";}// default means otherwise in real world//
            // THE CODE ABOVE USED TO DECLARE WETHER THE USER'S INPUT IS CORRECT , IF THE USER ENTER THE NUMBER 2 THEN ITS CORRECT , OTHERWISE ITS WRONG AND THE PROGRAM WILL PRINT ' THIS IS DEFAULT CASE IN THE SCREEN//
    // LOGICAL OPERATORS//
    /* use logocal operators to combine conditional statemnets and return true or false
     OPERATOR         NAME OF OPERATOR         FORM
         &&            and operator            y&&y
         ||            or operator             x||y
          !            not operator            !x
     
     ##NOTE == in the AND operator both operands must be true for the entire expression to be true */
    
    
    // EXAMPLE  OF  AND STATEMENTS //
    age = 23;
    int money = 4;
    if (age >21 && money >50) {cout << "welcome"<< endl;} // both statements are TRUE//
    
    
    // ANOTHER EXAMPLE OF AND STATEMENT//
    age = 20;
    if (age >16 && age <60) {cout << "accepted"<< endl;}  // THIS CODE TELL THE PROGRAM TO ACCEPT THE USER IF HIS/HER AGE IS OLDER THAN 16 AND YOUNGER THAN 60//
    
    
    // THE AND STATEMENTS CAN BE USE FOR MULTIPLE STATEMENTS LIKE SHOWN BELOW//
    
    age = 21;
    int grade =88;
    
    if (age > 14 && age < 80 && grade > 10) {cout << "congratulation" << endl;}
    
    // MOVING ON TO THE OR STATEMENTS//
    
    /*the OR (||) operator returns true if any one of its operands is true
     
      EXAMPLE :
     
      int age = 16;
      int score = 90;
    if (age >20 || score > 20) {cout << "accepted" << endl;}
     
     */
    
    // ## NOTE == YOU CAN COMBINE ANY NUMEBR OF LOGICAL OR STATEMNETS YOU WANT IN ADDITION, MULTIPLE OR AND AND STATEMENTSS CAN BE CHAINED TOGETHER//
    
    // ##** NOTE == IF ONE VARIABLE'S TYPE HAS BEEN DECLARED YOU DONT NEED TO PUT THE TYPE ANYMORE THE EXAMPLE IS IF YOU ALREADY ENTER THIS CODE = int age = 13; , IN THE NEXT LINE OF CODE YOU DONT NEED TO TYPE  int age= 20; BUT JUST age=20;//
    
    /* MOVING ON TO LOGICAL NOT OPERATORS
     
     THE LOGICAL NOT (!) OPERATOR ONLY WORKS WITH JUST A SINGLE OPERAND, RERVISING ITS LOGICAL STATE */
    
    // THE EXAMPLE//
    age = 13;
    if ( !(age < 16 )) {cout << "your age is less than 16" << endl ;}
    
    
    
    
    /* DATA TYPES
       
     
       THE OPERATING SYSTEM ALLOCATES MEMORY AND SELECTS WHAT WILL BE STORED IN THE RESERVES EMORY BASED ON THE VARIABLE'S DATA TYPE
     
     THE EXAMPLES BELOW SHOW LEGAL AND ILLEGAL C++ EXPRESSION
     
     55 + 15   ........ LEGAL BECAUSE BOTH EPERANDS OF THE + OPERATOR ARE INTEGERS
     
     55 + "JOHN" ........ ILLEGAL BECAUSE THE + OPERATOR IS NOT DEFINED FOR INTEGER AND STRING
     
     "HELLO" + "JOHN" ........ LEGAL BECAUSE THE + OPERATOR IS USED FOR STRING CONCATENATION    */
    
    
    
    
    
    
    
    
    /*  NUMERIC DATA TYPES
     
     
      NUMERIC DATA TYPES INCLUDE;
     
      ## INTEGERS (WHOLE NUMBERS) , SUCH AS -7, 42.
      ## FLOATING POINT NUMBERS , SUCH AS 3.14 , -42.67      */
    
    
    
    
    /* STRING AND CHARACTERS 
     
     A STRING IS COMPOSED OF NUMBERS , CHARACTERS OR SYMBOLS, STRING LITERALS ARE PLACED IN DOUBKE QUOTATION MARKS,
     
     SOME EXAMPLE ARE = "HELLO" ,  " MY NAME IS CALISTA" and similar.
     
     
     CHARACTERS ARE SINGLE LETTERS OR SYMBOLS AND MUST BE ENCLOSED BETWEEN SINGLE QUOTES LIKE,   'A',   'B' , ETC 
     */
    
    
    
    
    
    /* BOOLEANS 
     
       THE BOOLEAN DATA TYPE RETURNS JUST 2 POSSIBLE VALUES : TRUE (1) , FALSE (0)
       CONDITIONAL EXPRESSION ARE AN EXAMPLE OF BOOLEAN DATA TYPE
     
     */
    
    
    
    
    
    /* INTEGERS
       
     THE INTEGER TYPE HOLDS NON-FRACTIONAL NUMBERS, WHICH CAN BE POSITIVE OR NEGATIVE , EXAMPLE OF INTEGER WOULD INCLUDE 42, -42, AND SIMILAR NUMBERS
      
     
     ### USE INT KEYWORD TO DEFINE THE INTEGER DATA TYPE.
     EXAMPLE = int a = 22;
     
     
     ### several of basic types, including integers , can be modified using one or more of these type
     MODIFIERS:
     signed : A signed integer can hold both negative and postive numbers
     
     unsigned : An unsigned integer can hold only positive numbers
     
     short : half of the default size
     
     long : twice the default size
     
     
     ### for example ==  unsigned long int a;     ###
     
     
     
     $$$$ FLOATING POINT NUMBERS == can hold a real number such as 420.0 , -3.33  or  0.03325
     you could say that the decimal has the ability to 'float'.
     
     for example == double temp = 42.21;
     $$$$
     
     */
    
    
    /* ARRAYS
      ## an array is used to store a collection of data, but it may be useful to think of an array as a collection of variables that are all of hw same TYPE.
     instead of declaring multiple variables and storing individual values you can declare a single array to store all the values.
     
     for example = int a [5];
     
     in the example above , variable a was declared as an array of five integer values [specified in square brackets] you can initialize the array by specifying the values it holds
     
     for example = int b[ 5] = {11 , 22 , 44 , 66};
     -- the values are provided in commma separated list, enclosed in { curly braces}
     
     ## note== the number of values in the curly bracktes must not more or less than number in the square brackets##
     
     */
    
    //  EXAMPLE NO.1//
    int DDXX[] = {1,2,3,4,5}; // if you dont include the size of array in the square brackets the array will adjust it size//
    cout<< DDXX [4]<< endl;
    /* each member of the array has an index which pinpoints the element's specific position
     for example =  int XXXX [] = {11,22,33,44,55};
                    cout << XXXX [0] << endl; == then the output will be 11
     */
    
    // NOTE ## THE ARRAYS START COUNTING THE INDEX OF THE NUMBER FROM 0//
    
    int ZZZZ [] = {1,2,4,5,6};
    cout << ZZZZ [1] << endl;
                                // _________  //
    // ARRAYS ARE NOT SO IMPORTANT {^ ___ ^}
                                // _________ //
    
string bloodtype = "O";
          bloodtype="A";
          bloodtype="B";
          bloodtype="AB";
    if (bloodtype == "O") {cout << "O is the most common bloodtype in the world,\n if you have -O blood type you are an universal donor" << endl;}
    else if (bloodtype == "A") {cout << " A is the second most common bloodtype  in the world"<<endl;}
    else if (bloodtype=="B"){cout<< " B is the second rarest bloodtype in the wrold before AB"<<endl;}
    else {cout << " AB is the rarest bloodtype in the world and you can receive blood donor from all blood type"<<endl;}
    cout << "please  enter your blood type in capital letter" << endl;
          cin >> bloodtype;
          
    
    
    cout << "please enter a number " << endl;
    int WE = 1;
    int NUMBER ;
    while ( WE <= 5) {cin >> NUMBER; WE += NUMBER; WE ++;}// this code allows user to enter a number and get the loop of 5 number with increments of +1//
    
    /* going back to arrays in calculation
     
       the following codencreates a program that uses a 'for' loop to alculate the sum of all elements of an array
       heres the example==
       int arr [] = {11,35,62,555,987};
       int sum =0; 
       for (int x=0; x<=5 ;x++) {sum +=arr[x];}
     cout << sum << endl;
      
      $$ the outputs will be 1652
     
     ## review = we declared an array and a variable sum that will hold the sum of the elements. each elemnt of the array and added the corresponding element's value to our sum variable.
     
      ** NOTE == IN THE ARRAY THE FIRST ELEMENT'S INDEX IS 0, SO THE FOR LOOP INTIALIZE X VARIABLE TO 0 **
     */
    
    int arr [] = {1,3,6,9,2};
    sum =0;
    for (int x=0; x<=5 ; x++) {sum +=arr[x];}// this code use the increment of ++ or +1 for array and the number of elements should be the same as the number of the elements in the array and x is uses to be the name of the array//
    cout << sum << endl;
     
          cout <<"hello"<< endl;
          
  /* multi-dimensional arrays
   
    ** a multidimensional array holds one or more arrays, declare a multidimensional array as follows==
       syntax == type name [size 1][size2]...[sizeN]
    ^^ here we've created a two dimensioanl 3x4 integer array==
       ~~~~~~~~~~~~~~~~~~~~~`
       int x[3][4];
     
       ^^^^^^^^^^^^^^^^^^^^^
       _VISUALIZE THIS ARRAY AS A TABLE COMPOSED OF 3 ROWS AND 4 COLUMNS___________________________________________
   
             column 1 | column 2 | column 3| column 4|
       row 1| x[0][0] | x[0][1]  | x[0][2] | x[0][3] |
       row 2| x[1][0] | x[1][1]  | x[1][2] | x[1][3] |
       row 3| x[2][0] | x[2][1]  | x[2][2] | x[2][3] |

      */
          
       // heres some example of two dimensional arrays//
       // multidimensional arraya may be initilized by specifying breavketed values for each row. following is an array with 2 rows and 3 columns+==//
          int HH[2][3]= {
                    {2,3,4}, {8,9,10}
             //     ^^^^^^    ^^^^^^   //
              //   first row////second row//
          };
          
          int AQ [2][3] ={{2,3,4}, {8,9,10}}; // the arrays also can be written as follows//
          
          // the elements are accessed by using the row index and column index of the array,for example;//
          int WQW [2][3] ={{1,2,3},{2,5,6}};
          cout << WQW[0][2] << endl;
          
          // note == arrays can contain an unlimitef number of arrays,  but arrays with more than 3 dimensions are harder to manage//
          
          /* introduction to pointers
             ## every variable is a memory location, whic has its address defined, that ddress can be accessed using the ampersand (&) operator which denotes an address in memory*/
          //for example==//
          int score = 5;
          cout << &score << endl;  //outputs= "Ox29fee8" >>>> this output is the memory address which stores the variable score//
          
          /* @@ NOTE @@ ----------->>>>  A POINTER IS A VARIABLE WITH THE ADDRESS OF ANOTHER VARIABLE AS ITS VALUE, IN C++ POINTERS HELP MAKE CERTAIN TASKS EASIER TO PERFORM, OTHER TASKS SUCH AS DYNAMIC MEMORY ALLOCATION CANT BE FERFORMED WUTHOUT POINTERS, in other words pointer is a data type that contains a memory adress
           
              @@ ALL POINTERS SHARE THE SAME DATA TYPE- A LONG HEXADECIMAL NUMBER THAT REPRESENTS A MEMORY ADDRESS*/
           // the '&' operator is used for int data type//
           //  *  *  //
            //  {}  //
             //----//
          
          
          
     /* A POINTER IS A VARIABLE, AND LIKE ANY OTHER VARIABLE, IT MUST BE DECLARED BEFORE YOU CAN WORK WITH IT,
        THE ASTERISK ( * ) sign is used to declare a pointer , however in this statemnet the asterisk is used to designate a variable as a pointer,
               FOLLOWING ARE VALID POINTER DECLARATION ==
               ##   int*ip;  == pointer to an integer
               ##   double*dp; == pointer to a double
               ##   float*fp; == pointer to a float
               ##   char*ch; == pointer to a character
        @@ NOTE = THE ASTERISK SIGN CAN BE PLACED NEXT TO THE DATA TYPE, OR THE VARIABLE NAME, OR IN THE MIDDLE
        @@ HERES AN EXAMPLE ( CODE TO MAKE THE 'PTR' VARIABLE A POINTER TO INT) ==  int*ptr;  */
          
          
          //HERES SOME EXAMPLE OF THE USING OF THE POINTERS//
          
          score = 5;
          int *scorePtr;
          scorePtr = &score;
          cout << scorePtr<< endl;  // output is the memory location //
          //^^^^ the code above declares a pointer to an integer called scorePtr, and assigns to it the memory llocation of the score variable using the ampersand (address - of) operator//
          
          // the code below is used to declare a pointer to int which points to variable var//
          int var =5;
          int*ptr = &var;
          cout << &var << endl;
          
          
/* MORE ON POINTERS
   ## POINTER OPERATIONS == THERE ARE 2 OPERATORS FOR POINTERS : ADDRESS OF OPERATOR (&) WHICH RETURNS THE MEMORY ADRESS OF ITS OPERAND AND == CONTENTS OF (OR DEREFERENCE) OPERATOR (*) WHICH RETURNS THE VALUE OF THE VARIABLE LOCATED AT THE ADDRESS SPECIFIED BY ITS OPERAND 
  
      ** FOR EXAMPLE */
          
           var =50;
          int *p;
          p = &var;
          cout << var << endl;   // outputs of this code will be 50 which is the value of 'var'//
          cout << p << endl;     // outputs of this code is the 'var's memory location//
          cout << *p << endl;    // outputs of this code is 50 ( the value of the variable stored in the pointer 'p' (*P))//
          
          // NOTE == THE ASTERISK (*) IS USED IN DECLARING A POINTER FOR THE SIMPLE PURPOSE OF INDICATING THAT IT IS A POINTER, DONT CONFUSE THIS WITH THE DEREFERENCE OPERATOR WHICH IS USED TO OBTAIN THE VALUE LOCATED AT THE SPECIFIED ADDRESS, THEY'RE SIMPLY 2 DIFFRENT THIGS REPRESENTED BY THE SAME SIGN//
          
          // NOW HERES THE EXAMPLE OF DEFERENCE//
          // THE DEREFERENCE OPERATOT (*) IS BASICALLY AN 'ALIAS' FOR THE VARIABLE THE POINTER POINTS TO//
          x = 5;
          int *G = &x;
          x = x+4;
          x = *G+4;
          *G = *G+4;
          /* all 3 of the preceding statements are equivalent, and return the same result, we can access the variable by dereferenceing the variable's pointer
              ## as G is pointing to the variable x dereferncing the pointer (*p) is representing exactly the same as the variable x
           */
          
          int ad = 5, ar = 10;
          int *XX = &ad;
          int * XY = &ar;
          sum = *XX += *XY; //same as ad+ar//
          cout << "sum is " << sum << endl;
          

 
          //^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^//
          
          // STATIC AND DYNAMIC MEMORY//
          /*  to be successful as a C++ programmer, its essential to have a good understanding og how dynamic memory works, in C++ program, memory is devided into 2 parts ==
              ** the stack : all of your local variables take up memory from the stack.
              ** the heap  : unused program memory that can be used when the program runs dynamically allocate memory.
           
              many times, you're not aware in advance how much memory you will need to store particular information in a define variable and the size of required memory can be determined at run time,
              you can allocate memory at run time within the heap for the variable of a given type sing the 'new' operator which returns the address of the space allocated
           
              SYNTAX ==  new int;
              ** this allocates the memory size neccessary storing an integer on the heap and returns that address*/
          new int;
          
           // DYNAMIC MEMORY//
           /* THE ALLOCATED ADDRESS CAN BE STORED IN A POINTER, WHICH CAN THEN BE DEREFERENCED TO ACCESS THE VSRIABLE.
              EXAMPLE == int*p = newint;
                         *p=5;
              ## now we have dynamically allocated memory for an integer , and assigned it a value of 5##
              ## the pointer p is stored in the stack as a local variable, and holds the heap's allocaed address as its value, the value of 5 is stored at that address in the heap*/
          
          
          int*XEN = new int; cout << XEN <<endl;
          //this is a code that declares a pointer to int named XEN to hold the address returned by the new int; expression//
          
          
/* DYNAMIC MEMORY 
   ==  for locql variable on the stack, managing memory is carried out automatically, ont the 'heap' (a pool of memory used for dynamic memory allocation) , its neccessary to manually handle the dynamically allocated memory, and use the 'delete' operator to free up memory when its no longer needed
 SYNTAX == delete pointer;  --- this statement releases the memory pointed to by (pointer== stores the address of an object)
 FOR EXAMPLE==
 */
          int * ccx = new int; //requests memory//
          *ccx = 5; //store value//
          delete ccx; //free up memory//
          //NOTE = FORGETTING TO FREE UP MEMORY THAT HAS BEEN ALLOCATED WITH THE NEW KEYWORDS WILL RESULTS IN MEMORY LEAKS//
          
          
          cout << "Hello world";
          int XENON[2][2]={{1,2},{3,4}};
          cout << "the value of second row and collumn  of XENON array is" << XENON[2][2];
          
          //void function//
          //grading//

          cout << "please enter your score";
          cin >> score;
          printGrade(score);// function//
         
    
          
          // NEW TOPIC//
          //
          /*NOTE == 'double' MEANS IT CONTAINS FLOATING POINT OR DECIMAL NUMBER
                     but 'double' give more accurate output up to 15 digits decimals and 'float' give is more accurate if its up to 6 digits*/
          //NOTE== 'const' MEANS THE VALUE IT CONTAINS CANT BE CHANGED//
          const double CA= 3.249859849; // the example of double and const//
          
          //MORE EXPLAINATION OF BOOLEANS//
          bool RRC=true; // will return 1 which indicates true//
          bool RRV=false; //will return 0 whic indicates false//
          cout << "do you choose RRC or RRV?";
          cin>> RRC>>RRV ;// this is example of decalring cin of different inputs rhat a user may choose//
          // above is example of bool//
          
     
          
          
          
          
          //^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^//
          
          
          
          /* another types of int include=
             * short int === at least 16 bits
             * long int === at least 32 bits
             * long long int === at least 64 bits
             * unsigned int === the same as signed version
             * long double === not less than double
           
           
           
           
             HOW TO FIND BITS===       */
          int myAge;
          myAge=13;
          cout<<"Size of int myAge is"<<sizeof(myAge)<<endl;
          // above is example of finding bits in int//
          
          char myGrade = 'a';
          cout <<"size of char myGrade is"<<sizeof(myGrade)<<endl;
          //example of finding bits in char//
          
          //basically the syntax of ffinding bits is === sizeof();//
          

          
           
           //HOW TO CAST//
          //example//
          cout<<"4/5 = "<< 4/5 <<endl; // this will return 0 so we need to cast 'float' to get decimal output//
          // new example//
          cout<<"3/5 = " << (float)3/5<<endl; // this will return more accurate value (decimal value)//
          // the syntax is as shown above and you can change float with other types such as double,int,char,and others//
          
          
          
          
          // ARE YOU ALLOWED TO DRIVE//
          
          cout << "enter your age\n";
          cin >> age;
          cout<< " are you intoxicated\n";
          bool notIntoxicated= true;
                bool Intoxicated = false;
          /*  && = and
              || = or
              !  = not
           */
          if((age<=1)&&(age<=16)){cout<<"you are not allowed to drive\n";}
          else if ((age>=80)||(age>=100)){cout<<"you are a bit too old to drive\n";}
          else if (!notIntoxicated){cout << "you cant drive\n";} // it takes the bool (true) and turn it to false to cout<< "you cant drive"//
          else {cout<<"lets drive!\n";}
          //done//
          
          
          
          
          // DECLARING ASSIGNMENT BASED ON CONDITION//
          /*    SYNTAX= variable = (condition) ? true : false
           */
          // EXAMPLE//
          // its basically used to ask confirmation of TRUE OR FALSE//
          int largestNum = (5>2) ? 5 : 2;// if its true it will print out 5 if it false it will print out 2//
          cout<< "largest number is " << largestNum<< endl;
          
          // done//
          
          
          
          // 'CHAR' ARRAY//
          // before we use 'int' in arrays//
          char myName[8][8]={{'C','a','l','i','s','t','a'},{'l','e','e','f','d','h','r'}};
          cout << "second letter of second array is "<< myName[1][1]<<endl;// second array means second row(second{}),second letter is the position of the letter which is 1 in this condition//
          // you can change the value of array here//
          cout << myName[1][0]; // is 'l'//
          myName[1][0]='e';// new value//
          cout << "new value is "<<myName[1][0]<<endl;
          // using array in for loop//
          myName[1][0]='l';//revise the value//
          for(int c=0;c<10;c++){for(int j=0;j<3;j++){cout<<myName[c][j];}}
          //done//
          
          
          
          
          
          // RANDOM NUMBERS//
          int ranNum = (rand()%50);
          // random number from 0 to 49//
          cout << "the random number is " << ranNum << "\n"<<endl; // print a random number between 0 and 49//

          int RANDOMnumber;
          while(RANDOMnumber!=2) // while RANDOMnumber is not equal to 2 it will print out 5 random number other than 2//
           {
                     cout << RANDOMnumber<<", "<<endl;
                     RANDOMnumber=(rand)()%5;// condition needs to be declared under the while loop if you want different random number//
          }
          
          
          
          
          
          
          
          
          
          
          
          
          // LAME ROCK SCISSOR AND PAPER GAME //
          char answer;
          cout << "do you need instruction <y/n>"<<endl;
          cin >> answer;
          switch(answer){
case 'y' : cout << "b for rock \n h for scissors \n v for paper \n ROCK IS WINNING OVER SCISSORS\n PAPER IS WINNING OVER ROCK\n SCISSORS IS WINNIG OVER PAPER\n"<<endl;
          break;
case 'n' : cout << "press o to go back"<<endl;
                              char back;
                              back = 'o';
                              cin>>back;
          cout << "are you ready to play<y/n>" << endl;
          char ready;
          cin >> ready;
          switch(ready){
                    case 'y' : cout <<"press x to play "<<endl;
                              break;
                    case 'n' : cout << "press z to exit"<<endl;
                              break;
          };
          char play;
          cin >> play;
          switch (play){
                    case 'x' : cout << "do you choose paper , scissors , or rock ?"<<endl;
                              break;
                    case 'z': cout << " good bye"<<endl;
                              break;
                              
          };
          }
          //user//
          char player;
          cin>>player;
          userChoice(player);
          
          //computer//
          cout << "now the computer will choose"<<endl;
          int RAndomNUmber= (rand()%15);
         computerChoice(RAndomNUmber);
          

               //COMPARE THE WINNER AND LOSER //
          
          if (player=='b'&&RAndomNUmber<=5){cout << "its a draw!"<<endl;}
          else if (player == 'h' && RAndomNUmber<=10){cout << "its a draw!"<<endl;}
          else if (player == 'v' && RAndomNUmber <=15){cout << "its a draw!"<<endl;}
          else if (player == 'b' && RAndomNUmber <=10){cout << "YOU WIN"<<endl;}// rock over scissors//
          else if (player == 'h' && RAndomNUmber <=15) {cout << "YOU WIN"<<endl;}//scissors over paper//
          else  {cout << "YOU WIN"<<endl;} // paper over rock//
          do {
                    cout << "you lose"<<endl;
          } while ((player =='b'&&RAndomNUmber<=15)||(player=='h'&&RAndomNUmber<=5)||(player=='v'&&RAndomNUmber<=10));
          // 50% OF THE TIME ITS WORK ALL THE  TIME but i dont care anymore  //

          
          

          // DONE//
          
          
          

          // 'COMPARE//
          string dogstring = "dog";
          string catstring = "cat";
          cout << dogstring.compare(catstring)<<endl;// the output is 1//
          cout << catstring.compare(dogstring)<<endl;// the output is -1//
          cout << dogstring.compare(dogstring)<<endl;// the output is 0 because it has the same comparator//
          // done//
          
          
          
          // WHILE LOOP//
          
          
          int XCD=0;
          while(XCD<=10){
                    cout<<"the value of XCD plus one is "<<XCD<<endl;XCD++;}// increment ot decrement in while loop is declared after the statement//
          
          
          
          
          // OFSTREAM and IFSTREAM FUNCTION  (READING AND WRITTUNG DATA USING C++)//
          string steveQuote = "A day without sunshine is like, you know, night";
          ofstream writer ("stevequote.txt"); // writer here is the name of a file (but the file 'writer' is doesnt exist//
          //the ofstream above save the string steveQuote into .txt//
          
          if (!writer){
                    cout << "error opening the file"<<endl;
                    return -1; // to signal that an error has occured//
          }
          else {
                    writer << steveQuote <<endl;   // to write text to the file//
                    writer.close();  // to close ofstream//
          }
          ofstream writer2("stevequote.txt",ios::app);
          
          /* 
            #ios::app = open a stream to append to whats there
            # ios::binary = treat the file as binary
            # ios::in = open a file to read input
            # ios::trunc = default
            # ios::out = open a file to write output
           */
          if(!writer2){
                    cout<< "error opening the file"<<endl;
                    return -1; // to signal that an error has occured//
          }
          else {
                    writer2 << "\n -Steve Martin"<<endl; //the new line that appended//
                    writer2.close(); //close ofstream//
          }
          /* 
           
           ifstream = input file stream
              ofstream = output file stream
           
           */
          char letter;
          ifstream reader ("stevequotes.txt"); // declare the file that wwill be red//
          if (!reader){cout << "error opening the file"<<endl;
                    return -1;
          }
          else {
                    for (int i=0;!reader.eof();i++){
                              reader.get(letter); //assign char letter to reader ifstream//
                              cout<<letter; //print out the letter//
                              
          }
                    /*
                     .eof() above means 'end of string'   ;
             so !reader.eof() means the loop will keep going as long as its not the end of string
             */
          }
          cout<<endl;//print out the reader.get(letter);//
          reader.close();// close the reader ifstream//
          
          /* 
           
           NOTE== THE OUTPUT OF THE IFSTREAM AND OFSTREAM ABOVE IS SUPPOSED TO BE =
             a day without sunshine is like, you know, night
             -Steve Martin
           
           ++ but the file of stevequote.txt doesnt exist so the real output is=
             error opening the file
           
           */
          
          
          // DONE WITH OFSTREAM AND IFTSREAM//
    
    
    
    //NON-VOID FUNCTION//
    /*  int a,b;
    int addition(int a,int b){
        int r = a+b;
        return r;}
     DECLARED//
     */
    int zValue;
    Zvalue= addition(5,3);
    cout<<"the value of z is "<<zValue;//print out "the value of z is 8"//
    
    
    
    
    
    // PROGRAM 6///
    /*    ALL ABOUT FUNCTIONS =
     # get positive integer from user (getPosInt)
     # are of circle (areaOfCircle)
     # volume of sphere (volOfSphere)        */
    
    int radius = getPosInt ("Enter a positive integer for the radius of circle or sphere: ");
    // the string in the parameter above is declared as string msg above the int main()//
    double aCircle = areaOfCircle(radius);
    double vSphere = volOfSphere(radius);
    // passing output//
    //circle//
    cout << "The area of a circle that has radius of"<< radius<< "is " << aCircle;
    //sphere//
    cout << "The volume of a sphere that has radius of"<< radius<< "is " << vSphere;
    
    
    
    
    
    
          
          system ("pause");
    cout << "My name is Dummy"<<endl;
    return 0;
          }



// void function cant be declared in int main() it has to be declared below//
          void printGrade(int score){
          if (score<=50){cout<<"your grade is C,need improvement";}
          else if(score<=75){cout<<"your grade is B,its statisfying";}
          else if(score<=100){cout<<"your grade is A,congratulations";}
          /*this function here cant be used yet unless its declared befor int main() like this= void printGrade(int)
           function is used to recall condition or code that you want to use over and over again*/
}

void computerChoice(int RAndomNUmber){
          
if (RAndomNUmber<=5){cout<<"computer choose rock"<<endl;}
          else if (RAndomNUmber<=10){cout<<"the computer choose scissors"<<endl;}
          else {cout<<"the computer choose paper"<<endl;}
          
}

          void userChoice(char player){
          if (player == 'b'){cout << " you choose rock"<<endl;}
          else if (player == 'h'){cout<< "you choose scissors"<<endl;}
          else if (player == 'v'){cout << "you choose paper" << endl;}
          }

