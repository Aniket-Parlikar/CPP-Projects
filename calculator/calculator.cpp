/*
 * calculator.cpp
 *
 *  Created on: Apr 6, 2021
 *      Author: aniket
 */




#include <iostream>
#include <string>
//#include "main.h"
using namespace std;
// less-bad version
void printString(char s[100]);

int main()
{
    //Initializing the two numbers
    float num1{6},num2{4};
    int operation;
    //char choice;
    char s[80];
    cout << "Enter your name \n";
    cin >> s;
    printString(s);

    //Entering the first number
	cout << "Enter the first integer: \n";
	cin >>num1;

	//Entering the second number
	cout <<"Enter the second number: \n";
	cin>>num2;

    //Displaying the operations menu to the user
    cout<<"Enter the index of the operation you want to perform with the calculator \n";
    cout<<"1: Add 2: Subtract 3: Multiply 4: Divide \n";

    cin>>operation;

    switch(operation)
    {

    case 1:
		//Printing the result of addition
		cout <<num1<< "+" <<num2 << " = "<<num1 + num2<<" \n";
		break;

    case 2:
		//Printing the result of subtraction
		cout <<num1<< "-" <<num2 << " = "<<num1 - num2<<" \n";
		break;

    case 3:
		//Printing the result of subtraction
		cout <<num1<< "x" <<num2 << " = "<<num1 * num2<<" \n";
		break;

    case 4:
    	//Printing the result of subtraction
    	cout <<num1<< "/" <<num2 << " = "<<num1 / num2<<" \n";
    	break;

    default:
    	cout<<"You have inserted an incorrect operation \n";
    	break;
    }
	return 0;
}
