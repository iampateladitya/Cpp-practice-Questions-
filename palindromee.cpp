// today our question is 
// Write a program that acccept n digit number from user nd check whether it is palindrome number or not
// let's get started

#include<iostream>
using namespace std;

int main(){
    int reverse_num = 0, digit, remainder, input;
    cout<<"Enter a number for check it is palindrome or not :- ";cin>>input;

    digit = input;

    // Now we reversing the number 
    while(input!=0){
        remainder = input % 10;  // first it take input from user ex - 121; //  { 121 % 10 = 1 }, second loop = input value 12 now { 12 % 10 = 2 }
        reverse_num = ( reverse_num * 10 )+ remainder; // now default value of reverse = 0 { 0 * 10 + 1 = 1}, secong loop :- { 1 * 10 + 2 = 12} 
        input /= 10; // {121 / 10 = 12 }now input value change into 121 to 12, secong loop :- { 12 / 10 = 1 } now inpur value 1 now this loop again executed
        // until the input value == 0;
        // now reverse value == input ; 
    }
    // now let we understand how this program actually work 
    // Now we print answer  the number is palindrome or not through if - else condition ;
    if (digit == reverse_num)
    {
        cout<<digit<<" is palindrome number "<<endl;
    }
    else{
        cout<<digit<<" is not a palindrome number \n";
    }
    // now our program completed let we run and check it is worked or not 
    return 0;
}

// please like share and subscribe to my youtube channel
// thanks you 