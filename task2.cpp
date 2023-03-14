/*
Suppose you entered a 6 digit number. Write a program to display a number whose digits are 2 greater than the corresponding digits of the entered number.
For example, if you entered number is 569678, then the displayed number should be 781890.
*/
#include <iostream>

using namespace std;

int main(){
    system("cls");

    int input;

    cout << "insert a 6-digit number: ";
    cin >> input;    

    input=input+2;

    cout << "your number added by 2 is " << input;

    return 0;
}