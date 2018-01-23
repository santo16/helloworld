#include <iostream>
//#include "first_program.h"
#include <cstdint>
#include <bitset>

using namespace std;

int function_call()
{
    int x;
//second program
cout<<"Entered Function call\n";
cout<<"Enter a number:";
cin>>x;
cout<<"\nEntered Number is:\t" << x <<endl;
cout<<"Exiting the function call\n";
return x;
cout<<"THis line will never get executed\n";
}

int doubleTheNumber(int x)
{
    return 2*x;
}

void printInteger(int myValue)
{
    cout<< "value before increment is::"<< myValue <<endl;
    myValue++;
    cout<< "value after increment is::"<< myValue <<endl;
}

void Variables_Introduction(void)
{
int nDate(29), nYear(2017);
    int Num_int;
    int nNum_int_1();
    int nNum_int_2(0);
    int nNum_int_3;
    unsigned char sChar{179};
    float nFloat_Num{31};
<<<<<<< HEAD
    float nFloat_Den{3.000f};
    uint16_t nInt_16{65535};
    uint8_t nInt_8{65};
    cout<< "Please Enter a Value:";
    cin>>Num_int;
    const int nNum_int=Num_int;
    cout<< "current value is:"<< nNum_int<<endl;
    printInteger(nNum_int);
    cout<< "floating point number nFloat_Num\'" << nFloat_Num << nFloat_Den <<endl;
=======
    float nFloat_Den{3};
float n_New_Year{2.018e3};
    uint16_t nInt_16{65535};
    uint8_t nInt_8{65};
cout<< "Happy New Year" << n_New_Year << endl;
>>>>>>> fbc288b95b654fcff5d52af4a52902f4600707d2
    cout<< "nInit_8= " << nInt_8 <<endl;
    cout<< "nFloat_Num /Float_Den="<<nFloat_Num/nFloat_Den<<endl;
    cout<< "31/3="<<nFloat_Num/nFloat_Den <<endl;
    cout << "size of schar: \t"<< sizeof(sChar) << "°"<<"\tsChar = "<< sChar << endl ;
    string sString("This is a string");
    nInt_16= nInt_16 +1;
    cout << "size of nInt_16:"<<sizeof(nInt_16) <<"="<< nInt_16<<endl;
    cout << "nNum_int{}="<<nNum_int <<endl;
    cout << "nNum_int_1()="<<nNum_int_1 <<endl;
    cout << "nNum_int_2(0)="<<nNum_int_2 <<endl;
    cout << "nNum_int_3="<<nNum_int_3 <<endl;
    cout << "string sString=" <<sString <<endl;
    string sfirstString = "This is first string statement";
    cout << "My First program is on: "<< nDate << "November" << nYear <<endl;
    cout<<"The string is :" << sfirstString << endl;
    cout<<"size of int:\t \t"<<sizeof(int)<< endl; // prints 4
    cout<<"size of char:\t \t"<<sizeof(char)<< endl; //prints 1
    cout<<"size of string:\t \t"<<sizeof(string)<< endl; //prints 4
    cout<<"size of long:\t \t"<<sizeof(long)<< endl; // prints 8
    cout<<"size of long long:\t \t"<<sizeof(long long)<< endl; //prints 8
    cout<<"size of boolean: \t"<<sizeof(bool)<< endl; //prints 1
    cout<<"size of float:\t \t"<<sizeof(float)<< endl; //prints 4
}

void Task1(void)
{
        float fVariable1, fVariable2;
    char cMathOperator;
    cout<<"Please enter a floating point number";
    cin>>fVariable1;
    cout<<"Please enter second floating point number";
    cin>>fVariable2;
    cout<<"Please provide a mathematical symbols from: +, -, *, /";
    cin>>cMathOperator;
    if (cMathOperator == '+')
        cout<<"Result is:"<<fVariable1+fVariable2<<endl;
    else if (cMathOperator == '-')
        cout<<"Result is:"<<fVariable1-fVariable2<<endl;
            else if (cMathOperator == '*')
        cout<<"Result is:"<<fVariable1*fVariable2<<endl;
            else if (cMathOperator == '/')
        cout<<"Result is:"<<fVariable1/fVariable2<<endl;
}

const float Gravity_Constant=9.8;
void Distance_Fallen(float Tower_height,int time)
{
    float Distance_fallen = Tower_height - Gravity_Constant*time*time/2;
    if (Distance_fallen <=0)
        Distance_fallen = 0;
    cout<<"Ball at "<<time<<"Sec is at height\t"<<Distance_fallen<<"\tin Meters"<<endl;

}

void Ball_Dropped_Example(void)
{
    float Tower_height;
    cout<<"Please provide the tower height in Meters\t";
    cin>> Tower_height;
    Distance_Fallen(Tower_height, 1);
    Distance_Fallen(Tower_height, 2);
    Distance_Fallen(Tower_height, 3);
    Distance_Fallen(Tower_height, 4);
    Distance_Fallen(Tower_height, 5);
}

void Print_Binary_number(void)
{
    int16_t nTemp,nInput;
    int Divisor=128;
    cout<<"Please provide a number between 0 to 255\t";
    cin>>nInput;
    cout<<"Binary representation of number is: ";
    while(Divisor>0)
    {
        nTemp=nInput/Divisor;
        //cout<<nTemp<<"\n";
        if(nTemp==1)
            cout<<"1";
        else cout<<"0";
        nInput%=Divisor;
        Divisor /=2;
        nTemp=0;
        //cout<<"Divisor is:"<<Divisor<<endl;
    }
}

//options corresponds to bit indices
const int option1 = 0;
const int option2 = 1;
const int option3 = 2;
const int option4 = 3;
const int option5 = 4;
const int option6 = 5;
const int option7 = 6;
const int option8 = 7;
void Bit_Set_Example(void)
{
    std::bitset<20> bits(0x0); // we need 8 bits, start with bit pattern 0000 0010
    bits.set(option5); // set bit 4 to 1 (now we have 0001 0010)
    bits.flip(option6); // flip bit 5 (now we have 0011 0010)
    bits.reset(option6); // set bit 5 back to 0 (now we have 0001 0010)

    std::cout << "Bit 4 has value: " << bits.test(option5) << '\n';
    std::cout << "Bit 5 has value: " << bits.test(option6) << '\n';
    std::cout << "All the bits: " << bits << '\n';
}

void Variable_Scope_Example(void)
{
    int nVariable1, nVariable2;
    cout<<"Please enter first Variable:\t";
    cin>>nVariable1;
    cout<<"Please enter second Variable:\t";
    cin>>nVariable2;
    if(nVariable2<nVariable1)
    {
        int temp=nVariable2;
        nVariable2=nVariable1;
        nVariable1=temp;
    }
    cout<<"First Variable is:\t"<<nVariable1<<endl;
    cout<<"Second Variable is:\t"<<nVariable2<<endl;
}
int g_Variable =20;
void GlobalVariableVsLocalVatiableScope(void)
{
    int g_Variable =10;
    g_Variable++;
    cout<<"The variable g_Variable after increment from 10 is:\t"<<g_Variable<<endl;
    ::g_Variable--;
    cout<<"The variable g_Variable after decrement from 20 is:\t"<<::g_Variable<<endl;
}
int main()
{
    //code comes here
    //Print_Binary_number();
    //Bit_Set_Example();
    //Variable_Scope_Example();
    GlobalVariableVsLocalVatiableScope();

    return 0;
}
