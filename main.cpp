/*#include <iostream>

using namespace std;

int main()
{

    cout << "Hello world!" << endl;
    return 0;
}
//0x7FFDBACAE488
*/

#include <iostream>
#include "first_program.h"
#include <cstdint>

using namespace std;


/*
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
*/
int doubleTheNumber(int x)
{
    return 2*x;
}

int main()
{
#ifndef DEFINED
#define DEFINED 10
    //this is the first time i wrote my C++ program

    int nDate(29), nYear(2017);
    int nNum_int{};
    int nNum_int_1();
    int nNum_int_2(0);
    int nNum_int_3;
    unsigned char sChar{179};
    float nFloat_Num{31};
    float nFloat_Den{3};
    uint16_t nInt_16{65535};
    uint8_t nInt_8{65};
    cout<< "nInit_8= " << nInt_8 <<endl;
    cout<< "nFloat_Num/nFloat_Den="<<nFloat_Num/nFloat_Den <<endl;
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
//Third program
    //cout<<"Double Number returned is:" << doubleTheNumber(functionCall())<<endl;
    //cout<<"function returned : " << functionCall() << endl;
//in CPP return value is must
#endif

#ifndef DEFINED
    //this is the first time i wrote my C++ program
//int date = 29, year=2017;
//string first_string = "This is first string statement";
    cout << "My First program is on: "<< date << "November" << year <<endl;
    cout<<"The string is :" << first_string << endl;
//Third program
    cout<<"Double Number returned is:" << double_number(function_call())<<endl;
    cout<<"function returned : " << function_call() << endl;
//in CPP return value is must
#endif

    return 0;
}
