#include<iostream>
using namespace std;

int main (){
     int number;
     int original,digit;
     int reverse=0;

     cout << "Enter the Number: "<<endl;
     cin >> number;
      original = number;
     while(number > 0)
    {   
        digit = number % 10;
        reverse = reverse*10 + digit;
        number = number/10;

    }

    if(original == reverse){

        cout << "The number is palindrome"<<endl;
    }
    else{
           cout << "The number is not palindrome"<<endl;
    }

    return 0;
}