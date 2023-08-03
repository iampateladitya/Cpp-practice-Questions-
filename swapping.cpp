// Swapping the numbers using with third variable & without third variable ;

#include<iostream>
using namespace std;

int main(){
    int num1, num2;
    cout<<"Enter number 1  :-";cin>>num1; 
    cout<<"Enter number 2  :-";cin>>num2; 

    cout<<"Before Swapping Number 1 :- "<<num1<<" And Number 2 :- "<<num2<<endl<<endl;

    // swapping the numbers using thirds variable which is temp 
    // int temp = num1;    
    // num1 = num2;     //  we comment out these method 
    // num2 = temp; 

    // swapping without using third variable ;
    num1 = num2;
    num2 = num1;  // let's run the program 
// once again program run successfully 
    cout<<"After Swapping Number 1 :- "<<num1<<" And Number 2 :- "<<num2<<endl<<endl;
    // Now we run the program and check is it work or not 
    // Our numbers are swap successfully .
    // now we swap without using third variable 
    return 0;
}

// code link in description 
// PLease do not forgot the like , share and subscribe to my youtube channel 
// THANKS YOU 