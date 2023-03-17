/*
Suppose you entered a 6 digit number. Write a program to display a number whose digits are 2 greater than the corresponding digits of the entered number.
For example, if you entered number is 569678, then the displayed number should be 781890.
*/
#include <iostream>

using namespace std;

int main(){
    system("cls");

    int n,digit,pos=1, result=0;

    cout << "insert a 6-digit number: ";
    cin >> n;

    while (n>0){
        digit= n%10; //extract the last digit into digit
        digit+= 2; //adds 2 to the digit
        digit%= 10; //prevents overflow
        result= result+digit*pos; //places the digit multiplied by 10 into the result
        n/= 10; //n is n divided by 10
        pos*= 10; // pos is multiplied by 10
    }

    cout << "each digit added by 2 is " << result;

    return 0;
}