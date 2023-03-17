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

    int n;

    cout << "insert a 4-digit number: ";
    cin >> n;

    n= ((((n+8)/3)%5)*5);

    cout << "the number now is " << n;

    return 0;
}