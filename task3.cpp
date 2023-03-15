/*
Write a program to calculate the sum of the digits of a 4-digit number which is entered from keyboard. E.g.-
INPUT : 1234        OUTPUT : 10
*/
#include <iostream>

using namespace std;

int main(){
    system("cls");

    int n;
    int result=0;

    cout << "insert a 4-digit number: ";
    cin >> n;

    while (n>0){
        result=result+n%10; //result is previous result added by the remainder of n divided by 10
        n=n/10;
    }
    
    cout << "the sum of each digit is " << result;

    return 0;
}