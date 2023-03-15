/*
Suppose you entered a 6 digit number. Write a program to display a number whose digits are 2 greater than the corresponding digits of the entered number.
For example, if you entered number is 569678, then the displayed number should be 781890.
*/
#include <iostream>

using namespace std;

int main(){
    system("cls");

    int n;

    cout << "insert a 6-digit number: ";
    cin >> n;    

    n=n+2;

    cout << "the number added by 2 is " << n;

    return 0;
}