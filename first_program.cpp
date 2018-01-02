#include <iostream>

using namespace std;
//test function call
int functionCall()
{
    int input_x;
//second program
//ensure this code is executed
cout<<"Entered Function call\n";

//get user input
cout<<"Enter a number:";
cin>>input_x;
cout<<"\nEntered Number is:\t" << input_x <<endl;

//notify exiting function
cout<<"Exiting the function call\n";
return input_x;
cout<<"THis line will never get executed\n";
}
