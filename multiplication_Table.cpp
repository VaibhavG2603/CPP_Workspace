#include<iostream>
using namespace std;

int main(){
    int number, Result;
    cout << "Enter the number which you want to print multiplication table: "<<endl;
    cin >> number;

    for (int i = 1; i <=10; i++)
    {
        Result =  number * i;
        cout << number << " X " << i << " = "<< Result << endl;
    }
    
    return 0;
}