/*
Write a function that takes in a time in seconds (as an integer) and returns a string in the format "HH:MM:SS".
For example, if the input is 3661, the output should be "01:01:01".

Here are some additional requirements and constraints:
1. The input time will be a non-negative integer.
2. The output should always have two digits for hours, minutes, and seconds (for example, "01" instead of "1").
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    system("cls");
    
    int n, hh, mm, ss;

    cout << "insert time in seconds: ";
    cin >> n;

    hh=n/3600; //display the hour
    mm=n/60-(hh*60); //display the minute
    ss=n/1-(hh*3600)-(mm*60); //display the second


    cout << "the time in HH:MM:SS format is " << setw(2) << setfill('0') << hh << ":"<< setw(2) << setfill('0') << mm << ":" << setw(2) << setfill('0') << ss;
    
    return 0;
}