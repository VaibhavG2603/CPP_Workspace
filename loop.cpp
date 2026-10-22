#include<iostream>
using namespace std;

int main(){
    int age;
    cout<< "Enter the Age:n"<<endl;
    cin >> age;
    age>18 ? cout << "Eligible for Vote" : cout <<"Not Elibible for Vote";
    return 0;
}