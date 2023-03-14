/*
What would be result:
Write a program to enter a 4 digit number which is 1233 from keyboard. 
Add 8 to the number and then divide it by 3. 
Now, the modulus of that number is taken with 5 
and then multiply the resultant value by 5. 
Display the final result.
*/
#include <iostream>

using namespace std;

int main(){
    system("cls");

    int input;

    cout << "insert a 4-digit number: ";
    cin >> input;

    input=input+8;
    input=input/3;
    input=input%5;
    input=input*5;

    cout << "The number now is " << input;

    return 0;
}